/* Generated code for Python source for module 'urllib3.util.wait'
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

/* The _module_urllib3$util$wait is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$wait;
PyDictObject *moduledict_urllib3$util$wait;

/* The module constants used, if any. */
extern PyObject *const_str_plain_register;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain__have_working_poll;
static PyObject *const_str_plain_wait_for_socket;
static PyObject *const_str_plain_poll;
static PyObject *const_list_0f3719a68b319eac70aa05da51950d41_list;
static PyObject *const_str_plain_poll_wait_for_socket;
extern PyObject *const_str_plain_write;
static PyObject *const_tuple_74d93b901878206bc29c40958644fa42_tuple;
static PyObject *const_str_digest_c21f3ba11788d793953e7f6f01c16ac0;
static PyObject *const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
static PyObject *const_str_plain_wcheck;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_wait_for_write;
static PyObject *const_str_digest_7f86ee426279d1cdd1f927db6246984d;
static PyObject *const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b;
static PyObject *const_tuple_false_false_none_tuple;
extern PyObject *const_str_plain_sock;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_time;
extern PyObject *const_tuple_int_pos_3_int_pos_5_tuple;
static PyObject *const_str_plain_deadline;
static PyObject *const_tuple_str_plain_monotonic_tuple;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_float_inf;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_do_poll;
extern PyObject *const_str_plain_monotonic;
static PyObject *const_str_plain_rready;
static PyObject *const_str_plain_rcheck;
static PyObject *const_str_plain_select;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_d971e987b803540088bf5c2f9c8029d3;
extern PyObject *const_str_plain_error;
extern PyObject *const_tuple_str_plain_partial_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_plain_poll_obj_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_t_str_plain_poll_obj_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_002b270400c7eee4f55abde6c36d3792_tuple;
static PyObject *const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
extern PyObject *const_str_plain_fn;
extern PyObject *const_str_plain_t;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_null_wait_for_socket;
extern PyObject *const_tuple_str_plain_time_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_EINTR;
static PyObject *const_str_plain_wready;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_xready;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_select_wait_for_socket;
static PyObject *const_str_digest_2793acd2a9eb309196b14c7196b7f975;
static PyObject *const_str_plain__retry_on_intr;
static PyObject *const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple;
static PyObject *const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_str_plain_POLLIN;
extern PyObject *const_str_plain_errno;
static PyObject *const_str_plain_poll_obj;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_NoWayToWaitForSocketError;
static PyObject *const_str_plain_POLLOUT;
extern PyObject *const_int_pos_1000;
static PyObject *const_tuple_str_plain_fn_str_plain_timeout_tuple;
static PyObject *const_tuple_str_plain_sock_str_plain_timeout_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__have_working_poll = UNSTREAM_STRING( &constant_bin[ 1106794 ], 18, 1 );
    const_str_plain_wait_for_socket = UNSTREAM_STRING( &constant_bin[ 1106812 ], 15, 1 );
    const_str_plain_poll = UNSTREAM_STRING( &constant_bin[ 1106808 ], 4, 1 );
    const_list_0f3719a68b319eac70aa05da51950d41_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 0, const_str_plain_NoWayToWaitForSocketError ); Py_INCREF( const_str_plain_NoWayToWaitForSocketError );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 1, const_str_plain_wait_for_read ); Py_INCREF( const_str_plain_wait_for_read );
    PyList_SET_ITEM( const_list_0f3719a68b319eac70aa05da51950d41_list, 2, const_str_plain_wait_for_write ); Py_INCREF( const_str_plain_wait_for_write );
    const_str_plain_poll_wait_for_socket = UNSTREAM_STRING( &constant_bin[ 1106827 ], 20, 1 );
    const_tuple_74d93b901878206bc29c40958644fa42_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_74d93b901878206bc29c40958644fa42_tuple, 0, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_74d93b901878206bc29c40958644fa42_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_74d93b901878206bc29c40958644fa42_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_deadline = UNSTREAM_STRING( &constant_bin[ 1106847 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_74d93b901878206bc29c40958644fa42_tuple, 3, const_str_plain_deadline ); Py_INCREF( const_str_plain_deadline );
    const_str_digest_c21f3ba11788d793953e7f6f01c16ac0 = UNSTREAM_STRING( &constant_bin[ 1106855 ], 135, 0 );
    const_str_digest_d47e372f7598b75180e9e0f6f1e0d266 = UNSTREAM_STRING( &constant_bin[ 1106990 ], 50, 0 );
    const_str_plain_wcheck = UNSTREAM_STRING( &constant_bin[ 1107040 ], 6, 1 );
    const_str_digest_7f86ee426279d1cdd1f927db6246984d = UNSTREAM_STRING( &constant_bin[ 1107046 ], 20, 0 );
    const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b = UNSTREAM_STRING( &constant_bin[ 1107066 ], 135, 0 );
    const_tuple_false_false_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_false_false_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_none_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_monotonic_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_monotonic_tuple, 0, const_str_plain_monotonic ); Py_INCREF( const_str_plain_monotonic );
    const_str_plain_do_poll = UNSTREAM_STRING( &constant_bin[ 1107201 ], 7, 1 );
    const_str_plain_rready = UNSTREAM_STRING( &constant_bin[ 1107208 ], 6, 1 );
    const_str_plain_rcheck = UNSTREAM_STRING( &constant_bin[ 1107214 ], 6, 1 );
    const_str_plain_select = UNSTREAM_STRING( &constant_bin[ 4583 ], 6, 1 );
    const_str_digest_d971e987b803540088bf5c2f9c8029d3 = UNSTREAM_STRING( &constant_bin[ 1107220 ], 30, 0 );
    const_tuple_str_plain_poll_obj_tuple = PyTuple_New( 1 );
    const_str_plain_poll_obj = UNSTREAM_STRING( &constant_bin[ 1107250 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_poll_obj_tuple, 0, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );
    const_tuple_str_plain_t_str_plain_poll_obj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_poll_obj_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );
    const_tuple_002b270400c7eee4f55abde6c36d3792_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 1, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 2, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 4, const_str_plain_rready ); Py_INCREF( const_str_plain_rready );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 5, const_str_plain_rcheck ); Py_INCREF( const_str_plain_rcheck );
    const_str_plain_wready = UNSTREAM_STRING( &constant_bin[ 1107258 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 6, const_str_plain_wready ); Py_INCREF( const_str_plain_wready );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 7, const_str_plain_wcheck ); Py_INCREF( const_str_plain_wcheck );
    const_str_plain_xready = UNSTREAM_STRING( &constant_bin[ 1107264 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 8, const_str_plain_xready ); Py_INCREF( const_str_plain_xready );
    PyTuple_SET_ITEM( const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 9, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    const_str_digest_9fee63ab089d8ffa84a45aa3db97c377 = UNSTREAM_STRING( &constant_bin[ 1107270 ], 17, 0 );
    const_str_plain_null_wait_for_socket = UNSTREAM_STRING( &constant_bin[ 1107287 ], 20, 1 );
    const_str_plain_EINTR = UNSTREAM_STRING( &constant_bin[ 1107307 ], 5, 1 );
    const_str_plain_select_wait_for_socket = UNSTREAM_STRING( &constant_bin[ 1107312 ], 22, 1 );
    const_str_digest_2793acd2a9eb309196b14c7196b7f975 = UNSTREAM_STRING( &constant_bin[ 1107334 ], 26, 0 );
    const_str_plain__retry_on_intr = UNSTREAM_STRING( &constant_bin[ 1107360 ], 14, 1 );
    const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 1, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 2, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 5, const_str_plain_poll_obj ); Py_INCREF( const_str_plain_poll_obj );
    PyTuple_SET_ITEM( const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 6, const_str_plain_do_poll ); Py_INCREF( const_str_plain_do_poll );
    const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple, 0, const_str_digest_d971e987b803540088bf5c2f9c8029d3 ); Py_INCREF( const_str_digest_d971e987b803540088bf5c2f9c8029d3 );
    const_str_plain_POLLIN = UNSTREAM_STRING( &constant_bin[ 1107374 ], 6, 1 );
    const_str_plain_POLLOUT = UNSTREAM_STRING( &constant_bin[ 1107380 ], 7, 1 );
    const_tuple_str_plain_fn_str_plain_timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fn_str_plain_timeout_tuple, 0, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_str_plain_fn_str_plain_timeout_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_tuple_str_plain_sock_str_plain_timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_timeout_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_timeout_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$wait( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_331fa99ddb64bb3bdd98cc6dcec1b244;
static PyCodeObject *codeobj_9f336240734f37a881b27e9982691437;
static PyCodeObject *codeobj_bc5eaa48c16d51665bfe8778dfa41a92;
static PyCodeObject *codeobj_5dc4877677fd4065e0508771af52bc71;
static PyCodeObject *codeobj_9873a587886d59a9fc1b229653cfa65e;
static PyCodeObject *codeobj_568e7bfca1c879db03514d40942a18e2;
static PyCodeObject *codeobj_2e4c05738108b6305361e287d683e4b8;
static PyCodeObject *codeobj_4b84484272c297c0b595f0e6f1ac8c8c;
static PyCodeObject *codeobj_64749fd2d7a9902896ea3eaf9edce408;
static PyCodeObject *codeobj_46728336c57ddc9e3c44574575b6ec57;
static PyCodeObject *codeobj_5b6f59a43360f6a6ec1ccdb380985e9f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7f86ee426279d1cdd1f927db6246984d );
    codeobj_331fa99ddb64bb3bdd98cc6dcec1b244 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2793acd2a9eb309196b14c7196b7f975, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_9f336240734f37a881b27e9982691437 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__have_working_poll, 114, const_tuple_str_plain_poll_obj_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bc5eaa48c16d51665bfe8778dfa41a92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__retry_on_intr, 42, const_tuple_str_plain_fn_str_plain_timeout_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5dc4877677fd4065e0508771af52bc71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__retry_on_intr, 48, const_tuple_74d93b901878206bc29c40958644fa42_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9873a587886d59a9fc1b229653cfa65e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_do_poll, 102, const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_568e7bfca1c879db03514d40942a18e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_null_wait_for_socket, 110, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_2e4c05738108b6305361e287d683e4b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poll_wait_for_socket, 90, const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b84484272c297c0b595f0e6f1ac8c8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_select_wait_for_socket, 71, const_tuple_002b270400c7eee4f55abde6c36d3792_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64749fd2d7a9902896ea3eaf9edce408 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_read, 142, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_46728336c57ddc9e3c44574575b6ec57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_socket, 127, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_5b6f59a43360f6a6ec1ccdb380985e9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_write, 149, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll( struct Nuitka_CellObject *closure_poll_obj );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$wait$$$function_1__retry_on_intr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bc5eaa48c16d51665bfe8778dfa41a92 = NULL;

    struct Nuitka_FrameObject *frame_bc5eaa48c16d51665bfe8778dfa41a92;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc5eaa48c16d51665bfe8778dfa41a92, codeobj_bc5eaa48c16d51665bfe8778dfa41a92, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_bc5eaa48c16d51665bfe8778dfa41a92 = cache_frame_bc5eaa48c16d51665bfe8778dfa41a92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc5eaa48c16d51665bfe8778dfa41a92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc5eaa48c16d51665bfe8778dfa41a92 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_fn;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_bc5eaa48c16d51665bfe8778dfa41a92->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc5eaa48c16d51665bfe8778dfa41a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc5eaa48c16d51665bfe8778dfa41a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc5eaa48c16d51665bfe8778dfa41a92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc5eaa48c16d51665bfe8778dfa41a92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc5eaa48c16d51665bfe8778dfa41a92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc5eaa48c16d51665bfe8778dfa41a92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc5eaa48c16d51665bfe8778dfa41a92,
        type_description_1,
        par_fn,
        par_timeout
    );


    // Release cached frame.
    if ( frame_bc5eaa48c16d51665bfe8778dfa41a92 == cache_frame_bc5eaa48c16d51665bfe8778dfa41a92 )
    {
        Py_DECREF( frame_bc5eaa48c16d51665bfe8778dfa41a92 );
    }
    cache_frame_bc5eaa48c16d51665bfe8778dfa41a92 = NULL;

    assertFrameObject( frame_bc5eaa48c16d51665bfe8778dfa41a92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__retry_on_intr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__retry_on_intr );
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


