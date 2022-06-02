// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS5( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS5( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS6( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS6( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS7( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    7
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS7( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    7
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS7( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS7( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS8( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    8
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS8( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    8
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS8( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS8( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS9( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    9
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS9( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    9
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS9( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS9( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( OpenSSL );
MOD_INIT_DECL( OpenSSL$SSL );
MOD_INIT_DECL( OpenSSL$_util );
MOD_INIT_DECL( OpenSSL$crypto );
MOD_INIT_DECL( OpenSSL$version );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( backports );
MOD_INIT_DECL( certifi );
MOD_INIT_DECL( certifi$core );
MOD_INIT_DECL( chardet );
MOD_INIT_DECL( chardet$big5freq );
MOD_INIT_DECL( chardet$big5prober );
MOD_INIT_DECL( chardet$chardistribution );
MOD_INIT_DECL( chardet$charsetgroupprober );
MOD_INIT_DECL( chardet$charsetprober );
MOD_INIT_DECL( chardet$codingstatemachine );
MOD_INIT_DECL( chardet$compat );
MOD_INIT_DECL( chardet$cp949prober );
MOD_INIT_DECL( chardet$enums );
MOD_INIT_DECL( chardet$escprober );
MOD_INIT_DECL( chardet$escsm );
MOD_INIT_DECL( chardet$eucjpprober );
MOD_INIT_DECL( chardet$euckrfreq );
MOD_INIT_DECL( chardet$euckrprober );
MOD_INIT_DECL( chardet$euctwfreq );
MOD_INIT_DECL( chardet$euctwprober );
MOD_INIT_DECL( chardet$gb2312freq );
MOD_INIT_DECL( chardet$gb2312prober );
MOD_INIT_DECL( chardet$hebrewprober );
MOD_INIT_DECL( chardet$jisfreq );
MOD_INIT_DECL( chardet$jpcntx );
MOD_INIT_DECL( chardet$langbulgarianmodel );
MOD_INIT_DECL( chardet$langcyrillicmodel );
MOD_INIT_DECL( chardet$langgreekmodel );
MOD_INIT_DECL( chardet$langhebrewmodel );
MOD_INIT_DECL( chardet$langthaimodel );
MOD_INIT_DECL( chardet$langturkishmodel );
MOD_INIT_DECL( chardet$latin1prober );
MOD_INIT_DECL( chardet$mbcharsetprober );
MOD_INIT_DECL( chardet$mbcsgroupprober );
MOD_INIT_DECL( chardet$mbcssm );
MOD_INIT_DECL( chardet$sbcharsetprober );
MOD_INIT_DECL( chardet$sbcsgroupprober );
MOD_INIT_DECL( chardet$sjisprober );
MOD_INIT_DECL( chardet$universaldetector );
MOD_INIT_DECL( chardet$utf8prober );
MOD_INIT_DECL( chardet$version );
MOD_INIT_DECL( colorama );
MOD_INIT_DECL( colorama$ansi );
MOD_INIT_DECL( colorama$ansitowin32 );
MOD_INIT_DECL( colorama$initialise );
MOD_INIT_DECL( colorama$win32 );
MOD_INIT_DECL( colorama$winterm );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( cryptography$__about__ );
MOD_INIT_DECL( cryptography$exceptions );
MOD_INIT_DECL( cryptography$hazmat );
MOD_INIT_DECL( cryptography$hazmat$_der );
MOD_INIT_DECL( cryptography$hazmat$_oid );
MOD_INIT_DECL( cryptography$hazmat$backends );
MOD_INIT_DECL( cryptography$hazmat$backends$interfaces );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$aead );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$backend );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ciphers );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$cmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$decode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dh );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ec );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ed25519 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ed448 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$encode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hashes );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ocsp );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$poly1305 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$rsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$utils );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x25519 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x448 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x509 );
MOD_INIT_DECL( cryptography$hazmat$bindings );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$binding );
MOD_INIT_DECL( cryptography$hazmat$primitives );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dh );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ec );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ed25519 );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ed448 );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$padding );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$rsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$utils );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$x25519 );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$x448 );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$aead );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$algorithms );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$base );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$modes );
MOD_INIT_DECL( cryptography$hazmat$primitives$constant_time );
MOD_INIT_DECL( cryptography$hazmat$primitives$hashes );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf$scrypt );
MOD_INIT_DECL( cryptography$hazmat$primitives$serialization );
MOD_INIT_DECL( cryptography$hazmat$primitives$serialization$base );
MOD_INIT_DECL( cryptography$hazmat$primitives$serialization$ssh );
MOD_INIT_DECL( cryptography$utils );
MOD_INIT_DECL( cryptography$x509 );
MOD_INIT_DECL( cryptography$x509$base );
MOD_INIT_DECL( cryptography$x509$certificate_transparency );
MOD_INIT_DECL( cryptography$x509$extensions );
MOD_INIT_DECL( cryptography$x509$general_name );
MOD_INIT_DECL( cryptography$x509$name );
MOD_INIT_DECL( cryptography$x509$ocsp );
MOD_INIT_DECL( cryptography$x509$oid );
MOD_INIT_DECL( enum );
MOD_INIT_DECL( idna );
MOD_INIT_DECL( idna$core );
MOD_INIT_DECL( idna$idnadata );
MOD_INIT_DECL( idna$intranges );
MOD_INIT_DECL( idna$package_data );
MOD_INIT_DECL( idna$uts46data );
MOD_INIT_DECL( ipaddress );
MOD_INIT_DECL( requests );
MOD_INIT_DECL( requests$__version__ );
MOD_INIT_DECL( requests$_internal_utils );
MOD_INIT_DECL( requests$adapters );
MOD_INIT_DECL( requests$api );
MOD_INIT_DECL( requests$auth );
MOD_INIT_DECL( requests$certs );
MOD_INIT_DECL( requests$compat );
MOD_INIT_DECL( requests$cookies );
MOD_INIT_DECL( requests$exceptions );
MOD_INIT_DECL( requests$hooks );
MOD_INIT_DECL( requests$models );
MOD_INIT_DECL( requests$packages );
MOD_INIT_DECL( requests$sessions );
MOD_INIT_DECL( requests$status_codes );
MOD_INIT_DECL( requests$structures );
MOD_INIT_DECL( requests$utils );
MOD_INIT_DECL( six );
MOD_INIT_DECL( socks );
MOD_INIT_DECL( tqdm );
MOD_INIT_DECL( tqdm$_dist_ver );
MOD_INIT_DECL( tqdm$_monitor );
MOD_INIT_DECL( tqdm$_tqdm_pandas );
MOD_INIT_DECL( tqdm$cli );
MOD_INIT_DECL( tqdm$gui );
MOD_INIT_DECL( tqdm$notebook );
MOD_INIT_DECL( tqdm$std );
MOD_INIT_DECL( tqdm$utils );
MOD_INIT_DECL( tqdm$version );
MOD_INIT_DECL( urllib3 );
MOD_INIT_DECL( urllib3$_collections );
MOD_INIT_DECL( urllib3$connection );
MOD_INIT_DECL( urllib3$connectionpool );
MOD_INIT_DECL( urllib3$contrib );
MOD_INIT_DECL( urllib3$contrib$_appengine_environ );
MOD_INIT_DECL( urllib3$contrib$pyopenssl );
MOD_INIT_DECL( urllib3$contrib$socks );
MOD_INIT_DECL( urllib3$exceptions );
MOD_INIT_DECL( urllib3$fields );
MOD_INIT_DECL( urllib3$filepost );
MOD_INIT_DECL( urllib3$packages );
MOD_INIT_DECL( urllib3$packages$backports );
MOD_INIT_DECL( urllib3$packages$backports$makefile );
MOD_INIT_DECL( urllib3$packages$six );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( urllib3$poolmanager );
MOD_INIT_DECL( urllib3$request );
MOD_INIT_DECL( urllib3$response );
MOD_INIT_DECL( urllib3$util );
MOD_INIT_DECL( urllib3$util$connection );
MOD_INIT_DECL( urllib3$util$queue );
MOD_INIT_DECL( urllib3$util$request );
MOD_INIT_DECL( urllib3$util$response );
MOD_INIT_DECL( urllib3$util$retry );
MOD_INIT_DECL( urllib3$util$ssl_ );
MOD_INIT_DECL( urllib3$util$timeout );
MOD_INIT_DECL( urllib3$util$url );
MOD_INIT_DECL( urllib3$util$wait );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"OpenSSL", MOD_INIT_NAME( OpenSSL ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenSSL.SSL", MOD_INIT_NAME( OpenSSL$SSL ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL._util", MOD_INIT_NAME( OpenSSL$_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.crypto", MOD_INIT_NAME( OpenSSL$crypto ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.version", MOD_INIT_NAME( OpenSSL$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_File", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_collections", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_functools", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_hotshot", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_io", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_locale", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_random", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_scproxy", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"array", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"backports", MOD_INIT_NAME( backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"cPickle", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"cStringIO", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"certifi", MOD_INIT_NAME( certifi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"certifi.core", MOD_INIT_NAME( certifi$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet", MOD_INIT_NAME( chardet ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.compat", MOD_INIT_NAME( chardet$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.enums", MOD_INIT_NAME( chardet$enums ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escprober", MOD_INIT_NAME( chardet$escprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escsm", MOD_INIT_NAME( chardet$escsm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langturkishmodel", MOD_INIT_NAME( chardet$langturkishmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.version", MOD_INIT_NAME( chardet$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama", MOD_INIT_NAME( colorama ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"colorama.ansi", MOD_INIT_NAME( colorama$ansi ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.ansitowin32", MOD_INIT_NAME( colorama$ansitowin32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.initialise", MOD_INIT_NAME( colorama$initialise ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.win32", MOD_INIT_NAME( colorama$win32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.winterm", MOD_INIT_NAME( colorama$winterm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography", MOD_INIT_NAME( cryptography ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.__about__", MOD_INIT_NAME( cryptography$__about__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.exceptions", MOD_INIT_NAME( cryptography$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat", MOD_INIT_NAME( cryptography$hazmat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat._der", MOD_INIT_NAME( cryptography$hazmat$_der ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat._oid", MOD_INIT_NAME( cryptography$hazmat$_oid ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends", MOD_INIT_NAME( cryptography$hazmat$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.backends.interfaces", MOD_INIT_NAME( cryptography$hazmat$backends$interfaces ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl", MOD_INIT_NAME( cryptography$hazmat$backends$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.backends.openssl.aead", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.backend", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$backend ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.ciphers", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ciphers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.cmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$cmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.decode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$decode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.dh", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.dsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.ec", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.ed25519", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ed25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.ed448", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ed448 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.encode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$encode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.hashes", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.hmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.ocsp", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ocsp ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.poly1305", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$poly1305 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.rsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.utils", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.x25519", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.x448", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x448 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.backends.openssl.x509", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x509 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.bindings", MOD_INIT_NAME( cryptography$hazmat$bindings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.bindings._constant_time", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"cryptography.hazmat.bindings.openssl", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.bindings.openssl._conditional", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$_conditional ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.bindings.openssl.binding", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$binding ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives", MOD_INIT_NAME( cryptography$hazmat$primitives ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.primitives.asymmetric", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.primitives.asymmetric.dh", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.dsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.ec", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.ed25519", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$ed25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.ed448", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$ed448 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.padding", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$padding ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.rsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.utils", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.x25519", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.asymmetric.x448", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$x448 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.ciphers", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.primitives.ciphers.aead", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.ciphers.algorithms", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$algorithms ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.ciphers.base", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.ciphers.modes", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$modes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.constant_time", MOD_INIT_NAME( cryptography$hazmat$primitives$constant_time ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.hashes", MOD_INIT_NAME( cryptography$hazmat$primitives$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.kdf", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.primitives.kdf.scrypt", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf$scrypt ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.serialization", MOD_INIT_NAME( cryptography$hazmat$primitives$serialization ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.primitives.serialization.base", MOD_INIT_NAME( cryptography$hazmat$primitives$serialization$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.primitives.serialization.ssh", MOD_INIT_NAME( cryptography$hazmat$primitives$serialization$ssh ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.utils", MOD_INIT_NAME( cryptography$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509", MOD_INIT_NAME( cryptography$x509 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.x509.base", MOD_INIT_NAME( cryptography$x509$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.certificate_transparency", MOD_INIT_NAME( cryptography$x509$certificate_transparency ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.extensions", MOD_INIT_NAME( cryptography$x509$extensions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.general_name", MOD_INIT_NAME( cryptography$x509$general_name ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.name", MOD_INIT_NAME( cryptography$x509$name ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.ocsp", MOD_INIT_NAME( cryptography$x509$ocsp ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.x509.oid", MOD_INIT_NAME( cryptography$x509$oid ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"enum", MOD_INIT_NAME( enum ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"grp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"idna.core", MOD_INIT_NAME( idna$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ipaddress", MOD_INIT_NAME( ipaddress ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"itertools", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"math", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"operator", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"parser", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"readline", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"requests", MOD_INIT_NAME( requests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"requests.__version__", MOD_INIT_NAME( requests$__version__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests._internal_utils", MOD_INIT_NAME( requests$_internal_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.adapters", MOD_INIT_NAME( requests$adapters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.api", MOD_INIT_NAME( requests$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.auth", MOD_INIT_NAME( requests$auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.certs", MOD_INIT_NAME( requests$certs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.compat", MOD_INIT_NAME( requests$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.cookies", MOD_INIT_NAME( requests$cookies ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.exceptions", MOD_INIT_NAME( requests$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.hooks", MOD_INIT_NAME( requests$hooks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.models", MOD_INIT_NAME( requests$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages", MOD_INIT_NAME( requests$packages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.sessions", MOD_INIT_NAME( requests$sessions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.status_codes", MOD_INIT_NAME( requests$status_codes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.structures", MOD_INIT_NAME( requests$structures ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.utils", MOD_INIT_NAME( requests$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"resource", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"socks", MOD_INIT_NAME( socks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"strop", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"time", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"tqdm", MOD_INIT_NAME( tqdm ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"tqdm._dist_ver", MOD_INIT_NAME( tqdm$_dist_ver ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm._monitor", MOD_INIT_NAME( tqdm$_monitor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm._tqdm_pandas", MOD_INIT_NAME( tqdm$_tqdm_pandas ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.cli", MOD_INIT_NAME( tqdm$cli ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.gui", MOD_INIT_NAME( tqdm$gui ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.notebook", MOD_INIT_NAME( tqdm$notebook ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.std", MOD_INIT_NAME( tqdm$std ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.utils", MOD_INIT_NAME( tqdm$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tqdm.version", MOD_INIT_NAME( tqdm$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"urllib3", MOD_INIT_NAME( urllib3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connection", MOD_INIT_NAME( urllib3$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.contrib", MOD_INIT_NAME( urllib3$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.contrib._appengine_environ", MOD_INIT_NAME( urllib3$contrib$_appengine_environ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.contrib.pyopenssl", MOD_INIT_NAME( urllib3$contrib$pyopenssl ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.contrib.socks", MOD_INIT_NAME( urllib3$contrib$socks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.fields", MOD_INIT_NAME( urllib3$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages", MOD_INIT_NAME( urllib3$packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.backports", MOD_INIT_NAME( urllib3$packages$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.backports.makefile", MOD_INIT_NAME( urllib3$packages$backports$makefile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.request", MOD_INIT_NAME( urllib3$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.response", MOD_INIT_NAME( urllib3$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util", MOD_INIT_NAME( urllib3$util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.queue", MOD_INIT_NAME( urllib3$util$queue ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.wait", MOD_INIT_NAME( urllib3$util$wait ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"BaseHTTPServer", NULL, 1134806, 22454, NUITKA_BYTECODE_FLAG },
    { (char *)"Bastion", NULL, 1157260, 7207, NUITKA_BYTECODE_FLAG },
    { (char *)"CGIHTTPServer", NULL, 1164467, 11491, NUITKA_BYTECODE_FLAG },
    { (char *)"Canvas", NULL, 1175958, 18516, NUITKA_BYTECODE_FLAG },
    { (char *)"Carbon", NULL, 1194474, 452, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"Carbon.File", NULL, 1194926, 196, NUITKA_BYTECODE_FLAG },
    { (char *)"ConfigParser", NULL, 1195122, 27388, NUITKA_BYTECODE_FLAG },
    { (char *)"Cookie", NULL, 1222510, 24056, NUITKA_BYTECODE_FLAG },
    { (char *)"Dialog", NULL, 1246566, 2097, NUITKA_BYTECODE_FLAG },
    { (char *)"DocXMLRPCServer", NULL, 1248663, 10890, NUITKA_BYTECODE_FLAG },
    { (char *)"FileDialog", NULL, 1259553, 10524, NUITKA_BYTECODE_FLAG },
    { (char *)"FixTk", NULL, 1270077, 2195, NUITKA_BYTECODE_FLAG },
    { (char *)"HTMLParser", NULL, 1272272, 14903, NUITKA_BYTECODE_FLAG },
    { (char *)"MimeWriter", NULL, 1287175, 7689, NUITKA_BYTECODE_FLAG },
    { (char *)"Queue", NULL, 1294864, 10452, NUITKA_BYTECODE_FLAG },
    { (char *)"ScrolledText", NULL, 1305316, 2841, NUITKA_BYTECODE_FLAG },
    { (char *)"SimpleDialog", NULL, 1308157, 4738, NUITKA_BYTECODE_FLAG },
    { (char *)"SimpleHTTPServer", NULL, 1312895, 8409, NUITKA_BYTECODE_FLAG },
    { (char *)"SimpleXMLRPCServer", NULL, 1321304, 24187, NUITKA_BYTECODE_FLAG },
    { (char *)"SocketServer", NULL, 1345491, 26188, NUITKA_BYTECODE_FLAG },
    { (char *)"StringIO", NULL, 1371679, 12175, NUITKA_BYTECODE_FLAG },
    { (char *)"Tix", NULL, 1383854, 108403, NUITKA_BYTECODE_FLAG },
    { (char *)"Tkconstants", NULL, 1492257, 2275, NUITKA_BYTECODE_FLAG },
    { (char *)"Tkdnd", NULL, 1494532, 13779, NUITKA_BYTECODE_FLAG },
    { (char *)"Tkinter", NULL, 1508311, 220866, NUITKA_BYTECODE_FLAG },
    { (char *)"UserDict", NULL, 1729177, 11368, NUITKA_BYTECODE_FLAG },
    { (char *)"UserList", NULL, 1740545, 7827, NUITKA_BYTECODE_FLAG },
    { (char *)"UserString", NULL, 1748372, 17372, NUITKA_BYTECODE_FLAG },
    { (char *)"_LWPCookieJar", NULL, 1765744, 5648, NUITKA_BYTECODE_FLAG },
    { (char *)"_MozillaCookieJar", NULL, 1771392, 4601, NUITKA_BYTECODE_FLAG },
    { (char *)"__future__", NULL, 1775993, 4437, NUITKA_BYTECODE_FLAG },
    { (char *)"_abcoll", NULL, 1780430, 29522, NUITKA_BYTECODE_FLAG },
    { (char *)"_osx_support", NULL, 1809952, 12453, NUITKA_BYTECODE_FLAG },
    { (char *)"_pyio", NULL, 1822405, 71168, NUITKA_BYTECODE_FLAG },
    { (char *)"_strptime", NULL, 1893573, 15904, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata", NULL, 1909477, 20263, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata_i686_conda_cos6_linux_gnu", NULL, 1929740, 21042, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata_powerpc64le_conda_cos7_linux_gnu", NULL, 1950782, 20818, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata_x86_64_apple_darwin13_4_0", NULL, 1971600, 21523, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata_x86_64_conda_cos6_linux_gnu", NULL, 1993123, 20786, NUITKA_BYTECODE_FLAG },
    { (char *)"_threading_local", NULL, 2013909, 6698, NUITKA_BYTECODE_FLAG },
    { (char *)"_weakrefset", NULL, 2020607, 11446, NUITKA_BYTECODE_FLAG },
    { (char *)"abc", NULL, 2032053, 6542, NUITKA_BYTECODE_FLAG },
    { (char *)"aifc", NULL, 2038595, 33152, NUITKA_BYTECODE_FLAG },
    { (char *)"anydbm", NULL, 2071747, 2903, NUITKA_BYTECODE_FLAG },
    { (char *)"argparse", NULL, 2074650, 70094, NUITKA_BYTECODE_FLAG },
    { (char *)"ast", NULL, 2144744, 13818, NUITKA_BYTECODE_FLAG },
    { (char *)"asynchat", NULL, 2158562, 9912, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncore", NULL, 2168474, 21068, NUITKA_BYTECODE_FLAG },
    { (char *)"atexit", NULL, 2189542, 2417, NUITKA_BYTECODE_FLAG },
    { (char *)"audiodev", NULL, 2191959, 9460, NUITKA_BYTECODE_FLAG },
    { (char *)"bdb", NULL, 2201419, 21350, NUITKA_BYTECODE_FLAG },
    { (char *)"binhex", NULL, 2222769, 17339, NUITKA_BYTECODE_FLAG },
    { (char *)"bisect", NULL, 2240108, 3248, NUITKA_BYTECODE_FLAG },
    { (char *)"bsddb", NULL, 2243356, 13811, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"cProfile", NULL, 2257167, 6905, NUITKA_BYTECODE_FLAG },
    { (char *)"calendar", NULL, 2264072, 30828, NUITKA_BYTECODE_FLAG },
    { (char *)"cgi", NULL, 2294900, 35706, NUITKA_BYTECODE_FLAG },
    { (char *)"cgitb", NULL, 2330606, 12796, NUITKA_BYTECODE_FLAG },
    { (char *)"chunk", NULL, 2343402, 6001, NUITKA_BYTECODE_FLAG },
    { (char *)"cmd", NULL, 2349403, 14808, NUITKA_BYTECODE_FLAG },
    { (char *)"code", NULL, 2364211, 10918, NUITKA_BYTECODE_FLAG },
    { (char *)"codeop", NULL, 2375129, 6959, NUITKA_BYTECODE_FLAG },
    { (char *)"collections", NULL, 2382088, 28079, NUITKA_BYTECODE_FLAG },
    { (char *)"colorsys", NULL, 2410167, 4279, NUITKA_BYTECODE_FLAG },
    { (char *)"commands", NULL, 2414446, 2683, NUITKA_BYTECODE_FLAG },
    { (char *)"compileall", NULL, 2417129, 7231, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler", NULL, 2424360, 1326, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"compiler.ast", NULL, 2425686, 86510, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.consts", NULL, 2512196, 766, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.future", NULL, 2512962, 3318, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.misc", NULL, 2516280, 4428, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.pyassem", NULL, 2520708, 28903, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.pycodegen", NULL, 2549611, 62908, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.symbols", NULL, 2612519, 19741, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.syntax", NULL, 2632260, 2096, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.transformer", NULL, 2634356, 52262, NUITKA_BYTECODE_FLAG },
    { (char *)"compiler.visitor", NULL, 2686618, 4549, NUITKA_BYTECODE_FLAG },
    { (char *)"contextlib", NULL, 2691167, 4890, NUITKA_BYTECODE_FLAG },
    { (char *)"cookielib", NULL, 2696057, 58306, NUITKA_BYTECODE_FLAG },
    { (char *)"copy", NULL, 2754363, 13124, NUITKA_BYTECODE_FLAG },
    { (char *)"csv", NULL, 2767487, 14572, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes", NULL, 2782059, 22525, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes._endian", NULL, 2804584, 2521, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib", NULL, 2807105, 345, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes.macholib.dyld", NULL, 2807450, 6473, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.dylib", NULL, 2813923, 2455, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.framework", NULL, 2816378, 2765, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.util", NULL, 2819143, 9593, NUITKA_BYTECODE_FLAG },
    { (char *)"curses", NULL, 2828736, 1656, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"curses.ascii", NULL, 2830392, 5904, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.has_key", NULL, 2836296, 6006, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.panel", NULL, 2842302, 306, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.textpad", NULL, 2842608, 7550, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.wrapper", NULL, 2850158, 1284, NUITKA_BYTECODE_FLAG },
    { (char *)"dbhash", NULL, 2851442, 784, NUITKA_BYTECODE_FLAG },
    { (char *)"decimal", NULL, 2852226, 181582, NUITKA_BYTECODE_FLAG },
    { (char *)"difflib", NULL, 3033808, 63888, NUITKA_BYTECODE_FLAG },
    { (char *)"dircache", NULL, 3097696, 1716, NUITKA_BYTECODE_FLAG },
    { (char *)"dis", NULL, 3099412, 6516, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils", NULL, 3105928, 444, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.archive_util", NULL, 3106372, 7889, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.bcppcompiler", NULL, 3114261, 8207, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.ccompiler", NULL, 3122468, 38909, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cmd", NULL, 3161377, 18165, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command", NULL, 3179542, 694, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.command.bdist", NULL, 3180236, 5383, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_dumb", NULL, 3185619, 5160, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_msi", NULL, 3190779, 24582, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_rpm", NULL, 3215361, 17933, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_wininst", NULL, 3233294, 11087, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build", NULL, 3244381, 5508, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_clib", NULL, 3249889, 6709, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_ext", NULL, 3256598, 19967, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_py", NULL, 3276565, 12262, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_scripts", NULL, 3288827, 4728, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.check", NULL, 3293555, 6698, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.clean", NULL, 3300253, 3246, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.config", NULL, 3303499, 13417, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install", NULL, 3316916, 17673, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_data", NULL, 3334589, 3369, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_egg_info", NULL, 3337958, 4069, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_headers", NULL, 3342027, 2506, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_lib", NULL, 3344533, 7117, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_scripts", NULL, 3351650, 3179, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.register", NULL, 3354829, 10681, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.sdist", NULL, 3365510, 17354, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.upload", NULL, 3382864, 6522, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.config", NULL, 3389386, 3816, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.core", NULL, 3393202, 7676, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cygwinccompiler", NULL, 3400878, 10396, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.debug", NULL, 3411274, 283, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dep_util", NULL, 3411557, 3320, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dir_util", NULL, 3414877, 7037, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dist", NULL, 3421914, 41647, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.emxccompiler", NULL, 3463561, 7792, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.errors", NULL, 3471353, 7017, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.extension", NULL, 3478370, 7552, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.fancy_getopt", NULL, 3485922, 12727, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.file_util", NULL, 3498649, 6927, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.filelist", NULL, 3505576, 11377, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.log", NULL, 3516953, 3222, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.msvc9compiler", NULL, 3520175, 22636, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.msvccompiler", NULL, 3542811, 18479, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.spawn", NULL, 3561290, 6724, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.sysconfig", NULL, 3568014, 14033, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.text_file", NULL, 3582047, 9658, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.unixccompiler", NULL, 3591705, 8339, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.util", NULL, 3600044, 14896, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.version", NULL, 3614940, 7755, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.versionpredicate", NULL, 3622695, 5793, NUITKA_BYTECODE_FLAG },
    { (char *)"doctest", NULL, 3628488, 88106, NUITKA_BYTECODE_FLAG },
    { (char *)"dumbdbm", NULL, 3716594, 7441, NUITKA_BYTECODE_FLAG },
    { (char *)"dummy_thread", NULL, 3724035, 5941, NUITKA_BYTECODE_FLAG },
    { (char *)"dummy_threading", NULL, 3729976, 1314, NUITKA_BYTECODE_FLAG },
    { (char *)"email", NULL, 3731290, 3086, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email._parseaddr", NULL, 3734376, 14884, NUITKA_BYTECODE_FLAG },
    { (char *)"email.base64mime", NULL, 3749260, 5500, NUITKA_BYTECODE_FLAG },
    { (char *)"email.charset", NULL, 3754760, 14162, NUITKA_BYTECODE_FLAG },
    { (char *)"email.encoders", NULL, 3768922, 2483, NUITKA_BYTECODE_FLAG },
    { (char *)"email.errors", NULL, 3771405, 4076, NUITKA_BYTECODE_FLAG },
    { (char *)"email.feedparser", NULL, 3775481, 11986, NUITKA_BYTECODE_FLAG },
    { (char *)"email.generator", NULL, 3787467, 11075, NUITKA_BYTECODE_FLAG },
    { (char *)"email.header", NULL, 3798542, 14246, NUITKA_BYTECODE_FLAG },
    { (char *)"email.iterators", NULL, 3812788, 2543, NUITKA_BYTECODE_FLAG },
    { (char *)"email.message", NULL, 3815331, 30370, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime", NULL, 3845701, 159, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email.mime.application", NULL, 3845860, 1687, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.audio", NULL, 3847547, 3049, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.base", NULL, 3850596, 1219, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.image", NULL, 3851815, 2152, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.message", NULL, 3853967, 1551, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.multipart", NULL, 3855518, 1772, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.nonmultipart", NULL, 3857290, 991, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.text", NULL, 3858281, 1411, NUITKA_BYTECODE_FLAG },
    { (char *)"email.parser", NULL, 3859692, 4116, NUITKA_BYTECODE_FLAG },
    { (char *)"email.quoprimime", NULL, 3863808, 9323, NUITKA_BYTECODE_FLAG },
    { (char *)"email.utils", NULL, 3873131, 9908, NUITKA_BYTECODE_FLAG },
    { (char *)"encodings.mbcs", NULL, 3883039, 2331, NUITKA_BYTECODE_FLAG },
    { (char *)"filecmp", NULL, 3885370, 10354, NUITKA_BYTECODE_FLAG },
    { (char *)"fileinput", NULL, 3895724, 15602, NUITKA_BYTECODE_FLAG },
    { (char *)"fnmatch", NULL, 3911326, 3828, NUITKA_BYTECODE_FLAG },
    { (char *)"formatter", NULL, 3915154, 22019, NUITKA_BYTECODE_FLAG },
    { (char *)"fpformat", NULL, 3937173, 4991, NUITKA_BYTECODE_FLAG },
    { (char *)"fractions", NULL, 3942164, 21146, NUITKA_BYTECODE_FLAG },
    { (char *)"ftplib", NULL, 3963310, 37300, NUITKA_BYTECODE_FLAG },
    { (char *)"genericpath", NULL, 4000610, 3916, NUITKA_BYTECODE_FLAG },
    { (char *)"getopt", NULL, 4004526, 7016, NUITKA_BYTECODE_FLAG },
    { (char *)"getpass", NULL, 4011542, 4995, NUITKA_BYTECODE_FLAG },
    { (char *)"gettext", NULL, 4016537, 19652, NUITKA_BYTECODE_FLAG },
    { (char *)"glob", NULL, 4036189, 3231, NUITKA_BYTECODE_FLAG },
    { (char *)"gzip", NULL, 4039420, 16338, NUITKA_BYTECODE_FLAG },
    { (char *)"hashlib", NULL, 4055758, 7234, NUITKA_BYTECODE_FLAG },
    { (char *)"heapq", NULL, 4062992, 15222, NUITKA_BYTECODE_FLAG },
    { (char *)"hmac", NULL, 4078214, 4904, NUITKA_BYTECODE_FLAG },
    { (char *)"hotshot", NULL, 4083118, 3883, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"hotshot.log", NULL, 4087001, 6053, NUITKA_BYTECODE_FLAG },
    { (char *)"hotshot.stats", NULL, 4093054, 3751, NUITKA_BYTECODE_FLAG },
    { (char *)"hotshot.stones", NULL, 4096805, 1222, NUITKA_BYTECODE_FLAG },
    { (char *)"htmlentitydefs", NULL, 4098027, 6396, NUITKA_BYTECODE_FLAG },
    { (char *)"htmllib", NULL, 4104423, 23668, NUITKA_BYTECODE_FLAG },
    { (char *)"httplib", NULL, 4128091, 40657, NUITKA_BYTECODE_FLAG },
    { (char *)"ihooks", NULL, 4168748, 23917, NUITKA_BYTECODE_FLAG },
    { (char *)"imaplib", NULL, 4192665, 48592, NUITKA_BYTECODE_FLAG },
    { (char *)"imghdr", NULL, 4241257, 5422, NUITKA_BYTECODE_FLAG },
    { (char *)"importlib", NULL, 4246679, 1605, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"imputil", NULL, 4248284, 17021, NUITKA_BYTECODE_FLAG },
    { (char *)"inspect", NULL, 4265305, 42774, NUITKA_BYTECODE_FLAG },
    { (char *)"io", NULL, 4308079, 3766, NUITKA_BYTECODE_FLAG },
    { (char *)"json", NULL, 4311845, 14103, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"json.decoder", NULL, 4325948, 12396, NUITKA_BYTECODE_FLAG },
    { (char *)"json.encoder", NULL, 4338344, 14342, NUITKA_BYTECODE_FLAG },
    { (char *)"json.scanner", NULL, 4352686, 2332, NUITKA_BYTECODE_FLAG },
    { (char *)"json.tool", NULL, 4355018, 1360, NUITKA_BYTECODE_FLAG },
    { (char *)"keyword", NULL, 4356378, 2171, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3", NULL, 4358549, 156, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.btm_matcher", NULL, 4358705, 6229, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.btm_utils", NULL, 4364934, 8036, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_base", NULL, 4372970, 7770, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_util", NULL, 4380740, 15933, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes", NULL, 4396673, 162, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.fixes.fix_apply", NULL, 4396835, 2187, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_asserts", NULL, 4399022, 1664, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_basestring", NULL, 4400686, 910, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_buffer", NULL, 4401596, 1067, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_dict", NULL, 4402663, 3909, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_except", NULL, 4406572, 3149, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exec", NULL, 4409721, 1535, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_execfile", NULL, 4411256, 2211, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exitfunc", NULL, 4413467, 2934, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_filter", NULL, 4416401, 2373, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_funcattrs", NULL, 4418774, 1231, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_future", NULL, 4420005, 1036, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_getcwdu", NULL, 4421041, 1043, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_has_key", NULL, 4422084, 3301, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_idioms", NULL, 4425385, 4788, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_import", NULL, 4430173, 3467, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports", NULL, 4433640, 5742, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports2", NULL, 4439382, 700, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_input", NULL, 4440082, 1251, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_intern", NULL, 4441333, 1900, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_isinstance", NULL, 4443233, 1955, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools", NULL, 4445188, 1908, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools_imports", NULL, 4447096, 2133, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_long", NULL, 4449229, 958, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_map", NULL, 4450187, 3157, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_metaclass", NULL, 4453344, 6930, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_methodattrs", NULL, 4460274, 1255, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ne", NULL, 4461529, 1141, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_next", NULL, 4462670, 3843, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_nonzero", NULL, 4466513, 1203, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_numliterals", NULL, 4467716, 1405, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_operator", NULL, 4469121, 5697, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_paren", NULL, 4474818, 1660, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_print", NULL, 4476478, 2883, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raise", NULL, 4479361, 2615, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raw_input", NULL, 4481976, 1053, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_reduce", NULL, 4483029, 1379, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_renames", NULL, 4484408, 2722, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_repr", NULL, 4487130, 1133, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_set_literal", NULL, 4488263, 2144, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_standarderror", NULL, 4490407, 970, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_sys_exc", NULL, 4491377, 1861, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_throw", NULL, 4493238, 2113, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_tuple_params", NULL, 4495351, 5820, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_types", NULL, 4501171, 2313, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_unicode", NULL, 4503484, 1872, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_urllib", NULL, 4505356, 7485, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ws_comma", NULL, 4512841, 1499, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xrange", NULL, 4514340, 3375, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xreadlines", NULL, 4517715, 1269, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_zip", NULL, 4518984, 1463, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.main", NULL, 4520447, 10193, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.patcomp", NULL, 4530640, 7037, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2", NULL, 4537677, 203, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.pgen2.conv", NULL, 4537880, 8403, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.driver", NULL, 4546283, 6936, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.grammar", NULL, 4553219, 8083, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.literals", NULL, 4561302, 2158, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.parse", NULL, 4563460, 7672, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.pgen", NULL, 4571132, 13414, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.token", NULL, 4584546, 2443, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.tokenize", NULL, 4586989, 17703, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pygram", NULL, 4604692, 1544, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pytree", NULL, 4606236, 33107, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.refactor", NULL, 4639343, 25421, NUITKA_BYTECODE_FLAG },
    { (char *)"linecache", NULL, 4664764, 3486, NUITKA_BYTECODE_FLAG },
    { (char *)"logging", NULL, 4668250, 61973, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"logging.config", NULL, 4730223, 27862, NUITKA_BYTECODE_FLAG },
    { (char *)"logging.handlers", NULL, 4758085, 42023, NUITKA_BYTECODE_FLAG },
    { (char *)"macpath", NULL, 4800108, 8376, NUITKA_BYTECODE_FLAG },
    { (char *)"macurl2path", NULL, 4808484, 2384, NUITKA_BYTECODE_FLAG },
    { (char *)"mailbox", NULL, 4810868, 84812, NUITKA_BYTECODE_FLAG },
    { (char *)"mailcap", NULL, 4895680, 7552, NUITKA_BYTECODE_FLAG },
    { (char *)"markupbase", NULL, 4903232, 9888, NUITKA_BYTECODE_FLAG },
    { (char *)"md5", NULL, 4913120, 407, NUITKA_BYTECODE_FLAG },
    { (char *)"mhlib", NULL, 4913527, 36655, NUITKA_BYTECODE_FLAG },
    { (char *)"mimetools", NULL, 4950182, 8933, NUITKA_BYTECODE_FLAG },
    { (char *)"mimetypes", NULL, 4959115, 19184, NUITKA_BYTECODE_FLAG },
    { (char *)"mimify", NULL, 4978299, 12548, NUITKA_BYTECODE_FLAG },
    { (char *)"modulefinder", NULL, 4990847, 20414, NUITKA_BYTECODE_FLAG },
    { (char *)"multifile", NULL, 5011261, 5967, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing", NULL, 5017228, 9419, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.connection", NULL, 5026647, 15675, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.dummy", NULL, 5042322, 6192, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.dummy.connection", NULL, 5048514, 3200, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.forking", NULL, 5051714, 15687, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.heap", NULL, 5067401, 7641, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.managers", NULL, 5075042, 42398, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.pool", NULL, 5117440, 24730, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.process", NULL, 5142170, 10558, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.queues", NULL, 5152728, 12786, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.reduction", NULL, 5165514, 6635, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.sharedctypes", NULL, 5172149, 9586, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.synchronize", NULL, 5181735, 12460, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.util", NULL, 5194195, 11173, NUITKA_BYTECODE_FLAG },
    { (char *)"mutex", NULL, 5205368, 2767, NUITKA_BYTECODE_FLAG },
    { (char *)"netrc", NULL, 5208135, 5039, NUITKA_BYTECODE_FLAG },
    { (char *)"new", NULL, 5213174, 891, NUITKA_BYTECODE_FLAG },
    { (char *)"nntplib", NULL, 5214065, 22664, NUITKA_BYTECODE_FLAG },
    { (char *)"ntpath", NULL, 5236729, 13935, NUITKA_BYTECODE_FLAG },
    { (char *)"nturl2path", NULL, 5250664, 1918, NUITKA_BYTECODE_FLAG },
    { (char *)"numbers", NULL, 5252582, 16298, NUITKA_BYTECODE_FLAG },
    { (char *)"opcode", NULL, 5268880, 6322, NUITKA_BYTECODE_FLAG },
    { (char *)"optparse", NULL, 5275202, 59066, NUITKA_BYTECODE_FLAG },
    { (char *)"os", NULL, 5334268, 27642, NUITKA_BYTECODE_FLAG },
    { (char *)"os2emxpath", NULL, 5361910, 4850, NUITKA_BYTECODE_FLAG },
    { (char *)"pdb", NULL, 5366760, 47879, NUITKA_BYTECODE_FLAG },
    { (char *)"pickle", NULL, 5414639, 42400, NUITKA_BYTECODE_FLAG },
    { (char *)"pickletools", NULL, 5457039, 58208, NUITKA_BYTECODE_FLAG },
    { (char *)"pipes", NULL, 5515247, 9892, NUITKA_BYTECODE_FLAG },
    { (char *)"pkgutil", NULL, 5525139, 20172, NUITKA_BYTECODE_FLAG },
    { (char *)"platform", NULL, 5545311, 39811, NUITKA_BYTECODE_FLAG },
    { (char *)"plistlib", NULL, 5585122, 21416, NUITKA_BYTECODE_FLAG },
    { (char *)"popen2", NULL, 5606538, 9609, NUITKA_BYTECODE_FLAG },
    { (char *)"poplib", NULL, 5616147, 14558, NUITKA_BYTECODE_FLAG },
    { (char *)"posixfile", NULL, 5630705, 8088, NUITKA_BYTECODE_FLAG },
    { (char *)"posixpath", NULL, 5638793, 12305, NUITKA_BYTECODE_FLAG },
    { (char *)"pprint", NULL, 5651098, 10889, NUITKA_BYTECODE_FLAG },
    { (char *)"profile", NULL, 5661987, 17891, NUITKA_BYTECODE_FLAG },
    { (char *)"pstats", NULL, 5679878, 27225, NUITKA_BYTECODE_FLAG },
    { (char *)"pty", NULL, 5707103, 5328, NUITKA_BYTECODE_FLAG },
    { (char *)"py_compile", NULL, 5712431, 6679, NUITKA_BYTECODE_FLAG },
    { (char *)"pyclbr", NULL, 5719110, 10124, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc", NULL, 5729234, 99979, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc_data", NULL, 5829213, 159, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pydoc_data.topics", NULL, 5829372, 420847, NUITKA_BYTECODE_FLAG },
    { (char *)"random", NULL, 6250219, 27287, NUITKA_BYTECODE_FLAG },
    { (char *)"repr", NULL, 6277506, 6006, NUITKA_BYTECODE_FLAG },
    { (char *)"rexec", NULL, 6283512, 25982, NUITKA_BYTECODE_FLAG },
    { (char *)"rfc822", NULL, 6309494, 34025, NUITKA_BYTECODE_FLAG },
    { (char *)"rlcompleter", NULL, 6343519, 6366, NUITKA_BYTECODE_FLAG },
    { (char *)"robotparser", NULL, 6349885, 8883, NUITKA_BYTECODE_FLAG },
    { (char *)"runpy", NULL, 6358768, 9535, NUITKA_BYTECODE_FLAG },
    { (char *)"sched", NULL, 6368303, 5319, NUITKA_BYTECODE_FLAG },
    { (char *)"sets", NULL, 6373622, 18959, NUITKA_BYTECODE_FLAG },
    { (char *)"sgmllib", NULL, 6392581, 17167, NUITKA_BYTECODE_FLAG },
    { (char *)"sha", NULL, 6409748, 450, NUITKA_BYTECODE_FLAG },
    { (char *)"shelve", NULL, 6410198, 11247, NUITKA_BYTECODE_FLAG },
    { (char *)"shlex", NULL, 6421445, 8031, NUITKA_BYTECODE_FLAG },
    { (char *)"shutil", NULL, 6429476, 20361, NUITKA_BYTECODE_FLAG },
    { (char *)"site", NULL, 6449837, 18053, NUITKA_BYTECODE_FLAG },
    { (char *)"smtplib", NULL, 6467890, 32331, NUITKA_BYTECODE_FLAG },
    { (char *)"sndhdr", NULL, 6500221, 7982, NUITKA_BYTECODE_FLAG },
    { (char *)"socket", NULL, 6508203, 17254, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3", NULL, 6525457, 193, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"sqlite3.dbapi2", NULL, 6525650, 3033, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3.dump", NULL, 6528683, 2174, NUITKA_BYTECODE_FLAG },
    { (char *)"sre", NULL, 6530857, 548, NUITKA_BYTECODE_FLAG },
    { (char *)"ssl", NULL, 6531405, 34567, NUITKA_BYTECODE_FLAG },
    { (char *)"stat", NULL, 6565972, 3113, NUITKA_BYTECODE_FLAG },
    { (char *)"statvfs", NULL, 6569085, 649, NUITKA_BYTECODE_FLAG },
    { (char *)"stringold", NULL, 6569734, 13540, NUITKA_BYTECODE_FLAG },
    { (char *)"subprocess", NULL, 6583274, 34388, NUITKA_BYTECODE_FLAG },
    { (char *)"sunau", NULL, 6617662, 20162, NUITKA_BYTECODE_FLAG },
    { (char *)"sunaudio", NULL, 6637824, 2164, NUITKA_BYTECODE_FLAG },
    { (char *)"symbol", NULL, 6639988, 3092, NUITKA_BYTECODE_FLAG },
    { (char *)"symtable", NULL, 6643080, 13628, NUITKA_BYTECODE_FLAG },
    { (char *)"sysconfig", NULL, 6656708, 18924, NUITKA_BYTECODE_FLAG },
    { (char *)"tabnanny", NULL, 6675632, 8979, NUITKA_BYTECODE_FLAG },
    { (char *)"tarfile", NULL, 6684611, 82494, NUITKA_BYTECODE_FLAG },
    { (char *)"telnetlib", NULL, 6767105, 24367, NUITKA_BYTECODE_FLAG },
    { (char *)"tempfile", NULL, 6791472, 22334, NUITKA_BYTECODE_FLAG },
    { (char *)"test", NULL, 6813806, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"textwrap", NULL, 6813959, 12607, NUITKA_BYTECODE_FLAG },
    { (char *)"this", NULL, 6826566, 1249, NUITKA_BYTECODE_FLAG },
    { (char *)"threading", NULL, 6827815, 46345, NUITKA_BYTECODE_FLAG },
    { (char *)"timeit", NULL, 6874160, 12656, NUITKA_BYTECODE_FLAG },
    { (char *)"tkColorChooser", NULL, 6886816, 1597, NUITKA_BYTECODE_FLAG },
    { (char *)"tkCommonDialog", NULL, 6888413, 1730, NUITKA_BYTECODE_FLAG },
    { (char *)"tkFileDialog", NULL, 6890143, 5745, NUITKA_BYTECODE_FLAG },
    { (char *)"tkFont", NULL, 6895888, 7904, NUITKA_BYTECODE_FLAG },
    { (char *)"tkMessageBox", NULL, 6903792, 4293, NUITKA_BYTECODE_FLAG },
    { (char *)"tkSimpleDialog", NULL, 6908085, 10067, NUITKA_BYTECODE_FLAG },
    { (char *)"toaiff", NULL, 6918152, 3246, NUITKA_BYTECODE_FLAG },
    { (char *)"token", NULL, 6921398, 3993, NUITKA_BYTECODE_FLAG },
    { (char *)"tokenize", NULL, 6925391, 15089, NUITKA_BYTECODE_FLAG },
    { (char *)"trace", NULL, 6940480, 24043, NUITKA_BYTECODE_FLAG },
    { (char *)"traceback", NULL, 6964523, 12411, NUITKA_BYTECODE_FLAG },
    { (char *)"ttk", NULL, 6976934, 67726, NUITKA_BYTECODE_FLAG },
    { (char *)"tty", NULL, 7044660, 1420, NUITKA_BYTECODE_FLAG },
    { (char *)"turtle", NULL, 7046080, 148153, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest", NULL, 7194233, 2993, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"unittest.case", NULL, 7197226, 43717, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.loader", NULL, 7240943, 12182, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.main", NULL, 7253125, 8321, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.result", NULL, 7261446, 8805, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.runner", NULL, 7270251, 8400, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.signals", NULL, 7278651, 3143, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.suite", NULL, 7281794, 11825, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.util", NULL, 7293619, 4806, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib", NULL, 7298425, 55044, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib2", NULL, 7353469, 51972, NUITKA_BYTECODE_FLAG },
    { (char *)"urlparse", NULL, 7405441, 16526, NUITKA_BYTECODE_FLAG },
    { (char *)"user", NULL, 7421967, 1753, NUITKA_BYTECODE_FLAG },
    { (char *)"uu", NULL, 7423720, 4567, NUITKA_BYTECODE_FLAG },
    { (char *)"uuid", NULL, 7428287, 24850, NUITKA_BYTECODE_FLAG },
    { (char *)"warnings", NULL, 7453137, 14353, NUITKA_BYTECODE_FLAG },
    { (char *)"wave", NULL, 7467490, 21892, NUITKA_BYTECODE_FLAG },
    { (char *)"weakref", NULL, 7489382, 18394, NUITKA_BYTECODE_FLAG },
    { (char *)"webbrowser", NULL, 7507776, 21407, NUITKA_BYTECODE_FLAG },
    { (char *)"whichdb", NULL, 7529183, 2307, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref", NULL, 7531490, 758, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"wsgiref.handlers", NULL, 7532248, 17615, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.headers", NULL, 7549863, 8131, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.simple_server", NULL, 7557994, 6745, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.util", NULL, 7564739, 6429, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.validate", NULL, 7571168, 18288, NUITKA_BYTECODE_FLAG },
    { (char *)"xdrlib", NULL, 7589456, 11448, NUITKA_BYTECODE_FLAG },
    { (char *)"xml", NULL, 7600904, 1107, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom", NULL, 7602011, 7285, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom.NodeFilter", NULL, 7609296, 1229, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.domreg", NULL, 7610525, 3561, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.expatbuilder", NULL, 7614086, 36281, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minicompat", NULL, 7650367, 3940, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minidom", NULL, 7654307, 74033, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.pulldom", NULL, 7728340, 14624, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.xmlbuilder", NULL, 7742964, 17367, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree", NULL, 7760331, 158, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.etree.ElementInclude", NULL, 7760489, 2107, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementPath", NULL, 7762596, 8535, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementTree", NULL, 7771131, 39295, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.cElementTree", NULL, 7810426, 205, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.parsers", NULL, 7810631, 343, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.parsers.expat", NULL, 7810974, 316, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax", NULL, 7811290, 3959, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.sax._exceptions", NULL, 7815249, 6790, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.expatreader", NULL, 7822039, 16719, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.handler", NULL, 7838758, 13945, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.saxutils", NULL, 7852703, 16791, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.xmlreader", NULL, 7869494, 21730, NUITKA_BYTECODE_FLAG },
    { (char *)"xmllib", NULL, 7891224, 28838, NUITKA_BYTECODE_FLAG },
    { (char *)"xmlrpclib", NULL, 7920062, 49167, NUITKA_BYTECODE_FLAG },
    { (char *)"zipfile", NULL, 7969229, 44386, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