static PyObject *impl_urllib3$util$wait$$$function_2__retry_on_intr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *var_e = NULL;
    PyObject *var_deadline = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
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
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_5dc4877677fd4065e0508771af52bc71 = NULL;

    struct Nuitka_FrameObject *frame_5dc4877677fd4065e0508771af52bc71;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5dc4877677fd4065e0508771af52bc71, codeobj_5dc4877677fd4065e0508771af52bc71, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5dc4877677fd4065e0508771af52bc71 = cache_frame_5dc4877677fd4065e0508771af52bc71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5dc4877677fd4065e0508771af52bc71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5dc4877677fd4065e0508771af52bc71 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_timeout;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_float_inf;
    assert( var_deadline == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_deadline = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "monotonic" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_5dc4877677fd4065e0508771af52bc71->m_frame.f_lineno = 52;
    tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_timeout;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_deadline == NULL );
    var_deadline = tmp_assign_source_2;

    branch_end_1:;
    loop_start_1:;
    // Tried code:
    tmp_called_name_2 = par_fn;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = par_timeout;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_5dc4877677fd4065e0508771af52bc71->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_5dc4877677fd4065e0508771af52bc71 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5dc4877677fd4065e0508771af52bc71, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5dc4877677fd4065e0508771af52bc71, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_3;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_e;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "errno" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EINTR );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 60;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 60;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5dc4877677fd4065e0508771af52bc71->m_frame) frame_5dc4877677fd4065e0508771af52bc71->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_left_name_2 = var_deadline;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "monotonic" );
        exception_tb = NULL;

        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_5dc4877677fd4065e0508771af52bc71->m_frame.f_lineno = 63;
    tmp_right_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_timeout;
        par_timeout = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = par_timeout;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_5 = const_int_0;
    {
        PyObject *old = par_timeout;
        assert( old != NULL );
        par_timeout = tmp_assign_source_5;
        Py_INCREF( par_timeout );
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_5 = par_timeout;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = const_float_inf;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_6 = Py_None;
    {
        PyObject *old = par_timeout;
        assert( old != NULL );
        par_timeout = tmp_assign_source_6;
        Py_INCREF( par_timeout );
        Py_DECREF( old );
    }

    branch_no_5:;
    goto loop_start_1;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5dc4877677fd4065e0508771af52bc71->m_frame) frame_5dc4877677fd4065e0508771af52bc71->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5dc4877677fd4065e0508771af52bc71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5dc4877677fd4065e0508771af52bc71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5dc4877677fd4065e0508771af52bc71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5dc4877677fd4065e0508771af52bc71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5dc4877677fd4065e0508771af52bc71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5dc4877677fd4065e0508771af52bc71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5dc4877677fd4065e0508771af52bc71,
        type_description_1,
        par_fn,
        par_timeout,
        var_e,
        var_deadline
    );


    // Release cached frame.
    if ( frame_5dc4877677fd4065e0508771af52bc71 == cache_frame_5dc4877677fd4065e0508771af52bc71 )
    {
        Py_DECREF( frame_5dc4877677fd4065e0508771af52bc71 );
    }
    cache_frame_5dc4877677fd4065e0508771af52bc71 = NULL;

    assertFrameObject( frame_5dc4877677fd4065e0508771af52bc71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_deadline );
    Py_DECREF( var_deadline );
    var_deadline = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_deadline );
    var_deadline = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2__retry_on_intr );
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


static PyObject *impl_urllib3$util$wait$$$function_3_select_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_read = python_pars[ 1 ];
    PyObject *par_write = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *var_rready = NULL;
    PyObject *var_rcheck = NULL;
    PyObject *var_wready = NULL;
    PyObject *var_wcheck = NULL;
    PyObject *var_xready = NULL;
    PyObject *var_fn = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4b84484272c297c0b595f0e6f1ac8c8c = NULL;

    struct Nuitka_FrameObject *frame_4b84484272c297c0b595f0e6f1ac8c8c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b84484272c297c0b595f0e6f1ac8c8c, codeobj_4b84484272c297c0b595f0e6f1ac8c8c, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b84484272c297c0b595f0e6f1ac8c8c = cache_frame_4b84484272c297c0b595f0e6f1ac8c8c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b84484272c297c0b595f0e6f1ac8c8c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b84484272c297c0b595f0e6f1ac8c8c ) == 2 ); // Frame stack

    // Framed code:
    tmp_operand_name_1 = par_read;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
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
    tmp_operand_name_2 = par_write;

    CHECK_OBJECT( tmp_operand_name_2 );
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
    frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 73;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_rcheck == NULL );
    var_rcheck = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_wcheck == NULL );
    var_wcheck = tmp_assign_source_2;

    tmp_cond_value_2 = par_read;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = var_rcheck;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_sock;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_cond_value_3 = par_write;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_2 = var_wcheck;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = par_sock;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_partial );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "partial" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_select );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_rcheck;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = var_wcheck;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_wcheck;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fn == NULL );
    var_fn = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_retry_on_intr" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_fn;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooo";
        exception_lineno = 86;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooo";
        exception_lineno = 86;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooo";
        exception_lineno = 86;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooo";
                exception_lineno = 86;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 86;
        goto try_except_handler_3;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    assert( var_rready == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_rready = tmp_assign_source_8;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    assert( var_wready == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_wready = tmp_assign_source_9;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_xready == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_xready = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_or_left_value_1 = var_rready;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooo";
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
    tmp_or_left_value_2 = var_wready;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooo";
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
    tmp_or_right_value_2 = var_xready;

    CHECK_OBJECT( tmp_or_right_value_2 );
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_bool_arg_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_bool_arg_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84484272c297c0b595f0e6f1ac8c8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84484272c297c0b595f0e6f1ac8c8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84484272c297c0b595f0e6f1ac8c8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b84484272c297c0b595f0e6f1ac8c8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b84484272c297c0b595f0e6f1ac8c8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b84484272c297c0b595f0e6f1ac8c8c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b84484272c297c0b595f0e6f1ac8c8c,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_rready,
        var_rcheck,
        var_wready,
        var_wcheck,
        var_xready,
        var_fn
    );


    // Release cached frame.
    if ( frame_4b84484272c297c0b595f0e6f1ac8c8c == cache_frame_4b84484272c297c0b595f0e6f1ac8c8c )
    {
        Py_DECREF( frame_4b84484272c297c0b595f0e6f1ac8c8c );
    }
    cache_frame_4b84484272c297c0b595f0e6f1ac8c8c = NULL;

    assertFrameObject( frame_4b84484272c297c0b595f0e6f1ac8c8c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_select_wait_for_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_rready );
    Py_DECREF( var_rready );
    var_rready = NULL;

    CHECK_OBJECT( (PyObject *)var_rcheck );
    Py_DECREF( var_rcheck );
    var_rcheck = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)var_wready );
    Py_DECREF( var_wready );
    var_wready = NULL;

    CHECK_OBJECT( (PyObject *)var_wcheck );
    Py_DECREF( var_wcheck );
    var_wcheck = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)var_xready );
    Py_DECREF( var_xready );
    var_xready = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)var_fn );
    Py_DECREF( var_fn );
    var_fn = NULL;

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

    Py_XDECREF( var_rready );
    var_rready = NULL;

    Py_XDECREF( var_rcheck );
    var_rcheck = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( var_wready );
    var_wready = NULL;

    Py_XDECREF( var_wcheck );
    var_wcheck = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    Py_XDECREF( var_xready );
    var_xready = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_fn );
    var_fn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_select_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_read = python_pars[ 1 ];
    PyObject *par_write = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *var_mask = NULL;
    struct Nuitka_CellObject *var_poll_obj = PyCell_EMPTY();
    PyObject *var_do_poll = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2e4c05738108b6305361e287d683e4b8 = NULL;

    struct Nuitka_FrameObject *frame_2e4c05738108b6305361e287d683e4b8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e4c05738108b6305361e287d683e4b8, codeobj_2e4c05738108b6305361e287d683e4b8, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e4c05738108b6305361e287d683e4b8 = cache_frame_2e4c05738108b6305361e287d683e4b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e4c05738108b6305361e287d683e4b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e4c05738108b6305361e287d683e4b8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_operand_name_1 = par_read;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooco";
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
    tmp_operand_name_2 = par_write;

    CHECK_OBJECT( tmp_operand_name_2 );
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooco";
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
    tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
    frame_2e4c05738108b6305361e287d683e4b8->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 92;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooco";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = const_int_0;
    assert( var_mask == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_mask = tmp_assign_source_1;

    tmp_cond_value_2 = par_read;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_int_0;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 95;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_POLLIN );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_mask;
        assert( old != NULL );
        var_mask = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_cond_value_3 = par_write;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_2 = var_mask;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_POLLOUT );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_3 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    var_mask = tmp_assign_source_3;

    branch_no_3:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }

    frame_2e4c05738108b6305361e287d683e4b8->m_frame.f_lineno = 98;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_poll );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    assert( PyCell_GET( var_poll_obj ) == NULL );
    PyCell_SET( var_poll_obj, tmp_assign_source_4 );

    if ( var_poll_obj == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( var_poll_obj );
    }

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_sock;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_mask;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }

    frame_2e4c05738108b6305361e287d683e4b8->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_5 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll( var_poll_obj );
    assert( var_do_poll == NULL );
    var_do_poll = tmp_assign_source_5;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_retry_on_intr" );
        exception_tb = NULL;

        exception_lineno = 107;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_do_poll;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_2e4c05738108b6305361e287d683e4b8->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_bool_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4c05738108b6305361e287d683e4b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4c05738108b6305361e287d683e4b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4c05738108b6305361e287d683e4b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e4c05738108b6305361e287d683e4b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e4c05738108b6305361e287d683e4b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e4c05738108b6305361e287d683e4b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e4c05738108b6305361e287d683e4b8,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_mask,
        var_poll_obj,
        var_do_poll
    );


    // Release cached frame.
    if ( frame_2e4c05738108b6305361e287d683e4b8 == cache_frame_2e4c05738108b6305361e287d683e4b8 )
    {
        Py_DECREF( frame_2e4c05738108b6305361e287d683e4b8 );
    }
    cache_frame_2e4c05738108b6305361e287d683e4b8 = NULL;

    assertFrameObject( frame_2e4c05738108b6305361e287d683e4b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)var_poll_obj );
    Py_DECREF( var_poll_obj );
    var_poll_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_do_poll );
    Py_DECREF( var_do_poll );
    var_do_poll = NULL;

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

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_write );
    Py_DECREF( par_write );
    par_write = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)var_poll_obj );
    Py_DECREF( var_poll_obj );
    var_poll_obj = NULL;

    Py_XDECREF( var_do_poll );
    var_do_poll = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_9873a587886d59a9fc1b229653cfa65e = NULL;

    struct Nuitka_FrameObject *frame_9873a587886d59a9fc1b229653cfa65e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9873a587886d59a9fc1b229653cfa65e, codeobj_9873a587886d59a9fc1b229653cfa65e, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_9873a587886d59a9fc1b229653cfa65e = cache_frame_9873a587886d59a9fc1b229653cfa65e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9873a587886d59a9fc1b229653cfa65e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9873a587886d59a9fc1b229653cfa65e ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_t;

    CHECK_OBJECT( tmp_compare_left_1 );
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
    tmp_left_name_1 = par_t;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1000;
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_1 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    par_t = tmp_assign_source_1;

    branch_no_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "poll_obj" );
        exception_tb = NULL;

        exception_lineno = 105;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_t;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9873a587886d59a9fc1b229653cfa65e->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_poll, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9873a587886d59a9fc1b229653cfa65e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9873a587886d59a9fc1b229653cfa65e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9873a587886d59a9fc1b229653cfa65e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9873a587886d59a9fc1b229653cfa65e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9873a587886d59a9fc1b229653cfa65e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9873a587886d59a9fc1b229653cfa65e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9873a587886d59a9fc1b229653cfa65e,
        type_description_1,
        par_t,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9873a587886d59a9fc1b229653cfa65e == cache_frame_9873a587886d59a9fc1b229653cfa65e )
    {
        Py_DECREF( frame_9873a587886d59a9fc1b229653cfa65e );
    }
    cache_frame_9873a587886d59a9fc1b229653cfa65e = NULL;

    assertFrameObject( frame_9873a587886d59a9fc1b229653cfa65e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    Py_XDECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll );
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


static PyObject *impl_urllib3$util$wait$$$function_5_null_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_568e7bfca1c879db03514d40942a18e2 = NULL;

    struct Nuitka_FrameObject *frame_568e7bfca1c879db03514d40942a18e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_568e7bfca1c879db03514d40942a18e2, codeobj_568e7bfca1c879db03514d40942a18e2, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_568e7bfca1c879db03514d40942a18e2 = cache_frame_568e7bfca1c879db03514d40942a18e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_568e7bfca1c879db03514d40942a18e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_568e7bfca1c879db03514d40942a18e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoWayToWaitForSocketError" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_568e7bfca1c879db03514d40942a18e2->m_frame.f_lineno = 111;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_d971e987b803540088bf5c2f9c8029d3_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 111;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_568e7bfca1c879db03514d40942a18e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_568e7bfca1c879db03514d40942a18e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_568e7bfca1c879db03514d40942a18e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_568e7bfca1c879db03514d40942a18e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_568e7bfca1c879db03514d40942a18e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_568e7bfca1c879db03514d40942a18e2,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_568e7bfca1c879db03514d40942a18e2 == cache_frame_568e7bfca1c879db03514d40942a18e2 )
    {
        Py_DECREF( frame_568e7bfca1c879db03514d40942a18e2 );
    }
    cache_frame_568e7bfca1c879db03514d40942a18e2 = NULL;

    assertFrameObject( frame_568e7bfca1c879db03514d40942a18e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_5_null_wait_for_socket );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_5_null_wait_for_socket );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_urllib3$util$wait$$$function_6__have_working_poll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_poll_obj = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9f336240734f37a881b27e9982691437 = NULL;

    struct Nuitka_FrameObject *frame_9f336240734f37a881b27e9982691437;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f336240734f37a881b27e9982691437, codeobj_9f336240734f37a881b27e9982691437, module_urllib3$util$wait, sizeof(void *) );
    frame_9f336240734f37a881b27e9982691437 = cache_frame_9f336240734f37a881b27e9982691437;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f336240734f37a881b27e9982691437 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f336240734f37a881b27e9982691437 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "o";
        goto try_except_handler_3;
    }

    frame_9f336240734f37a881b27e9982691437->m_frame.f_lineno = 119;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_poll );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    assert( var_poll_obj == NULL );
    var_poll_obj = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_retry_on_intr" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "o";
        goto try_except_handler_3;
    }

    tmp_source_name_1 = var_poll_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_poll );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    tmp_args_element_name_2 = const_int_0;
    frame_9f336240734f37a881b27e9982691437->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_9f336240734f37a881b27e9982691437 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9f336240734f37a881b27e9982691437, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9f336240734f37a881b27e9982691437, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 121;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 118;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9f336240734f37a881b27e9982691437->m_frame) frame_9f336240734f37a881b27e9982691437->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9f336240734f37a881b27e9982691437 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9f336240734f37a881b27e9982691437 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9f336240734f37a881b27e9982691437 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f336240734f37a881b27e9982691437, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f336240734f37a881b27e9982691437->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f336240734f37a881b27e9982691437, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f336240734f37a881b27e9982691437,
        type_description_1,
        var_poll_obj
    );


    // Release cached frame.
    if ( frame_9f336240734f37a881b27e9982691437 == cache_frame_9f336240734f37a881b27e9982691437 )
    {
        Py_DECREF( frame_9f336240734f37a881b27e9982691437 );
    }
    cache_frame_9f336240734f37a881b27e9982691437 = NULL;

    assertFrameObject( frame_9f336240734f37a881b27e9982691437 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_6__have_working_poll );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_poll_obj );
    var_poll_obj = NULL;

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

    Py_XDECREF( var_poll_obj );
    var_poll_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_6__have_working_poll );
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


static PyObject *impl_urllib3$util$wait$$$function_7_wait_for_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_46728336c57ddc9e3c44574575b6ec57 = NULL;

    struct Nuitka_FrameObject *frame_46728336c57ddc9e3c44574575b6ec57;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46728336c57ddc9e3c44574575b6ec57, codeobj_46728336c57ddc9e3c44574575b6ec57, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_46728336c57ddc9e3c44574575b6ec57 = cache_frame_46728336c57ddc9e3c44574575b6ec57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46728336c57ddc9e3c44574575b6ec57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46728336c57ddc9e3c44574575b6ec57 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__have_working_poll );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_have_working_poll" );
        exception_tb = NULL;

        exception_lineno = 133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_46728336c57ddc9e3c44574575b6ec57->m_frame.f_lineno = 133;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 133;
        type_description_1 = "oo";
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
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poll_wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_1 );
    goto branch_end_1;
    branch_no_1:;
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select" );
        exception_tb = NULL;

        exception_lineno = 135;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_select;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "select_wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 136;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "null_wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 138;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_3 );
    branch_end_2:;
    branch_end_1:;
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 139;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

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


        exception_lineno = 139;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46728336c57ddc9e3c44574575b6ec57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46728336c57ddc9e3c44574575b6ec57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46728336c57ddc9e3c44574575b6ec57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46728336c57ddc9e3c44574575b6ec57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46728336c57ddc9e3c44574575b6ec57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46728336c57ddc9e3c44574575b6ec57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46728336c57ddc9e3c44574575b6ec57,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_46728336c57ddc9e3c44574575b6ec57 == cache_frame_46728336c57ddc9e3c44574575b6ec57 )
    {
        Py_DECREF( frame_46728336c57ddc9e3c44574575b6ec57 );
    }
    cache_frame_46728336c57ddc9e3c44574575b6ec57 = NULL;

    assertFrameObject( frame_46728336c57ddc9e3c44574575b6ec57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_7_wait_for_socket );
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_7_wait_for_socket );
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


static PyObject *impl_urllib3$util$wait$$$function_8_wait_for_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_64749fd2d7a9902896ea3eaf9edce408 = NULL;

    struct Nuitka_FrameObject *frame_64749fd2d7a9902896ea3eaf9edce408;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64749fd2d7a9902896ea3eaf9edce408, codeobj_64749fd2d7a9902896ea3eaf9edce408, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_64749fd2d7a9902896ea3eaf9edce408 = cache_frame_64749fd2d7a9902896ea3eaf9edce408;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64749fd2d7a9902896ea3eaf9edce408 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64749fd2d7a9902896ea3eaf9edce408 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_sock;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_True;
    tmp_dict_key_1 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_timeout;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_64749fd2d7a9902896ea3eaf9edce408->m_frame.f_lineno = 146;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64749fd2d7a9902896ea3eaf9edce408 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64749fd2d7a9902896ea3eaf9edce408 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64749fd2d7a9902896ea3eaf9edce408 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64749fd2d7a9902896ea3eaf9edce408, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64749fd2d7a9902896ea3eaf9edce408->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64749fd2d7a9902896ea3eaf9edce408, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64749fd2d7a9902896ea3eaf9edce408,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if ( frame_64749fd2d7a9902896ea3eaf9edce408 == cache_frame_64749fd2d7a9902896ea3eaf9edce408 )
    {
        Py_DECREF( frame_64749fd2d7a9902896ea3eaf9edce408 );
    }
    cache_frame_64749fd2d7a9902896ea3eaf9edce408 = NULL;

    assertFrameObject( frame_64749fd2d7a9902896ea3eaf9edce408 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_8_wait_for_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_8_wait_for_read );
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


static PyObject *impl_urllib3$util$wait$$$function_9_wait_for_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_5b6f59a43360f6a6ec1ccdb380985e9f = NULL;

    struct Nuitka_FrameObject *frame_5b6f59a43360f6a6ec1ccdb380985e9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b6f59a43360f6a6ec1ccdb380985e9f, codeobj_5b6f59a43360f6a6ec1ccdb380985e9f, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_5b6f59a43360f6a6ec1ccdb380985e9f = cache_frame_5b6f59a43360f6a6ec1ccdb380985e9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b6f59a43360f6a6ec1ccdb380985e9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b6f59a43360f6a6ec1ccdb380985e9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wait_for_socket" );
        exception_tb = NULL;

        exception_lineno = 153;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_sock;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_True;
    tmp_dict_key_1 = const_str_plain_write;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_timeout;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_5b6f59a43360f6a6ec1ccdb380985e9f->m_frame.f_lineno = 153;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b6f59a43360f6a6ec1ccdb380985e9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b6f59a43360f6a6ec1ccdb380985e9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b6f59a43360f6a6ec1ccdb380985e9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b6f59a43360f6a6ec1ccdb380985e9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b6f59a43360f6a6ec1ccdb380985e9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b6f59a43360f6a6ec1ccdb380985e9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b6f59a43360f6a6ec1ccdb380985e9f,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if ( frame_5b6f59a43360f6a6ec1ccdb380985e9f == cache_frame_5b6f59a43360f6a6ec1ccdb380985e9f )
    {
        Py_DECREF( frame_5b6f59a43360f6a6ec1ccdb380985e9f );
    }
    cache_frame_5b6f59a43360f6a6ec1ccdb380985e9f = NULL;

    assertFrameObject( frame_5b6f59a43360f6a6ec1ccdb380985e9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_9_wait_for_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_9_wait_for_write );
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



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_1__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bc5eaa48c16d51665bfe8778dfa41a92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_2__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5dc4877677fd4065e0508771af52bc71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_3_select_wait_for_socket,
        const_str_plain_select_wait_for_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b84484272c297c0b595f0e6f1ac8c8c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket,
        const_str_plain_poll_wait_for_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2e4c05738108b6305361e287d683e4b8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll( struct Nuitka_CellObject *closure_poll_obj )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll,
        const_str_plain_do_poll,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9873a587886d59a9fc1b229653cfa65e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        1
    );

result->m_closure[0] = closure_poll_obj;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_5_null_wait_for_socket,
        const_str_plain_null_wait_for_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_568e7bfca1c879db03514d40942a18e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_6__have_working_poll,
        const_str_plain__have_working_poll,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9f336240734f37a881b27e9982691437,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_7_wait_for_socket,
        const_str_plain_wait_for_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_46728336c57ddc9e3c44574575b6ec57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_8_wait_for_read,
        const_str_plain_wait_for_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_64749fd2d7a9902896ea3eaf9edce408,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_9_wait_for_write,
        const_str_plain_wait_for_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5b6f59a43360f6a6ec1ccdb380985e9f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        const_str_digest_c21f3ba11788d793953e7f6f01c16ac0,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$wait =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.wait",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$wait )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$wait );
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
    puts("urllib3.util.wait: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.wait: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.wait: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$wait" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$wait = Py_InitModule4(
        "urllib3.util.wait",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$wait = PyModule_Create( &mdef_urllib3$util$wait );
#endif

    moduledict_urllib3$util$wait = MODULE_DICT( module_urllib3$util$wait );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$wait );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9fee63ab089d8ffa84a45aa3db97c377, module_urllib3$util$wait );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_331fa99ddb64bb3bdd98cc6dcec1b244;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_NoWayToWaitForSocketError_14 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_name_name_1 = const_str_plain_errno;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_3 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_3 );
    // Frame without reuse.
    frame_331fa99ddb64bb3bdd98cc6dcec1b244 = MAKE_MODULE_FRAME( codeobj_331fa99ddb64bb3bdd98cc6dcec1b244, module_urllib3$util$wait );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_331fa99ddb64bb3bdd98cc6dcec1b244 );
    assert( Py_REFCNT( frame_331fa99ddb64bb3bdd98cc6dcec1b244 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_functools;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_partial_tuple;
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_partial );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_select;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_plain_sys;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    // Tried code:
    tmp_name_name_5 = const_str_plain_time;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_monotonic_tuple;
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_monotonic );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic, tmp_assign_source_7 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_331fa99ddb64bb3bdd98cc6dcec1b244 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_331fa99ddb64bb3bdd98cc6dcec1b244, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_331fa99ddb64bb3bdd98cc6dcec1b244, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_6 = const_str_plain_time;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_time_tuple;
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 9;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_time );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic, tmp_assign_source_8 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 6;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame) frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_assign_source_9 = LIST_COPY( const_list_0f3719a68b319eac70aa05da51950d41_list );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_set_locals = PyDict_New();
    locals_NoWayToWaitForSocketError_14 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
    tmp_res = PyDict_SetItem( locals_NoWayToWaitForSocketError_14, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_NoWayToWaitForSocketError_14;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    Py_DECREF( locals_NoWayToWaitForSocketError_14 );
    locals_NoWayToWaitForSocketError_14 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_11;

    // Tried code:
    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_13;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_5;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_12 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_NoWayToWaitForSocketError;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_14;

    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_15 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_15 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError, tmp_assign_source_15 );
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

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_tuple_int_pos_3_int_pos_5_tuple;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_16 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_17 );
    branch_end_2:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_331fa99ddb64bb3bdd98cc6dcec1b244 );
#endif
    popFrameStack();

    assertFrameObject( frame_331fa99ddb64bb3bdd98cc6dcec1b244 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_331fa99ddb64bb3bdd98cc6dcec1b244 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_331fa99ddb64bb3bdd98cc6dcec1b244, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_331fa99ddb64bb3bdd98cc6dcec1b244->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_331fa99ddb64bb3bdd98cc6dcec1b244, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_false_false_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket, tmp_assign_source_18 );
    tmp_defaults_2 = const_tuple_false_false_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_19 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_22 );
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_23 = MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_23 );
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_24 = MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_write, tmp_assign_source_24 );

    return MOD_RETURN_VALUE( module_urllib3$util$wait );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
