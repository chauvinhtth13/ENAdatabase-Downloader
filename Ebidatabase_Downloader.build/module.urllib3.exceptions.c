/* Generated code for Python source for module 'urllib3.exceptions'
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

/* The _module_urllib3$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$exceptions;
PyDictObject *moduledict_urllib3$exceptions;

/* The module constants used, if any. */
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
static PyObject *const_str_digest_1ac943b4741094a8fa467ee81285da04;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_InvalidHeader;
static PyObject *const_tuple_str_plain_IncompleteRead_tuple;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_str_plain_defects;
static PyObject *const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
static PyObject *const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_EmptyPoolError;
extern PyObject *const_str_plain_ConnectionError;
static PyObject *const_str_digest_6b2631bb00bf77812f4e433630f72b85;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
static PyObject *const_str_digest_5ac3ff452137ae9d952f65688385427b;
static PyObject *const_str_plain_RequestError;
static PyObject *const_tuple_4e5661b66775469145a3b4097a93b81e_tuple;
extern PyObject *const_str_plain_unparsed_data;
static PyObject *const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
extern PyObject *const_str_plain___reduce__;
static PyObject *const_str_plain_httplib_IncompleteRead;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_d3e96f948eaa41c53caaae3833d57481;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_plain_reason;
static PyObject *const_str_digest_46584e2093371b92bd116a36f6fac20c;
static PyObject *const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
extern PyObject *const_str_plain_SecurityWarning;
static PyObject *const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
extern PyObject *const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
static PyObject *const_str_digest_bd0936ca02f1a13226f22c3deffbdda4;
static PyObject *const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
static PyObject *const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
static PyObject *const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple;
extern PyObject *const_str_plain_SNIMissingWarning;
static PyObject *const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
static PyObject *const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_d54edb257b1240e069427ea15807c309;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_str_plain_GENERIC_ERROR;
static PyObject *const_str_plain_expected;
static PyObject *const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_HTTPError;
static PyObject *const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
extern PyObject *const_str_plain_MaxRetryError;
static PyObject *const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_Warning;
static PyObject *const_str_digest_d455563e1ef951148bac32f5cc949a27;
static PyObject *const_str_digest_1b17e5345caa893d267645d5296f52b9;
static PyObject *const_str_digest_0beacf6afb33b121e9545510332129fc;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_TimeoutStateError;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain_InsecurePlatformWarning;
extern PyObject *const_str_plain_HeaderParsingError;
extern PyObject *const_str_plain_ResponseNotChunked;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_8c0402b3f822d653c84c590d6e596566;
static PyObject *const_str_digest_0af1d92cbf25f8a036fda6803e038903;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_401d5766bd48277296aa1afc93f98bc4;
extern PyObject *const_str_plain_HostChangedError;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_HTTPWarning;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_caae7e70acce199048d0f76529b5d906;
static PyObject *const_str_digest_c85fd95998d676bb8b296c5552d11916;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_TimeoutError;
static PyObject *const_str_digest_d23d849ab02a6235eb0652ac312b2323;
extern PyObject *const_str_plain_DecodeError;
static PyObject *const_str_plain_Unknown;
extern PyObject *const_str_plain_IncompleteRead;
static PyObject *const_str_digest_3cba0a880d63b7b310fd43504b18c057;
extern PyObject *const_str_plain_LocationValueError;
static PyObject *const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
static PyObject *const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple;
static PyObject *const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
static PyObject *const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
extern PyObject *const_str_plain_ReadTimeoutError;
static PyObject *const_str_plain_PoolError;
static PyObject *const_str_digest_85322d4279b2ac8026a5921e77f32165;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple;
static PyObject *const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
static PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProtocolError;
static PyObject *const_str_digest_52259094e9ef0d3b81149cff696bacc3;
static PyObject *const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_0b3cbe0215684a287553275c21c89d2f;
static PyObject *const_str_digest_3ecac7959fca6b094793e5853872d936;
static PyObject *const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
extern PyObject *const_str_plain_LocationParseError;
static PyObject *const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple;
static PyObject *const_str_digest_8e8ee501a73b92aaab075e946de662bf;
static PyObject *const_str_digest_28db377b4c4aaf2881b08e822881aecb;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_46b5bed5a2577b5849f26cefa58279d5;
extern PyObject *const_str_plain_BodyNotHttplibCompatible;
extern PyObject *const_str_plain_InsecureRequestWarning;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341 = UNSTREAM_STRING( &constant_bin[ 1052963 ], 59, 0 );
    const_str_digest_1ac943b4741094a8fa467ee81285da04 = UNSTREAM_STRING( &constant_bin[ 1053022 ], 56, 0 );
    const_tuple_str_plain_IncompleteRead_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_IncompleteRead_tuple, 0, const_str_plain_IncompleteRead ); Py_INCREF( const_str_plain_IncompleteRead );
    const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72 = UNSTREAM_STRING( &constant_bin[ 1053078 ], 24, 0 );
    const_str_digest_e7d525c37e8e3bf1b29419172dc726f6 = UNSTREAM_STRING( &constant_bin[ 1053102 ], 199, 0 );
    const_str_digest_6b2631bb00bf77812f4e433630f72b85 = UNSTREAM_STRING( &constant_bin[ 1053301 ], 78, 0 );
    const_str_digest_5ac3ff452137ae9d952f65688385427b = UNSTREAM_STRING( &constant_bin[ 1053379 ], 67, 0 );
    const_str_plain_RequestError = UNSTREAM_STRING( &constant_bin[ 1053446 ], 12, 1 );
    const_tuple_4e5661b66775469145a3b4097a93b81e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 3, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde = UNSTREAM_STRING( &constant_bin[ 1053458 ], 268, 0 );
    const_str_plain_httplib_IncompleteRead = UNSTREAM_STRING( &constant_bin[ 1053726 ], 22, 1 );
    const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9 = UNSTREAM_STRING( &constant_bin[ 1053748 ], 61, 0 );
    const_str_digest_d3e96f948eaa41c53caaae3833d57481 = UNSTREAM_STRING( &constant_bin[ 1053809 ], 66, 0 );
    const_str_digest_46584e2093371b92bd116a36f6fac20c = UNSTREAM_STRING( &constant_bin[ 1053875 ], 21, 0 );
    const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9 = UNSTREAM_STRING( &constant_bin[ 1053896 ], 60, 0 );
    const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2 = UNSTREAM_STRING( &constant_bin[ 1053956 ], 192, 0 );
    const_str_digest_bd0936ca02f1a13226f22c3deffbdda4 = UNSTREAM_STRING( &constant_bin[ 1054148 ], 21, 0 );
    const_str_digest_4221c6866c41e5ab7b77b09bf6885351 = UNSTREAM_STRING( &constant_bin[ 1054169 ], 68, 0 );
    const_str_digest_ffd5c59803af63cf2041e83ca8e66823 = UNSTREAM_STRING( &constant_bin[ 1054237 ], 29, 0 );
    const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 3, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_50f562faa7eed1b409bdd05c97fc14f2 = UNSTREAM_STRING( &constant_bin[ 1054266 ], 99, 0 );
    const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10 = UNSTREAM_STRING( &constant_bin[ 1054365 ], 49, 0 );
    const_str_digest_d54edb257b1240e069427ea15807c309 = UNSTREAM_STRING( &constant_bin[ 1054414 ], 62, 0 );
    const_str_plain_expected = UNSTREAM_STRING( &constant_bin[ 13537 ], 8, 1 );
    const_str_digest_ae47a0634b7ce883442a5d8a017f6a25 = UNSTREAM_STRING( &constant_bin[ 1054476 ], 122, 0 );
    const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd = UNSTREAM_STRING( &constant_bin[ 1054598 ], 48, 0 );
    const_str_digest_5cd5167a778e9ea5a19e045e34276deb = UNSTREAM_STRING( &constant_bin[ 1054646 ], 72, 0 );
    const_str_digest_d455563e1ef951148bac32f5cc949a27 = UNSTREAM_STRING( &constant_bin[ 1054718 ], 48, 0 );
    const_str_digest_1b17e5345caa893d267645d5296f52b9 = UNSTREAM_STRING( &constant_bin[ 1054766 ], 67, 0 );
    const_str_digest_0beacf6afb33b121e9545510332129fc = UNSTREAM_STRING( &constant_bin[ 1054833 ], 57, 0 );
    const_str_digest_8c0402b3f822d653c84c590d6e596566 = UNSTREAM_STRING( &constant_bin[ 1054890 ], 57, 0 );
    const_str_digest_0af1d92cbf25f8a036fda6803e038903 = UNSTREAM_STRING( &constant_bin[ 1054947 ], 57, 0 );
    const_str_digest_401d5766bd48277296aa1afc93f98bc4 = UNSTREAM_STRING( &constant_bin[ 1055004 ], 47, 0 );
    const_str_digest_caae7e70acce199048d0f76529b5d906 = UNSTREAM_STRING( &constant_bin[ 1055051 ], 51, 0 );
    const_str_digest_c85fd95998d676bb8b296c5552d11916 = UNSTREAM_STRING( &constant_bin[ 1055102 ], 33, 0 );
    const_str_digest_d23d849ab02a6235eb0652ac312b2323 = UNSTREAM_STRING( &constant_bin[ 1055135 ], 64, 0 );
    const_str_plain_Unknown = UNSTREAM_STRING( &constant_bin[ 24418 ], 7, 1 );
    const_str_digest_3cba0a880d63b7b310fd43504b18c057 = UNSTREAM_STRING( &constant_bin[ 1055199 ], 63, 0 );
    const_str_digest_7507dacd42331ff69ed33f16b17b92b8 = UNSTREAM_STRING( &constant_bin[ 1055262 ], 47, 0 );
    const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_7cd1672c18c257a809407a1a63fa0e88 = UNSTREAM_STRING( &constant_bin[ 1055309 ], 44, 0 );
    const_str_digest_b3cccf261f53b23aaf668796a6ebdda4 = UNSTREAM_STRING( &constant_bin[ 1055353 ], 38, 0 );
    const_str_plain_PoolError = UNSTREAM_STRING( &constant_bin[ 1037471 ], 9, 1 );
    const_str_digest_85322d4279b2ac8026a5921e77f32165 = UNSTREAM_STRING( &constant_bin[ 1055391 ], 69, 0 );
    const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 1, const_str_plain_defects ); Py_INCREF( const_str_plain_defects );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 2, const_str_plain_unparsed_data ); Py_INCREF( const_str_plain_unparsed_data );
    PyTuple_SET_ITEM( const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_cb9b95f47cda8f2821509d84e8d824e3 = UNSTREAM_STRING( &constant_bin[ 1055460 ], 19, 0 );
    const_str_digest_906ad4a0fc873be8c0c812f03902dc29 = UNSTREAM_STRING( &constant_bin[ 1055479 ], 70, 0 );
    const_str_digest_b0cc034d9177fde48a3b44ac122139d9 = UNSTREAM_STRING( &constant_bin[ 987907 ], 6, 0 );
    const_str_digest_52259094e9ef0d3b81149cff696bacc3 = UNSTREAM_STRING( &constant_bin[ 1055549 ], 41, 0 );
    const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 1, const_str_plain_partial ); Py_INCREF( const_str_plain_partial );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 2, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    const_str_digest_0b3cbe0215684a287553275c21c89d2f = UNSTREAM_STRING( &constant_bin[ 1055590 ], 59, 0 );
    const_str_digest_3ecac7959fca6b094793e5853872d936 = UNSTREAM_STRING( &constant_bin[ 1055649 ], 47, 0 );
    const_str_digest_664d83eb41f8cfe3a1092e98f7d92027 = UNSTREAM_STRING( &constant_bin[ 1055696 ], 35, 0 );
    const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 1, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_8e8ee501a73b92aaab075e946de662bf = UNSTREAM_STRING( &constant_bin[ 1055731 ], 48, 0 );
    const_str_digest_28db377b4c4aaf2881b08e822881aecb = UNSTREAM_STRING( &constant_bin[ 1055779 ], 40, 0 );
    const_str_digest_46b5bed5a2577b5849f26cefa58279d5 = UNSTREAM_STRING( &constant_bin[ 1055819 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_604c767a40d022adda63962b6e9761ac;
static PyCodeObject *codeobj_b164284f180d2d14beed97efcee95efb;
static PyCodeObject *codeobj_078147843479901e207accc7ebd52b69;
static PyCodeObject *codeobj_047912876e091a97a4c8af65fda058fb;
static PyCodeObject *codeobj_602733a92d0132ac06cfb0cc4adbbd77;
static PyCodeObject *codeobj_0b2a0f7167b203b061002c8efd560dbd;
static PyCodeObject *codeobj_613b80961f55dd3fa740c16ced88db6f;
static PyCodeObject *codeobj_5f2be2feb198754f4aa7797b4f6deebe;
static PyCodeObject *codeobj_daf2dd82a94f77127d3f2459d900aacd;
static PyCodeObject *codeobj_ef307bb37800655dad0628bcfb3bad28;
static PyCodeObject *codeobj_4b8a9f790d4d2b496cdcb545010eb68d;
static PyCodeObject *codeobj_9e0b368c3b974aa8b1cfdd16c0bb3e19;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_bd0936ca02f1a13226f22c3deffbdda4 );
    codeobj_604c767a40d022adda63962b6e9761ac = MAKE_CODEOBJ( module_filename_obj, const_str_digest_46b5bed5a2577b5849f26cefa58279d5, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b164284f180d2d14beed97efcee95efb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 20, const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_078147843479901e207accc7ebd52b69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_047912876e091a97a4c8af65fda058fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 78, const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_602733a92d0132ac06cfb0cc4adbbd77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 89, const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0b2a0f7167b203b061002c8efd560dbd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 146, const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_613b80961f55dd3fa740c16ced88db6f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 221, const_tuple_str_plain_self_str_plain_partial_str_plain_expected_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5f2be2feb198754f4aa7797b4f6deebe = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 240, const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_daf2dd82a94f77127d3f2459d900aacd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 248, const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_ef307bb37800655dad0628bcfb3bad28 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 24, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_4b8a9f790d4d2b496cdcb545010eb68d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 36, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_9e0b368c3b974aa8b1cfdd16c0bb3e19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 224, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );


// The module function definitions.
static PyObject *impl_urllib3$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_message = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b164284f180d2d14beed97efcee95efb = NULL;

    struct Nuitka_FrameObject *frame_b164284f180d2d14beed97efcee95efb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b164284f180d2d14beed97efcee95efb, codeobj_b164284f180d2d14beed97efcee95efb, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b164284f180d2d14beed97efcee95efb = cache_frame_b164284f180d2d14beed97efcee95efb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b164284f180d2d14beed97efcee95efb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b164284f180d2d14beed97efcee95efb ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_pool;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pool, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_pool;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_b164284f180d2d14beed97efcee95efb->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b164284f180d2d14beed97efcee95efb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b164284f180d2d14beed97efcee95efb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b164284f180d2d14beed97efcee95efb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b164284f180d2d14beed97efcee95efb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b164284f180d2d14beed97efcee95efb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b164284f180d2d14beed97efcee95efb,
        type_description_1,
        par_self,
        par_pool,
        par_message
    );


    // Release cached frame.
    if ( frame_b164284f180d2d14beed97efcee95efb == cache_frame_b164284f180d2d14beed97efcee95efb )
    {
        Py_DECREF( frame_b164284f180d2d14beed97efcee95efb );
    }
    cache_frame_b164284f180d2d14beed97efcee95efb = NULL;

    assertFrameObject( frame_b164284f180d2d14beed97efcee95efb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_2___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_ef307bb37800655dad0628bcfb3bad28 = NULL;

    struct Nuitka_FrameObject *frame_ef307bb37800655dad0628bcfb3bad28;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef307bb37800655dad0628bcfb3bad28, codeobj_ef307bb37800655dad0628bcfb3bad28, module_urllib3$exceptions, sizeof(void *) );
    frame_ef307bb37800655dad0628bcfb3bad28 = cache_frame_ef307bb37800655dad0628bcfb3bad28;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef307bb37800655dad0628bcfb3bad28 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef307bb37800655dad0628bcfb3bad28 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef307bb37800655dad0628bcfb3bad28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef307bb37800655dad0628bcfb3bad28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef307bb37800655dad0628bcfb3bad28 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef307bb37800655dad0628bcfb3bad28, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef307bb37800655dad0628bcfb3bad28->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef307bb37800655dad0628bcfb3bad28, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef307bb37800655dad0628bcfb3bad28,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ef307bb37800655dad0628bcfb3bad28 == cache_frame_ef307bb37800655dad0628bcfb3bad28 )
    {
        Py_DECREF( frame_ef307bb37800655dad0628bcfb3bad28 );
    }
    cache_frame_ef307bb37800655dad0628bcfb3bad28 = NULL;

    assertFrameObject( frame_ef307bb37800655dad0628bcfb3bad28 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_message = python_pars[ 3 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_078147843479901e207accc7ebd52b69 = NULL;

    struct Nuitka_FrameObject *frame_078147843479901e207accc7ebd52b69;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_078147843479901e207accc7ebd52b69, codeobj_078147843479901e207accc7ebd52b69, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_078147843479901e207accc7ebd52b69 = cache_frame_078147843479901e207accc7ebd52b69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_078147843479901e207accc7ebd52b69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_078147843479901e207accc7ebd52b69 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_url;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_url, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PoolError" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_pool;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_message;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_078147843479901e207accc7ebd52b69->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_078147843479901e207accc7ebd52b69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_078147843479901e207accc7ebd52b69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_078147843479901e207accc7ebd52b69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_078147843479901e207accc7ebd52b69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_078147843479901e207accc7ebd52b69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_078147843479901e207accc7ebd52b69,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_message
    );


    // Release cached frame.
    if ( frame_078147843479901e207accc7ebd52b69 == cache_frame_078147843479901e207accc7ebd52b69 )
    {
        Py_DECREF( frame_078147843479901e207accc7ebd52b69 );
    }
    cache_frame_078147843479901e207accc7ebd52b69 = NULL;

    assertFrameObject( frame_078147843479901e207accc7ebd52b69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_4___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_4b8a9f790d4d2b496cdcb545010eb68d = NULL;

    struct Nuitka_FrameObject *frame_4b8a9f790d4d2b496cdcb545010eb68d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b8a9f790d4d2b496cdcb545010eb68d, codeobj_4b8a9f790d4d2b496cdcb545010eb68d, module_urllib3$exceptions, sizeof(void *) );
    frame_4b8a9f790d4d2b496cdcb545010eb68d = cache_frame_4b8a9f790d4d2b496cdcb545010eb68d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b8a9f790d4d2b496cdcb545010eb68d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b8a9f790d4d2b496cdcb545010eb68d ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b8a9f790d4d2b496cdcb545010eb68d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b8a9f790d4d2b496cdcb545010eb68d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b8a9f790d4d2b496cdcb545010eb68d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b8a9f790d4d2b496cdcb545010eb68d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b8a9f790d4d2b496cdcb545010eb68d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b8a9f790d4d2b496cdcb545010eb68d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b8a9f790d4d2b496cdcb545010eb68d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4b8a9f790d4d2b496cdcb545010eb68d == cache_frame_4b8a9f790d4d2b496cdcb545010eb68d )
    {
        Py_DECREF( frame_4b8a9f790d4d2b496cdcb545010eb68d );
    }
    cache_frame_4b8a9f790d4d2b496cdcb545010eb68d = NULL;

    assertFrameObject( frame_4b8a9f790d4d2b496cdcb545010eb68d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_reason = python_pars[ 3 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_047912876e091a97a4c8af65fda058fb = NULL;

    struct Nuitka_FrameObject *frame_047912876e091a97a4c8af65fda058fb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_047912876e091a97a4c8af65fda058fb, codeobj_047912876e091a97a4c8af65fda058fb, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_047912876e091a97a4c8af65fda058fb = cache_frame_047912876e091a97a4c8af65fda058fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_047912876e091a97a4c8af65fda058fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_047912876e091a97a4c8af65fda058fb ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_reason;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reason, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_8e8ee501a73b92aaab075e946de662bf;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_reason;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestError" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_pool;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_message;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_047912876e091a97a4c8af65fda058fb->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_047912876e091a97a4c8af65fda058fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_047912876e091a97a4c8af65fda058fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_047912876e091a97a4c8af65fda058fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_047912876e091a97a4c8af65fda058fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_047912876e091a97a4c8af65fda058fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_047912876e091a97a4c8af65fda058fb,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_reason,
        var_message
    );


    // Release cached frame.
    if ( frame_047912876e091a97a4c8af65fda058fb == cache_frame_047912876e091a97a4c8af65fda058fb )
    {
        Py_DECREF( frame_047912876e091a97a4c8af65fda058fb );
    }
    cache_frame_047912876e091a97a4c8af65fda058fb = NULL;

    assertFrameObject( frame_047912876e091a97a4c8af65fda058fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_retries = python_pars[ 3 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_602733a92d0132ac06cfb0cc4adbbd77 = NULL;

    struct Nuitka_FrameObject *frame_602733a92d0132ac06cfb0cc4adbbd77;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_602733a92d0132ac06cfb0cc4adbbd77, codeobj_602733a92d0132ac06cfb0cc4adbbd77, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_602733a92d0132ac06cfb0cc4adbbd77 = cache_frame_602733a92d0132ac06cfb0cc4adbbd77;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_602733a92d0132ac06cfb0cc4adbbd77 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_602733a92d0132ac06cfb0cc4adbbd77 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_52259094e9ef0d3b81149cff696bacc3;
    tmp_right_name_1 = par_url;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestError" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_pool;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_message;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_602733a92d0132ac06cfb0cc4adbbd77->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_retries;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_retries, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_602733a92d0132ac06cfb0cc4adbbd77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_602733a92d0132ac06cfb0cc4adbbd77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_602733a92d0132ac06cfb0cc4adbbd77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_602733a92d0132ac06cfb0cc4adbbd77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_602733a92d0132ac06cfb0cc4adbbd77, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_602733a92d0132ac06cfb0cc4adbbd77,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_retries,
        var_message
    );


    // Release cached frame.
    if ( frame_602733a92d0132ac06cfb0cc4adbbd77 == cache_frame_602733a92d0132ac06cfb0cc4adbbd77 )
    {
        Py_DECREF( frame_602733a92d0132ac06cfb0cc4adbbd77 );
    }
    cache_frame_602733a92d0132ac06cfb0cc4adbbd77 = NULL;

    assertFrameObject( frame_602733a92d0132ac06cfb0cc4adbbd77 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pool );
    Py_DECREF( par_pool );
    par_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_location = python_pars[ 1 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0b2a0f7167b203b061002c8efd560dbd = NULL;

    struct Nuitka_FrameObject *frame_0b2a0f7167b203b061002c8efd560dbd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b2a0f7167b203b061002c8efd560dbd, codeobj_0b2a0f7167b203b061002c8efd560dbd, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b2a0f7167b203b061002c8efd560dbd = cache_frame_0b2a0f7167b203b061002c8efd560dbd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b2a0f7167b203b061002c8efd560dbd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b2a0f7167b203b061002c8efd560dbd ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
    tmp_right_name_1 = par_location;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_message;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_0b2a0f7167b203b061002c8efd560dbd->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_location;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_location, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b2a0f7167b203b061002c8efd560dbd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b2a0f7167b203b061002c8efd560dbd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b2a0f7167b203b061002c8efd560dbd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b2a0f7167b203b061002c8efd560dbd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b2a0f7167b203b061002c8efd560dbd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b2a0f7167b203b061002c8efd560dbd,
        type_description_1,
        par_self,
        par_location,
        var_message
    );


    // Release cached frame.
    if ( frame_0b2a0f7167b203b061002c8efd560dbd == cache_frame_0b2a0f7167b203b061002c8efd560dbd )
    {
        Py_DECREF( frame_0b2a0f7167b203b061002c8efd560dbd );
    }
    cache_frame_0b2a0f7167b203b061002c8efd560dbd = NULL;

    assertFrameObject( frame_0b2a0f7167b203b061002c8efd560dbd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_location );
    Py_DECREF( par_location );
    par_location = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_location );
    Py_DECREF( par_location );
    par_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_partial = python_pars[ 1 ];
    PyObject *par_expected = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_613b80961f55dd3fa740c16ced88db6f = NULL;

    struct Nuitka_FrameObject *frame_613b80961f55dd3fa740c16ced88db6f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_613b80961f55dd3fa740c16ced88db6f, codeobj_613b80961f55dd3fa740c16ced88db6f, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_613b80961f55dd3fa740c16ced88db6f = cache_frame_613b80961f55dd3fa740c16ced88db6f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_613b80961f55dd3fa740c16ced88db6f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_613b80961f55dd3fa740c16ced88db6f ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncompleteRead );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "IncompleteRead" );
        exception_tb = NULL;

        exception_lineno = 222;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_partial;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_expected;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_613b80961f55dd3fa740c16ced88db6f->m_frame.f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_613b80961f55dd3fa740c16ced88db6f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_613b80961f55dd3fa740c16ced88db6f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_613b80961f55dd3fa740c16ced88db6f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_613b80961f55dd3fa740c16ced88db6f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_613b80961f55dd3fa740c16ced88db6f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_613b80961f55dd3fa740c16ced88db6f,
        type_description_1,
        par_self,
        par_partial,
        par_expected
    );


    // Release cached frame.
    if ( frame_613b80961f55dd3fa740c16ced88db6f == cache_frame_613b80961f55dd3fa740c16ced88db6f )
    {
        Py_DECREF( frame_613b80961f55dd3fa740c16ced88db6f );
    }
    cache_frame_613b80961f55dd3fa740c16ced88db6f = NULL;

    assertFrameObject( frame_613b80961f55dd3fa740c16ced88db6f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_expected );
    Py_DECREF( par_expected );
    par_expected = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_partial );
    Py_DECREF( par_partial );
    par_partial = NULL;

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

    CHECK_OBJECT( (PyObject *)par_expected );
    Py_DECREF( par_expected );
    par_expected = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_partial );
    Py_DECREF( par_partial );
    par_partial = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_9___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 = NULL;

    struct Nuitka_FrameObject *frame_9e0b368c3b974aa8b1cfdd16c0bb3e19;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e0b368c3b974aa8b1cfdd16c0bb3e19, codeobj_9e0b368c3b974aa8b1cfdd16c0bb3e19, module_urllib3$exceptions, sizeof(void *) );
    frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 = cache_frame_9e0b368c3b974aa8b1cfdd16c0bb3e19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 226;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_expected );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 227;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e0b368c3b974aa8b1cfdd16c0bb3e19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e0b368c3b974aa8b1cfdd16c0bb3e19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e0b368c3b974aa8b1cfdd16c0bb3e19,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 == cache_frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 )
    {
        Py_DECREF( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );
    }
    cache_frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 = NULL;

    assertFrameObject( frame_9e0b368c3b974aa8b1cfdd16c0bb3e19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
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


static PyObject *impl_urllib3$exceptions$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5f2be2feb198754f4aa7797b4f6deebe = NULL;

    struct Nuitka_FrameObject *frame_5f2be2feb198754f4aa7797b4f6deebe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f2be2feb198754f4aa7797b4f6deebe, codeobj_5f2be2feb198754f4aa7797b4f6deebe, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f2be2feb198754f4aa7797b4f6deebe = cache_frame_5f2be2feb198754f4aa7797b4f6deebe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f2be2feb198754f4aa7797b4f6deebe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f2be2feb198754f4aa7797b4f6deebe ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
    tmp_right_name_1 = par_scheme;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProxySchemeUnknown" );
        exception_tb = NULL;

        exception_lineno = 242;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5f2be2feb198754f4aa7797b4f6deebe->m_frame.f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2be2feb198754f4aa7797b4f6deebe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f2be2feb198754f4aa7797b4f6deebe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f2be2feb198754f4aa7797b4f6deebe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f2be2feb198754f4aa7797b4f6deebe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f2be2feb198754f4aa7797b4f6deebe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f2be2feb198754f4aa7797b4f6deebe,
        type_description_1,
        par_self,
        par_scheme,
        var_message
    );


    // Release cached frame.
    if ( frame_5f2be2feb198754f4aa7797b4f6deebe == cache_frame_5f2be2feb198754f4aa7797b4f6deebe )
    {
        Py_DECREF( frame_5f2be2feb198754f4aa7797b4f6deebe );
    }
    cache_frame_5f2be2feb198754f4aa7797b4f6deebe = NULL;

    assertFrameObject( frame_5f2be2feb198754f4aa7797b4f6deebe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scheme );
    Py_DECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_defects = python_pars[ 1 ];
    PyObject *par_unparsed_data = python_pars[ 2 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_daf2dd82a94f77127d3f2459d900aacd = NULL;

    struct Nuitka_FrameObject *frame_daf2dd82a94f77127d3f2459d900aacd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_daf2dd82a94f77127d3f2459d900aacd, codeobj_daf2dd82a94f77127d3f2459d900aacd, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_daf2dd82a94f77127d3f2459d900aacd = cache_frame_daf2dd82a94f77127d3f2459d900aacd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_daf2dd82a94f77127d3f2459d900aacd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_daf2dd82a94f77127d3f2459d900aacd ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_46584e2093371b92bd116a36f6fac20c;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_or_left_value_1 = par_defects;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 249;
        type_description_1 = "oooo";
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
    tmp_or_right_value_1 = const_str_plain_Unknown;
    tmp_tuple_element_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_tuple_element_1 = tmp_or_left_value_1;
    or_end_1:;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_unparsed_data;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HeaderParsingError" );
        exception_tb = NULL;

        exception_lineno = 250;
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


        exception_lineno = 250;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_daf2dd82a94f77127d3f2459d900aacd->m_frame.f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daf2dd82a94f77127d3f2459d900aacd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daf2dd82a94f77127d3f2459d900aacd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_daf2dd82a94f77127d3f2459d900aacd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_daf2dd82a94f77127d3f2459d900aacd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_daf2dd82a94f77127d3f2459d900aacd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_daf2dd82a94f77127d3f2459d900aacd,
        type_description_1,
        par_self,
        par_defects,
        par_unparsed_data,
        var_message
    );


    // Release cached frame.
    if ( frame_daf2dd82a94f77127d3f2459d900aacd == cache_frame_daf2dd82a94f77127d3f2459d900aacd )
    {
        Py_DECREF( frame_daf2dd82a94f77127d3f2459d900aacd );
    }
    cache_frame_daf2dd82a94f77127d3f2459d900aacd = NULL;

    assertFrameObject( frame_daf2dd82a94f77127d3f2459d900aacd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_unparsed_data );
    Py_DECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    CHECK_OBJECT( (PyObject *)par_defects );
    Py_DECREF( par_defects );
    par_defects = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)par_unparsed_data );
    Py_DECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    CHECK_OBJECT( (PyObject *)par_defects );
    Py_DECREF( par_defects );
    par_defects = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
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



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f2be2feb198754f4aa7797b4f6deebe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daf2dd82a94f77127d3f2459d900aacd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b164284f180d2d14beed97efcee95efb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_2___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef307bb37800655dad0628bcfb3bad28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_078147843479901e207accc7ebd52b69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_4___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b8a9f790d4d2b496cdcb545010eb68d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_047912876e091a97a4c8af65fda058fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_602733a92d0132ac06cfb0cc4adbbd77,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b2a0f7167b203b061002c8efd560dbd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_613b80961f55dd3fa740c16ced88db6f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_9___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e0b368c3b974aa8b1cfdd16c0bb3e19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.exceptions",   /* m_name */
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

MOD_INIT_DECL( urllib3$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$exceptions );
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
    puts("urllib3.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$exceptions = Py_InitModule4(
        "urllib3.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$exceptions = PyModule_Create( &mdef_urllib3$exceptions );
#endif

    moduledict_urllib3$exceptions = MODULE_DICT( module_urllib3$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c8562bbff9d721153deb2fdd066393d0, module_urllib3$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class = NULL;
    PyObject *tmp_class_creation_14__class_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class = NULL;
    PyObject *tmp_class_creation_15__class_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class = NULL;
    PyObject *tmp_class_creation_16__class_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class = NULL;
    PyObject *tmp_class_creation_17__class_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class = NULL;
    PyObject *tmp_class_creation_18__class_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class = NULL;
    PyObject *tmp_class_creation_19__class_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class = NULL;
    PyObject *tmp_class_creation_20__class_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class = NULL;
    PyObject *tmp_class_creation_21__class_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class = NULL;
    PyObject *tmp_class_creation_22__class_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class = NULL;
    PyObject *tmp_class_creation_23__class_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__class = NULL;
    PyObject *tmp_class_creation_24__class_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__class = NULL;
    PyObject *tmp_class_creation_25__class_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__class = NULL;
    PyObject *tmp_class_creation_26__class_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__class = NULL;
    PyObject *tmp_class_creation_27__class_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__class = NULL;
    PyObject *tmp_class_creation_28__class_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_29__bases = NULL;
    PyObject *tmp_class_creation_29__class = NULL;
    PyObject *tmp_class_creation_29__class_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_30__bases = NULL;
    PyObject *tmp_class_creation_30__class = NULL;
    PyObject *tmp_class_creation_30__class_dict = NULL;
    PyObject *tmp_class_creation_30__metaclass = NULL;
    PyObject *tmp_class_creation_31__bases = NULL;
    PyObject *tmp_class_creation_31__class = NULL;
    PyObject *tmp_class_creation_31__class_dict = NULL;
    PyObject *tmp_class_creation_31__metaclass = NULL;
    PyObject *tmp_class_creation_32__bases = NULL;
    PyObject *tmp_class_creation_32__class = NULL;
    PyObject *tmp_class_creation_32__class_dict = NULL;
    PyObject *tmp_class_creation_32__metaclass = NULL;
    PyObject *tmp_class_creation_33__bases = NULL;
    PyObject *tmp_class_creation_33__class = NULL;
    PyObject *tmp_class_creation_33__class_dict = NULL;
    PyObject *tmp_class_creation_33__metaclass = NULL;
    PyObject *tmp_class_creation_34__bases = NULL;
    PyObject *tmp_class_creation_34__class = NULL;
    PyObject *tmp_class_creation_34__class_dict = NULL;
    PyObject *tmp_class_creation_34__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_14__base = NULL;
    PyObject *tmp_select_metaclass_15__base = NULL;
    PyObject *tmp_select_metaclass_16__base = NULL;
    PyObject *tmp_select_metaclass_17__base = NULL;
    PyObject *tmp_select_metaclass_18__base = NULL;
    PyObject *tmp_select_metaclass_19__base = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_20__base = NULL;
    PyObject *tmp_select_metaclass_21__base = NULL;
    PyObject *tmp_select_metaclass_22__base = NULL;
    PyObject *tmp_select_metaclass_23__base = NULL;
    PyObject *tmp_select_metaclass_24__base = NULL;
    PyObject *tmp_select_metaclass_25__base = NULL;
    PyObject *tmp_select_metaclass_26__base = NULL;
    PyObject *tmp_select_metaclass_27__base = NULL;
    PyObject *tmp_select_metaclass_28__base = NULL;
    PyObject *tmp_select_metaclass_29__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_30__base = NULL;
    PyObject *tmp_select_metaclass_31__base = NULL;
    PyObject *tmp_select_metaclass_32__base = NULL;
    PyObject *tmp_select_metaclass_33__base = NULL;
    PyObject *tmp_select_metaclass_34__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
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
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_element_name_64;
    PyObject *tmp_args_element_name_65;
    PyObject *tmp_args_element_name_66;
    PyObject *tmp_args_element_name_67;
    PyObject *tmp_args_element_name_68;
    PyObject *tmp_args_element_name_69;
    PyObject *tmp_args_element_name_70;
    PyObject *tmp_args_element_name_71;
    PyObject *tmp_args_element_name_72;
    PyObject *tmp_args_element_name_73;
    PyObject *tmp_args_element_name_74;
    PyObject *tmp_args_element_name_75;
    PyObject *tmp_args_element_name_76;
    PyObject *tmp_args_element_name_77;
    PyObject *tmp_args_element_name_78;
    PyObject *tmp_args_element_name_79;
    PyObject *tmp_args_element_name_80;
    PyObject *tmp_args_element_name_81;
    PyObject *tmp_args_element_name_82;
    PyObject *tmp_args_element_name_83;
    PyObject *tmp_args_element_name_84;
    PyObject *tmp_args_element_name_85;
    PyObject *tmp_args_element_name_86;
    PyObject *tmp_args_element_name_87;
    PyObject *tmp_args_element_name_88;
    PyObject *tmp_args_element_name_89;
    PyObject *tmp_args_element_name_90;
    PyObject *tmp_args_element_name_91;
    PyObject *tmp_args_element_name_92;
    PyObject *tmp_args_element_name_93;
    PyObject *tmp_args_element_name_94;
    PyObject *tmp_args_element_name_95;
    PyObject *tmp_args_element_name_96;
    PyObject *tmp_args_element_name_97;
    PyObject *tmp_args_element_name_98;
    PyObject *tmp_args_element_name_99;
    PyObject *tmp_args_element_name_100;
    PyObject *tmp_args_element_name_101;
    PyObject *tmp_args_element_name_102;
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
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
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
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
    int tmp_cmp_In_30;
    int tmp_cmp_In_31;
    int tmp_cmp_In_32;
    int tmp_cmp_In_33;
    int tmp_cmp_In_34;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dict_name_31;
    PyObject *tmp_dict_name_32;
    PyObject *tmp_dict_name_33;
    PyObject *tmp_dict_name_34;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_key_name_31;
    PyObject *tmp_key_name_32;
    PyObject *tmp_key_name_33;
    PyObject *tmp_key_name_34;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    PyObject *tmp_outline_return_value_21;
    PyObject *tmp_outline_return_value_22;
    PyObject *tmp_outline_return_value_23;
    PyObject *tmp_outline_return_value_24;
    PyObject *tmp_outline_return_value_25;
    PyObject *tmp_outline_return_value_26;
    PyObject *tmp_outline_return_value_27;
    PyObject *tmp_outline_return_value_28;
    PyObject *tmp_outline_return_value_29;
    PyObject *tmp_outline_return_value_30;
    PyObject *tmp_outline_return_value_31;
    PyObject *tmp_outline_return_value_32;
    PyObject *tmp_outline_return_value_33;
    PyObject *tmp_outline_return_value_34;
    PyObject *tmp_outline_return_value_35;
    PyObject *tmp_outline_return_value_36;
    PyObject *tmp_outline_return_value_37;
    PyObject *tmp_outline_return_value_38;
    PyObject *tmp_outline_return_value_39;
    PyObject *tmp_outline_return_value_40;
    PyObject *tmp_outline_return_value_41;
    PyObject *tmp_outline_return_value_42;
    PyObject *tmp_outline_return_value_43;
    PyObject *tmp_outline_return_value_44;
    PyObject *tmp_outline_return_value_45;
    PyObject *tmp_outline_return_value_46;
    PyObject *tmp_outline_return_value_47;
    PyObject *tmp_outline_return_value_48;
    PyObject *tmp_outline_return_value_49;
    PyObject *tmp_outline_return_value_50;
    PyObject *tmp_outline_return_value_51;
    PyObject *tmp_outline_return_value_52;
    PyObject *tmp_outline_return_value_53;
    PyObject *tmp_outline_return_value_54;
    PyObject *tmp_outline_return_value_55;
    PyObject *tmp_outline_return_value_56;
    PyObject *tmp_outline_return_value_57;
    PyObject *tmp_outline_return_value_58;
    PyObject *tmp_outline_return_value_59;
    PyObject *tmp_outline_return_value_60;
    PyObject *tmp_outline_return_value_61;
    PyObject *tmp_outline_return_value_62;
    PyObject *tmp_outline_return_value_63;
    PyObject *tmp_outline_return_value_64;
    PyObject *tmp_outline_return_value_65;
    PyObject *tmp_outline_return_value_66;
    PyObject *tmp_outline_return_value_67;
    PyObject *tmp_outline_return_value_68;
    int tmp_res;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscribed_name_25;
    PyObject *tmp_subscribed_name_26;
    PyObject *tmp_subscribed_name_27;
    PyObject *tmp_subscribed_name_28;
    PyObject *tmp_subscribed_name_29;
    PyObject *tmp_subscribed_name_30;
    PyObject *tmp_subscribed_name_31;
    PyObject *tmp_subscribed_name_32;
    PyObject *tmp_subscribed_name_33;
    PyObject *tmp_subscribed_name_34;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_subscript_name_25;
    PyObject *tmp_subscript_name_26;
    PyObject *tmp_subscript_name_27;
    PyObject *tmp_subscript_name_28;
    PyObject *tmp_subscript_name_29;
    PyObject *tmp_subscript_name_30;
    PyObject *tmp_subscript_name_31;
    PyObject *tmp_subscript_name_32;
    PyObject *tmp_subscript_name_33;
    PyObject *tmp_subscript_name_34;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    PyObject *tmp_type_arg_23;
    PyObject *tmp_type_arg_24;
    PyObject *tmp_type_arg_25;
    PyObject *tmp_type_arg_26;
    PyObject *tmp_type_arg_27;
    PyObject *tmp_type_arg_28;
    PyObject *tmp_type_arg_29;
    PyObject *tmp_type_arg_30;
    PyObject *tmp_type_arg_31;
    PyObject *tmp_type_arg_32;
    PyObject *tmp_type_arg_33;
    PyObject *tmp_type_arg_34;
    struct Nuitka_FrameObject *frame_604c767a40d022adda63962b6e9761ac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    tmp_outline_return_value_21 = NULL;
    tmp_outline_return_value_22 = NULL;
    tmp_outline_return_value_23 = NULL;
    tmp_outline_return_value_24 = NULL;
    tmp_outline_return_value_25 = NULL;
    tmp_outline_return_value_26 = NULL;
    tmp_outline_return_value_27 = NULL;
    tmp_outline_return_value_28 = NULL;
    tmp_outline_return_value_29 = NULL;
    tmp_outline_return_value_30 = NULL;
    tmp_outline_return_value_31 = NULL;
    tmp_outline_return_value_32 = NULL;
    tmp_outline_return_value_33 = NULL;
    tmp_outline_return_value_34 = NULL;
    tmp_outline_return_value_35 = NULL;
    tmp_outline_return_value_36 = NULL;
    tmp_outline_return_value_37 = NULL;
    tmp_outline_return_value_38 = NULL;
    tmp_outline_return_value_39 = NULL;
    tmp_outline_return_value_40 = NULL;
    tmp_outline_return_value_41 = NULL;
    tmp_outline_return_value_42 = NULL;
    tmp_outline_return_value_43 = NULL;
    tmp_outline_return_value_44 = NULL;
    tmp_outline_return_value_45 = NULL;
    tmp_outline_return_value_46 = NULL;
    tmp_outline_return_value_47 = NULL;
    tmp_outline_return_value_48 = NULL;
    tmp_outline_return_value_49 = NULL;
    tmp_outline_return_value_50 = NULL;
    tmp_outline_return_value_51 = NULL;
    tmp_outline_return_value_52 = NULL;
    tmp_outline_return_value_53 = NULL;
    tmp_outline_return_value_54 = NULL;
    tmp_outline_return_value_55 = NULL;
    tmp_outline_return_value_56 = NULL;
    tmp_outline_return_value_57 = NULL;
    tmp_outline_return_value_58 = NULL;
    tmp_outline_return_value_59 = NULL;
    tmp_outline_return_value_60 = NULL;
    tmp_outline_return_value_61 = NULL;
    tmp_outline_return_value_62 = NULL;
    tmp_outline_return_value_63 = NULL;
    tmp_outline_return_value_64 = NULL;
    tmp_outline_return_value_65 = NULL;
    tmp_outline_return_value_66 = NULL;
    tmp_outline_return_value_67 = NULL;
    tmp_outline_return_value_68 = NULL;
    PyObject *locals_EmptyPoolError_128 = NULL;
    PyObject *locals_HTTPWarning_12 = NULL;
    PyObject *locals_DependencyWarning_189 = NULL;
    PyObject *locals_InvalidHeader_231 = NULL;
    PyObject *locals_TimeoutStateError_95 = NULL;
    PyObject *locals_InsecurePlatformWarning_179 = NULL;
    PyObject *locals_SecurityWarning_159 = NULL;
    PyObject *locals_ClosedPoolError_133 = NULL;
    PyObject *locals_TimeoutError_101 = NULL;
    PyObject *locals_BodyNotHttplibCompatible_203 = NULL;
    PyObject *locals_MaxRetryError_68 = NULL;
    PyObject *locals_ConnectTimeoutError_118 = NULL;
    PyObject *locals_SSLError_41 = NULL;
    PyObject *locals_IncompleteRead_212 = NULL;
    PyObject *locals_HeaderParsingError_245 = NULL;
    PyObject *locals_SNIMissingWarning_184 = NULL;
    PyObject *locals_HostChangedError_86 = NULL;
    PyObject *locals_PoolError_17 = NULL;
    PyObject *locals_UnrewindableBodyError_253 = NULL;
    PyObject *locals_ResponseNotChunked_198 = NULL;
    PyObject *locals_NewConnectionError_123 = NULL;
    PyObject *locals_HTTPError_7 = NULL;
    PyObject *locals_ProxyError_46 = NULL;
    PyObject *locals_SubjectAltNameWarning_164 = NULL;
    PyObject *locals_SystemTimeWarning_174 = NULL;
    PyObject *locals_ResponseError_153 = NULL;
    PyObject *locals_DecodeError_51 = NULL;
    PyObject *locals_InsecureRequestWarning_169 = NULL;
    PyObject *locals_LocationValueError_138 = NULL;
    PyObject *locals_RequestError_29 = NULL;
    PyObject *locals_ProxySchemeUnknown_236 = NULL;
    PyObject *locals_ProtocolError_56 = NULL;
    PyObject *locals_LocationParseError_143 = NULL;
    PyObject *locals_ReadTimeoutError_111 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_604c767a40d022adda63962b6e9761ac = MAKE_MODULE_FRAME( codeobj_604c767a40d022adda63962b6e9761ac, module_urllib3$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_604c767a40d022adda63962b6e9761ac );
    assert( Py_REFCNT( frame_604c767a40d022adda63962b6e9761ac ) == 2 );

    // Framed code:
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$exceptions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_IncompleteRead_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_IncompleteRead );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead, tmp_assign_source_4 );
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_5;

    tmp_set_locals = PyDict_New();
    locals_HTTPError_7 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_HTTPError_7, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
    tmp_res = PyDict_SetItem( locals_HTTPError_7, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_HTTPError_7;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    Py_DECREF( locals_HTTPError_7 );
    locals_HTTPError_7 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_6 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_6;

    // Tried code:
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
    tmp_assign_source_7 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_8;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_7 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_HTTPError;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 7;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_9;

    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_10 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_10 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_10 );
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

    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;

        exception_lineno = 12;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_11;

    tmp_set_locals = PyDict_New();
    locals_HTTPWarning_12 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_HTTPWarning_12, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_c85fd95998d676bb8b296c5552d11916;
    tmp_res = PyDict_SetItem( locals_HTTPWarning_12, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_3 = locals_HTTPWarning_12;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_HTTPWarning_12 );
    locals_HTTPWarning_12 = NULL;
    goto outline_result_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_12 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_12;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_5;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_14;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_8;
    }
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    tmp_type_arg_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_13 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_13;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_HTTPWarning;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_15;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_16 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_16 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning, tmp_assign_source_16 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_assign_source_17 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 17;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_17;

    tmp_set_locals = PyDict_New();
    locals_PoolError_17 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_PoolError_17, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_401d5766bd48277296aa1afc93f98bc4;
    tmp_res = PyDict_SetItem( locals_PoolError_17, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );
    tmp_res = PyDict_SetItem( locals_PoolError_17, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );
    tmp_res = PyDict_SetItem( locals_PoolError_17, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_5 = locals_PoolError_17;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_PoolError_17 );
    locals_PoolError_17 = NULL;
    goto outline_result_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_18 = tmp_outline_return_value_5;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_18;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_19 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_9;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_20;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_12;
    }
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    tmp_type_arg_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_outline_return_value_6 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_outline_return_value_6 != NULL );
    goto try_return_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_19 = tmp_outline_return_value_6;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_19;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_PoolError;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_21;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_22 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_22 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError, tmp_assign_source_22 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    tmp_assign_source_23 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;

        exception_lineno = 29;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_23;

    tmp_set_locals = PyDict_New();
    locals_RequestError_29 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_RequestError_29, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_1ac943b4741094a8fa467ee81285da04;
    tmp_res = PyDict_SetItem( locals_RequestError_29, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );
    tmp_res = PyDict_SetItem( locals_RequestError_29, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );
    tmp_res = PyDict_SetItem( locals_RequestError_29, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_7 = locals_RequestError_29;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_RequestError_29 );
    locals_RequestError_29 = NULL;
    goto outline_result_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_24 = tmp_outline_return_value_7;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_24;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_25 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_13;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_assign_source_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_13;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_26;

    // Tried code:
    // Tried code:
    tmp_source_name_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_outline_return_value_8 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_outline_return_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_16;
    }
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_7 );
    Py_XDECREF( exception_keeper_value_7 );
    Py_XDECREF( exception_keeper_tb_7 );
    tmp_type_arg_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_4 );
    tmp_outline_return_value_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( tmp_outline_return_value_8 != NULL );
    goto try_return_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_8;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_assign_source_25 = tmp_outline_return_value_8;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_25;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_10 = const_str_plain_RequestError;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_27;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_28 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_28 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_28 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_29;

    tmp_set_locals = PyDict_New();
    locals_SSLError_41 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_SSLError_41, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_0af1d92cbf25f8a036fda6803e038903;
    tmp_res = PyDict_SetItem( locals_SSLError_41, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_9 = locals_SSLError_41;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_SSLError_41 );
    locals_SSLError_41 = NULL;
    goto outline_result_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_30 = tmp_outline_return_value_9;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_30;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_31 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_17;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_assign_source_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_17;
    }
    assert( tmp_select_metaclass_5__base == NULL );
    tmp_select_metaclass_5__base = tmp_assign_source_32;

    // Tried code:
    // Tried code:
    tmp_source_name_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_outline_return_value_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_outline_return_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_20;
    }
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_9 );
    Py_XDECREF( exception_keeper_value_9 );
    Py_XDECREF( exception_keeper_tb_9 );
    tmp_type_arg_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_type_arg_5 );
    tmp_outline_return_value_10 = BUILTIN_TYPE1( tmp_type_arg_5 );
    assert( tmp_outline_return_value_10 != NULL );
    goto try_return_handler_19;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    goto outline_result_10;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_31 = tmp_outline_return_value_10;
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_31;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_13 = const_str_plain_SSLError;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_33;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_34 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_34 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    tmp_assign_source_35 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_35;

    tmp_set_locals = PyDict_New();
    locals_ProxyError_46 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ProxyError_46, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
    tmp_res = PyDict_SetItem( locals_ProxyError_46, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_11 = locals_ProxyError_46;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_ProxyError_46 );
    locals_ProxyError_46 = NULL;
    goto outline_result_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_11:;
    tmp_assign_source_36 = tmp_outline_return_value_11;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_36;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain___metaclass__;
    tmp_assign_source_37 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_21;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_assign_source_38 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_21;
    }
    assert( tmp_select_metaclass_6__base == NULL );
    tmp_select_metaclass_6__base = tmp_assign_source_38;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_outline_return_value_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_outline_return_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_24;
    }
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_11 );
    Py_XDECREF( exception_keeper_value_11 );
    Py_XDECREF( exception_keeper_tb_11 );
    tmp_type_arg_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_type_arg_6 );
    tmp_outline_return_value_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( tmp_outline_return_value_12 != NULL );
    goto try_return_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    goto outline_result_12;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_12:;
    tmp_assign_source_37 = tmp_outline_return_value_12;
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_37;

    tmp_called_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_16 = const_str_plain_ProxyError;
    tmp_args_element_name_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_args_element_name_17 );
    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_39;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_40 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_40 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_40 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    tmp_assign_source_41 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 51;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_41;

    tmp_set_locals = PyDict_New();
    locals_DecodeError_51 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_DecodeError_51, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_0b3cbe0215684a287553275c21c89d2f;
    tmp_res = PyDict_SetItem( locals_DecodeError_51, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_13 = locals_DecodeError_51;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_DecodeError_51 );
    locals_DecodeError_51 = NULL;
    goto outline_result_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_13:;
    tmp_assign_source_42 = tmp_outline_return_value_13;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_42;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain___metaclass__;
    tmp_assign_source_43 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_25;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_assign_source_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_25;
    }
    assert( tmp_select_metaclass_7__base == NULL );
    tmp_select_metaclass_7__base = tmp_assign_source_44;

    // Tried code:
    // Tried code:
    tmp_source_name_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_outline_return_value_14 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_outline_return_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_28;
    }
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_13 );
    Py_XDECREF( exception_keeper_value_13 );
    Py_XDECREF( exception_keeper_tb_13 );
    tmp_type_arg_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_type_arg_7 );
    tmp_outline_return_value_14 = BUILTIN_TYPE1( tmp_type_arg_7 );
    assert( tmp_outline_return_value_14 != NULL );
    goto try_return_handler_27;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    goto outline_result_14;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_14:;
    tmp_assign_source_43 = tmp_outline_return_value_14;
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_43;

    tmp_called_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_19 = const_str_plain_DecodeError;
    tmp_args_element_name_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_args_element_name_21 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_21 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_45;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_46 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_46 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DecodeError, tmp_assign_source_46 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    tmp_assign_source_47 = PyTuple_New( 1 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 56;

        goto try_except_handler_29;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_47;

    tmp_set_locals = PyDict_New();
    locals_ProtocolError_56 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ProtocolError_56, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_d54edb257b1240e069427ea15807c309;
    tmp_res = PyDict_SetItem( locals_ProtocolError_56, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_15 = locals_ProtocolError_56;
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_ProtocolError_56 );
    locals_ProtocolError_56 = NULL;
    goto outline_result_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_15:;
    tmp_assign_source_48 = tmp_outline_return_value_15;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_48;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_dict_name_8 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain___metaclass__;
    tmp_assign_source_49 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_29;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_assign_source_50 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_29;
    }
    assert( tmp_select_metaclass_8__base == NULL );
    tmp_select_metaclass_8__base = tmp_assign_source_50;

    // Tried code:
    // Tried code:
    tmp_source_name_8 = tmp_select_metaclass_8__base;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_outline_return_value_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
    if ( tmp_outline_return_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_32;
    }
    goto try_return_handler_31;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_15 );
    Py_XDECREF( exception_keeper_value_15 );
    Py_XDECREF( exception_keeper_tb_15 );
    tmp_type_arg_8 = tmp_select_metaclass_8__base;

    CHECK_OBJECT( tmp_type_arg_8 );
    tmp_outline_return_value_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( tmp_outline_return_value_16 != NULL );
    goto try_return_handler_31;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_31:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
    Py_DECREF( tmp_select_metaclass_8__base );
    tmp_select_metaclass_8__base = NULL;

    goto outline_result_16;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
    Py_DECREF( tmp_select_metaclass_8__base );
    tmp_select_metaclass_8__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_16:;
    tmp_assign_source_49 = tmp_outline_return_value_16;
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_49;

    tmp_called_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_element_name_22 = const_str_plain_ProtocolError;
    tmp_args_element_name_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_args_element_name_23 );
    tmp_args_element_name_24 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_29;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_51;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    tmp_assign_source_52 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_52 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_52 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    tmp_assign_source_53 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_assign_source_53 == NULL ))
    {
        tmp_assign_source_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_assign_source_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;

        exception_lineno = 62;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_53 );
    // Tried code:
    tmp_assign_source_54 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;

        exception_lineno = 68;

        goto try_except_handler_33;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_54;

    tmp_set_locals = PyDict_New();
    locals_MaxRetryError_68 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_MaxRetryError_68, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
    tmp_res = PyDict_SetItem( locals_MaxRetryError_68, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_MaxRetryError_68, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_17 = locals_MaxRetryError_68;
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    Py_DECREF( locals_MaxRetryError_68 );
    locals_MaxRetryError_68 = NULL;
    goto outline_result_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_17:;
    tmp_assign_source_55 = tmp_outline_return_value_17;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_55;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dict_name_9 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_key_name_9 = const_str_plain___metaclass__;
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_33;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_assign_source_57 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_33;
    }
    assert( tmp_select_metaclass_9__base == NULL );
    tmp_select_metaclass_9__base = tmp_assign_source_57;

    // Tried code:
    // Tried code:
    tmp_source_name_9 = tmp_select_metaclass_9__base;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_outline_return_value_18 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
    if ( tmp_outline_return_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_36;
    }
    goto try_return_handler_35;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_17 );
    Py_XDECREF( exception_keeper_value_17 );
    Py_XDECREF( exception_keeper_tb_17 );
    tmp_type_arg_9 = tmp_select_metaclass_9__base;

    CHECK_OBJECT( tmp_type_arg_9 );
    tmp_outline_return_value_18 = BUILTIN_TYPE1( tmp_type_arg_9 );
    assert( tmp_outline_return_value_18 != NULL );
    goto try_return_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
    Py_DECREF( tmp_select_metaclass_9__base );
    tmp_select_metaclass_9__base = NULL;

    goto outline_result_18;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
    Py_DECREF( tmp_select_metaclass_9__base );
    tmp_select_metaclass_9__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_18:;
    tmp_assign_source_56 = tmp_outline_return_value_18;
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_56;

    tmp_called_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_element_name_25 = const_str_plain_MaxRetryError;
    tmp_args_element_name_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_args_element_name_26 );
    tmp_args_element_name_27 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_33;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_58;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_59 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_59 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_59 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Tried code:
    tmp_assign_source_60 = PyTuple_New( 1 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_60 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;

        exception_lineno = 86;

        goto try_except_handler_37;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_60;

    tmp_set_locals = PyDict_New();
    locals_HostChangedError_86 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_HostChangedError_86, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3cba0a880d63b7b310fd43504b18c057;
    tmp_res = PyDict_SetItem( locals_HostChangedError_86, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_2 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( tmp_defaults_2 );
    tmp_res = PyDict_SetItem( locals_HostChangedError_86, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_19 = locals_HostChangedError_86;
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_38;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    Py_DECREF( locals_HostChangedError_86 );
    locals_HostChangedError_86 = NULL;
    goto outline_result_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_19:;
    tmp_assign_source_61 = tmp_outline_return_value_19;
    assert( tmp_class_creation_10__class_dict == NULL );
    tmp_class_creation_10__class_dict = tmp_assign_source_61;

    tmp_compare_left_10 = const_str_plain___metaclass__;
    tmp_compare_right_10 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_10 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_key_name_10 = const_str_plain___metaclass__;
    tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_37;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_assign_source_63 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_37;
    }
    assert( tmp_select_metaclass_10__base == NULL );
    tmp_select_metaclass_10__base = tmp_assign_source_63;

    // Tried code:
    // Tried code:
    tmp_source_name_10 = tmp_select_metaclass_10__base;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_outline_return_value_20 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
    if ( tmp_outline_return_value_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_40;
    }
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_19 );
    Py_XDECREF( exception_keeper_value_19 );
    Py_XDECREF( exception_keeper_tb_19 );
    tmp_type_arg_10 = tmp_select_metaclass_10__base;

    CHECK_OBJECT( tmp_type_arg_10 );
    tmp_outline_return_value_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( tmp_outline_return_value_20 != NULL );
    goto try_return_handler_39;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
    Py_DECREF( tmp_select_metaclass_10__base );
    tmp_select_metaclass_10__base = NULL;

    goto outline_result_20;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
    Py_DECREF( tmp_select_metaclass_10__base );
    tmp_select_metaclass_10__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_20:;
    tmp_assign_source_62 = tmp_outline_return_value_20;
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_62;

    tmp_called_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_28 = const_str_plain_HostChangedError;
    tmp_args_element_name_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_args_element_name_29 );
    tmp_args_element_name_30 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_args_element_name_30 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_10__class == NULL );
    tmp_class_creation_10__class = tmp_assign_source_64;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_65 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HostChangedError, tmp_assign_source_65 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class );
    Py_DECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Tried code:
    tmp_assign_source_66 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 95;

        goto try_except_handler_41;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_66, 0, tmp_tuple_element_11 );
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_66;

    tmp_set_locals = PyDict_New();
    locals_TimeoutStateError_95 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_TimeoutStateError_95, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_caae7e70acce199048d0f76529b5d906;
    tmp_res = PyDict_SetItem( locals_TimeoutStateError_95, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_21 = locals_TimeoutStateError_95;
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_TimeoutStateError_95 );
    locals_TimeoutStateError_95 = NULL;
    goto outline_result_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_21:;
    tmp_assign_source_67 = tmp_outline_return_value_21;
    assert( tmp_class_creation_11__class_dict == NULL );
    tmp_class_creation_11__class_dict = tmp_assign_source_67;

    tmp_compare_left_11 = const_str_plain___metaclass__;
    tmp_compare_right_11 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_dict_name_11 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain___metaclass__;
    tmp_assign_source_68 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_41;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_assign_source_69 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_41;
    }
    assert( tmp_select_metaclass_11__base == NULL );
    tmp_select_metaclass_11__base = tmp_assign_source_69;

    // Tried code:
    // Tried code:
    tmp_source_name_11 = tmp_select_metaclass_11__base;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_outline_return_value_22 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_11 );
    if ( tmp_outline_return_value_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_44;
    }
    goto try_return_handler_43;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_21 );
    Py_XDECREF( exception_keeper_value_21 );
    Py_XDECREF( exception_keeper_tb_21 );
    tmp_type_arg_11 = tmp_select_metaclass_11__base;

    CHECK_OBJECT( tmp_type_arg_11 );
    tmp_outline_return_value_22 = BUILTIN_TYPE1( tmp_type_arg_11 );
    assert( tmp_outline_return_value_22 != NULL );
    goto try_return_handler_43;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_43:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
    Py_DECREF( tmp_select_metaclass_11__base );
    tmp_select_metaclass_11__base = NULL;

    goto outline_result_22;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
    Py_DECREF( tmp_select_metaclass_11__base );
    tmp_select_metaclass_11__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_22:;
    tmp_assign_source_68 = tmp_outline_return_value_22;
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_68;

    tmp_called_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_element_name_31 = const_str_plain_TimeoutStateError;
    tmp_args_element_name_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_args_element_name_32 );
    tmp_args_element_name_33 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_args_element_name_33 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_41;
    }
    assert( tmp_class_creation_11__class == NULL );
    tmp_class_creation_11__class = tmp_assign_source_70;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_71 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_assign_source_71 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutStateError, tmp_assign_source_71 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class );
    Py_DECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Tried code:
    tmp_assign_source_72 = PyTuple_New( 1 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_72 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 101;

        goto try_except_handler_45;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_72, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_72;

    tmp_set_locals = PyDict_New();
    locals_TimeoutError_101 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_TimeoutError_101, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
    tmp_res = PyDict_SetItem( locals_TimeoutError_101, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_23 = locals_TimeoutError_101;
    Py_INCREF( tmp_outline_return_value_23 );
    goto try_return_handler_46;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_46:;
    Py_DECREF( locals_TimeoutError_101 );
    locals_TimeoutError_101 = NULL;
    goto outline_result_23;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_23:;
    tmp_assign_source_73 = tmp_outline_return_value_23;
    assert( tmp_class_creation_12__class_dict == NULL );
    tmp_class_creation_12__class_dict = tmp_assign_source_73;

    tmp_compare_left_12 = const_str_plain___metaclass__;
    tmp_compare_right_12 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_dict_name_12 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_key_name_12 = const_str_plain___metaclass__;
    tmp_assign_source_74 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_45;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_assign_source_75 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_45;
    }
    assert( tmp_select_metaclass_12__base == NULL );
    tmp_select_metaclass_12__base = tmp_assign_source_75;

    // Tried code:
    // Tried code:
    tmp_source_name_12 = tmp_select_metaclass_12__base;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_outline_return_value_24 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_12 );
    if ( tmp_outline_return_value_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_48;
    }
    goto try_return_handler_47;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_23 );
    Py_XDECREF( exception_keeper_value_23 );
    Py_XDECREF( exception_keeper_tb_23 );
    tmp_type_arg_12 = tmp_select_metaclass_12__base;

    CHECK_OBJECT( tmp_type_arg_12 );
    tmp_outline_return_value_24 = BUILTIN_TYPE1( tmp_type_arg_12 );
    assert( tmp_outline_return_value_24 != NULL );
    goto try_return_handler_47;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_47:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
    Py_DECREF( tmp_select_metaclass_12__base );
    tmp_select_metaclass_12__base = NULL;

    goto outline_result_24;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
    Py_DECREF( tmp_select_metaclass_12__base );
    tmp_select_metaclass_12__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_24:;
    tmp_assign_source_74 = tmp_outline_return_value_24;
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_74;

    tmp_called_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_args_element_name_34 = const_str_plain_TimeoutError;
    tmp_args_element_name_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_args_element_name_35 );
    tmp_args_element_name_36 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_45;
    }
    assert( tmp_class_creation_12__class == NULL );
    tmp_class_creation_12__class = tmp_assign_source_76;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    tmp_assign_source_77 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_assign_source_77 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_77 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class );
    Py_DECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Tried code:
    tmp_assign_source_78 = PyTuple_New( 2 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_78 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;

        exception_lineno = 111;

        goto try_except_handler_49;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_78, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_78 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;

        exception_lineno = 111;

        goto try_except_handler_49;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_78, 1, tmp_tuple_element_13 );
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_78;

    tmp_set_locals = PyDict_New();
    locals_ReadTimeoutError_111 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ReadTimeoutError_111, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
    tmp_res = PyDict_SetItem( locals_ReadTimeoutError_111, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_25 = locals_ReadTimeoutError_111;
    Py_INCREF( tmp_outline_return_value_25 );
    goto try_return_handler_50;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_50:;
    Py_DECREF( locals_ReadTimeoutError_111 );
    locals_ReadTimeoutError_111 = NULL;
    goto outline_result_25;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_25:;
    tmp_assign_source_79 = tmp_outline_return_value_25;
    assert( tmp_class_creation_13__class_dict == NULL );
    tmp_class_creation_13__class_dict = tmp_assign_source_79;

    tmp_compare_left_13 = const_str_plain___metaclass__;
    tmp_compare_right_13 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_13 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_key_name_13 = const_str_plain___metaclass__;
    tmp_assign_source_80 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_49;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_assign_source_81 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_49;
    }
    assert( tmp_select_metaclass_13__base == NULL );
    tmp_select_metaclass_13__base = tmp_assign_source_81;

    // Tried code:
    // Tried code:
    tmp_source_name_13 = tmp_select_metaclass_13__base;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_outline_return_value_26 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_13 );
    if ( tmp_outline_return_value_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_52;
    }
    goto try_return_handler_51;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_25 );
    Py_XDECREF( exception_keeper_value_25 );
    Py_XDECREF( exception_keeper_tb_25 );
    tmp_type_arg_13 = tmp_select_metaclass_13__base;

    CHECK_OBJECT( tmp_type_arg_13 );
    tmp_outline_return_value_26 = BUILTIN_TYPE1( tmp_type_arg_13 );
    assert( tmp_outline_return_value_26 != NULL );
    goto try_return_handler_51;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_51:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
    Py_DECREF( tmp_select_metaclass_13__base );
    tmp_select_metaclass_13__base = NULL;

    goto outline_result_26;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
    Py_DECREF( tmp_select_metaclass_13__base );
    tmp_select_metaclass_13__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_26:;
    tmp_assign_source_80 = tmp_outline_return_value_26;
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_80;

    tmp_called_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_element_name_37 = const_str_plain_ReadTimeoutError;
    tmp_args_element_name_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_args_element_name_38 );
    tmp_args_element_name_39 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_args_element_name_39 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_13__class == NULL );
    tmp_class_creation_13__class = tmp_assign_source_82;

    goto try_end_13;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    tmp_assign_source_83 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_assign_source_83 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_83 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Tried code:
    tmp_assign_source_84 = PyTuple_New( 1 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_84 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;

        exception_lineno = 118;

        goto try_except_handler_53;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_84, 0, tmp_tuple_element_14 );
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_84;

    tmp_set_locals = PyDict_New();
    locals_ConnectTimeoutError_118 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ConnectTimeoutError_118, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_d23d849ab02a6235eb0652ac312b2323;
    tmp_res = PyDict_SetItem( locals_ConnectTimeoutError_118, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_27 = locals_ConnectTimeoutError_118;
    Py_INCREF( tmp_outline_return_value_27 );
    goto try_return_handler_54;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_54:;
    Py_DECREF( locals_ConnectTimeoutError_118 );
    locals_ConnectTimeoutError_118 = NULL;
    goto outline_result_27;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_27:;
    tmp_assign_source_85 = tmp_outline_return_value_27;
    assert( tmp_class_creation_14__class_dict == NULL );
    tmp_class_creation_14__class_dict = tmp_assign_source_85;

    tmp_compare_left_14 = const_str_plain___metaclass__;
    tmp_compare_right_14 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_dict_name_14 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain___metaclass__;
    tmp_assign_source_86 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_53;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_assign_source_87 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_53;
    }
    assert( tmp_select_metaclass_14__base == NULL );
    tmp_select_metaclass_14__base = tmp_assign_source_87;

    // Tried code:
    // Tried code:
    tmp_source_name_14 = tmp_select_metaclass_14__base;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_outline_return_value_28 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_14 );
    if ( tmp_outline_return_value_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_56;
    }
    goto try_return_handler_55;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_27 );
    Py_XDECREF( exception_keeper_value_27 );
    Py_XDECREF( exception_keeper_tb_27 );
    tmp_type_arg_14 = tmp_select_metaclass_14__base;

    CHECK_OBJECT( tmp_type_arg_14 );
    tmp_outline_return_value_28 = BUILTIN_TYPE1( tmp_type_arg_14 );
    assert( tmp_outline_return_value_28 != NULL );
    goto try_return_handler_55;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_55:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
    Py_DECREF( tmp_select_metaclass_14__base );
    tmp_select_metaclass_14__base = NULL;

    goto outline_result_28;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
    Py_DECREF( tmp_select_metaclass_14__base );
    tmp_select_metaclass_14__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_28:;
    tmp_assign_source_86 = tmp_outline_return_value_28;
    condexpr_end_14:;
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_86;

    tmp_called_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_args_element_name_40 = const_str_plain_ConnectTimeoutError;
    tmp_args_element_name_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_args_element_name_41 );
    tmp_args_element_name_42 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_args_element_name_42 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_53;
    }
    assert( tmp_class_creation_14__class == NULL );
    tmp_class_creation_14__class = tmp_assign_source_88;

    goto try_end_14;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    tmp_assign_source_89 = tmp_class_creation_14__class;

    CHECK_OBJECT( tmp_assign_source_89 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_89 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class );
    Py_DECREF( tmp_class_creation_14__class );
    tmp_class_creation_14__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_dict );
    Py_DECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Tried code:
    tmp_assign_source_90 = PyTuple_New( 2 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_90 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 123;

        goto try_except_handler_57;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_90, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_90 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;

        exception_lineno = 123;

        goto try_except_handler_57;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_90, 1, tmp_tuple_element_15 );
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_90;

    tmp_set_locals = PyDict_New();
    locals_NewConnectionError_123 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_NewConnectionError_123, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
    tmp_res = PyDict_SetItem( locals_NewConnectionError_123, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_29 = locals_NewConnectionError_123;
    Py_INCREF( tmp_outline_return_value_29 );
    goto try_return_handler_58;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_58:;
    Py_DECREF( locals_NewConnectionError_123 );
    locals_NewConnectionError_123 = NULL;
    goto outline_result_29;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_29:;
    tmp_assign_source_91 = tmp_outline_return_value_29;
    assert( tmp_class_creation_15__class_dict == NULL );
    tmp_class_creation_15__class_dict = tmp_assign_source_91;

    tmp_compare_left_15 = const_str_plain___metaclass__;
    tmp_compare_right_15 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_15 == -1) );
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_dict_name_15 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_key_name_15 = const_str_plain___metaclass__;
    tmp_assign_source_92 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto try_except_handler_57;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_assign_source_93 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto try_except_handler_57;
    }
    assert( tmp_select_metaclass_15__base == NULL );
    tmp_select_metaclass_15__base = tmp_assign_source_93;

    // Tried code:
    // Tried code:
    tmp_source_name_15 = tmp_select_metaclass_15__base;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_outline_return_value_30 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_15 );
    if ( tmp_outline_return_value_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto try_except_handler_60;
    }
    goto try_return_handler_59;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_29 );
    Py_XDECREF( exception_keeper_value_29 );
    Py_XDECREF( exception_keeper_tb_29 );
    tmp_type_arg_15 = tmp_select_metaclass_15__base;

    CHECK_OBJECT( tmp_type_arg_15 );
    tmp_outline_return_value_30 = BUILTIN_TYPE1( tmp_type_arg_15 );
    assert( tmp_outline_return_value_30 != NULL );
    goto try_return_handler_59;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_59:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
    Py_DECREF( tmp_select_metaclass_15__base );
    tmp_select_metaclass_15__base = NULL;

    goto outline_result_30;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
    Py_DECREF( tmp_select_metaclass_15__base );
    tmp_select_metaclass_15__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_30:;
    tmp_assign_source_92 = tmp_outline_return_value_30;
    condexpr_end_15:;
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_92;

    tmp_called_name_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_15 );
    tmp_args_element_name_43 = const_str_plain_NewConnectionError;
    tmp_args_element_name_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_args_element_name_44 );
    tmp_args_element_name_45 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_args_element_name_45 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
        tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto try_except_handler_57;
    }
    assert( tmp_class_creation_15__class == NULL );
    tmp_class_creation_15__class = tmp_assign_source_94;

    goto try_end_15;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    tmp_assign_source_95 = tmp_class_creation_15__class;

    CHECK_OBJECT( tmp_assign_source_95 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_95 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class );
    Py_DECREF( tmp_class_creation_15__class );
    tmp_class_creation_15__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_dict );
    Py_DECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Tried code:
    tmp_assign_source_96 = PyTuple_New( 1 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_96 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;

        exception_lineno = 128;

        goto try_except_handler_61;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_assign_source_96, 0, tmp_tuple_element_16 );
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_96;

    tmp_set_locals = PyDict_New();
    locals_EmptyPoolError_128 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_EmptyPoolError_128, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_1b17e5345caa893d267645d5296f52b9;
    tmp_res = PyDict_SetItem( locals_EmptyPoolError_128, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_31 = locals_EmptyPoolError_128;
    Py_INCREF( tmp_outline_return_value_31 );
    goto try_return_handler_62;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_62:;
    Py_DECREF( locals_EmptyPoolError_128 );
    locals_EmptyPoolError_128 = NULL;
    goto outline_result_31;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_31:;
    tmp_assign_source_97 = tmp_outline_return_value_31;
    assert( tmp_class_creation_16__class_dict == NULL );
    tmp_class_creation_16__class_dict = tmp_assign_source_97;

    tmp_compare_left_16 = const_str_plain___metaclass__;
    tmp_compare_right_16 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_16 == -1) );
    if ( tmp_cmp_In_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_16 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_key_name_16 = const_str_plain___metaclass__;
    tmp_assign_source_98 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_61;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_assign_source_99 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_61;
    }
    assert( tmp_select_metaclass_16__base == NULL );
    tmp_select_metaclass_16__base = tmp_assign_source_99;

    // Tried code:
    // Tried code:
    tmp_source_name_16 = tmp_select_metaclass_16__base;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_outline_return_value_32 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_16 );
    if ( tmp_outline_return_value_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_64;
    }
    goto try_return_handler_63;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_31 );
    Py_XDECREF( exception_keeper_value_31 );
    Py_XDECREF( exception_keeper_tb_31 );
    tmp_type_arg_16 = tmp_select_metaclass_16__base;

    CHECK_OBJECT( tmp_type_arg_16 );
    tmp_outline_return_value_32 = BUILTIN_TYPE1( tmp_type_arg_16 );
    assert( tmp_outline_return_value_32 != NULL );
    goto try_return_handler_63;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_63:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
    Py_DECREF( tmp_select_metaclass_16__base );
    tmp_select_metaclass_16__base = NULL;

    goto outline_result_32;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
    Py_DECREF( tmp_select_metaclass_16__base );
    tmp_select_metaclass_16__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_32:;
    tmp_assign_source_98 = tmp_outline_return_value_32;
    condexpr_end_16:;
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_98;

    tmp_called_name_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_element_name_46 = const_str_plain_EmptyPoolError;
    tmp_args_element_name_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_args_element_name_47 );
    tmp_args_element_name_48 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_args_element_name_48 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_16__class == NULL );
    tmp_class_creation_16__class = tmp_assign_source_100;

    goto try_end_16;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    tmp_assign_source_101 = tmp_class_creation_16__class;

    CHECK_OBJECT( tmp_assign_source_101 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_EmptyPoolError, tmp_assign_source_101 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class );
    Py_DECREF( tmp_class_creation_16__class );
    tmp_class_creation_16__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_dict );
    Py_DECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Tried code:
    tmp_assign_source_102 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_102 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;

        exception_lineno = 133;

        goto try_except_handler_65;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_102, 0, tmp_tuple_element_17 );
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_102;

    tmp_set_locals = PyDict_New();
    locals_ClosedPoolError_133 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ClosedPoolError_133, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_5ac3ff452137ae9d952f65688385427b;
    tmp_res = PyDict_SetItem( locals_ClosedPoolError_133, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_33 = locals_ClosedPoolError_133;
    Py_INCREF( tmp_outline_return_value_33 );
    goto try_return_handler_66;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_66:;
    Py_DECREF( locals_ClosedPoolError_133 );
    locals_ClosedPoolError_133 = NULL;
    goto outline_result_33;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_33:;
    tmp_assign_source_103 = tmp_outline_return_value_33;
    assert( tmp_class_creation_17__class_dict == NULL );
    tmp_class_creation_17__class_dict = tmp_assign_source_103;

    tmp_compare_left_17 = const_str_plain___metaclass__;
    tmp_compare_right_17 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_17 == -1) );
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dict_name_17 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain___metaclass__;
    tmp_assign_source_104 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_65;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_assign_source_105 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_65;
    }
    assert( tmp_select_metaclass_17__base == NULL );
    tmp_select_metaclass_17__base = tmp_assign_source_105;

    // Tried code:
    // Tried code:
    tmp_source_name_17 = tmp_select_metaclass_17__base;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_outline_return_value_34 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
    if ( tmp_outline_return_value_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_68;
    }
    goto try_return_handler_67;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_33 );
    Py_XDECREF( exception_keeper_value_33 );
    Py_XDECREF( exception_keeper_tb_33 );
    tmp_type_arg_17 = tmp_select_metaclass_17__base;

    CHECK_OBJECT( tmp_type_arg_17 );
    tmp_outline_return_value_34 = BUILTIN_TYPE1( tmp_type_arg_17 );
    assert( tmp_outline_return_value_34 != NULL );
    goto try_return_handler_67;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_67:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
    Py_DECREF( tmp_select_metaclass_17__base );
    tmp_select_metaclass_17__base = NULL;

    goto outline_result_34;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
    Py_DECREF( tmp_select_metaclass_17__base );
    tmp_select_metaclass_17__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_34:;
    tmp_assign_source_104 = tmp_outline_return_value_34;
    condexpr_end_17:;
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_104;

    tmp_called_name_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_17 );
    tmp_args_element_name_49 = const_str_plain_ClosedPoolError;
    tmp_args_element_name_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_args_element_name_50 );
    tmp_args_element_name_51 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_args_element_name_51 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
        tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_65;
    }
    assert( tmp_class_creation_17__class == NULL );
    tmp_class_creation_17__class = tmp_assign_source_106;

    goto try_end_17;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    tmp_assign_source_107 = tmp_class_creation_17__class;

    CHECK_OBJECT( tmp_assign_source_107 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_107 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class );
    Py_DECREF( tmp_class_creation_17__class );
    tmp_class_creation_17__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_dict );
    Py_DECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Tried code:
    tmp_assign_source_108 = PyTuple_New( 2 );
    tmp_tuple_element_18 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_108, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_108 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 138;

        goto try_except_handler_69;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_108, 1, tmp_tuple_element_18 );
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_108;

    tmp_set_locals = PyDict_New();
    locals_LocationValueError_138 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_LocationValueError_138, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
    tmp_res = PyDict_SetItem( locals_LocationValueError_138, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_35 = locals_LocationValueError_138;
    Py_INCREF( tmp_outline_return_value_35 );
    goto try_return_handler_70;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_70:;
    Py_DECREF( locals_LocationValueError_138 );
    locals_LocationValueError_138 = NULL;
    goto outline_result_35;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_35:;
    tmp_assign_source_109 = tmp_outline_return_value_35;
    assert( tmp_class_creation_18__class_dict == NULL );
    tmp_class_creation_18__class_dict = tmp_assign_source_109;

    tmp_compare_left_18 = const_str_plain___metaclass__;
    tmp_compare_right_18 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_18 == -1) );
    if ( tmp_cmp_In_18 == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_dict_name_18 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_key_name_18 = const_str_plain___metaclass__;
    tmp_assign_source_110 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto try_except_handler_69;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_assign_source_111 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto try_except_handler_69;
    }
    assert( tmp_select_metaclass_18__base == NULL );
    tmp_select_metaclass_18__base = tmp_assign_source_111;

    // Tried code:
    // Tried code:
    tmp_source_name_18 = tmp_select_metaclass_18__base;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_outline_return_value_36 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_18 );
    if ( tmp_outline_return_value_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto try_except_handler_72;
    }
    goto try_return_handler_71;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_35 );
    Py_XDECREF( exception_keeper_value_35 );
    Py_XDECREF( exception_keeper_tb_35 );
    tmp_type_arg_18 = tmp_select_metaclass_18__base;

    CHECK_OBJECT( tmp_type_arg_18 );
    tmp_outline_return_value_36 = BUILTIN_TYPE1( tmp_type_arg_18 );
    assert( tmp_outline_return_value_36 != NULL );
    goto try_return_handler_71;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_71:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
    Py_DECREF( tmp_select_metaclass_18__base );
    tmp_select_metaclass_18__base = NULL;

    goto outline_result_36;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
    Py_DECREF( tmp_select_metaclass_18__base );
    tmp_select_metaclass_18__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_36:;
    tmp_assign_source_110 = tmp_outline_return_value_36;
    condexpr_end_18:;
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_110;

    tmp_called_name_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_args_element_name_52 = const_str_plain_LocationValueError;
    tmp_args_element_name_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_args_element_name_53 );
    tmp_args_element_name_54 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_args_element_name_54 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54 };
        tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
    }

    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto try_except_handler_69;
    }
    assert( tmp_class_creation_18__class == NULL );
    tmp_class_creation_18__class = tmp_assign_source_112;

    goto try_end_18;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    tmp_assign_source_113 = tmp_class_creation_18__class;

    CHECK_OBJECT( tmp_assign_source_113 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_113 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class );
    Py_DECREF( tmp_class_creation_18__class );
    tmp_class_creation_18__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_dict );
    Py_DECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Tried code:
    tmp_assign_source_114 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_114 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "LocationValueError" );
        exception_tb = NULL;

        exception_lineno = 143;

        goto try_except_handler_73;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_114, 0, tmp_tuple_element_19 );
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_114;

    tmp_set_locals = PyDict_New();
    locals_LocationParseError_143 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_LocationParseError_143, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
    tmp_res = PyDict_SetItem( locals_LocationParseError_143, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );
    tmp_res = PyDict_SetItem( locals_LocationParseError_143, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_37 = locals_LocationParseError_143;
    Py_INCREF( tmp_outline_return_value_37 );
    goto try_return_handler_74;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_74:;
    Py_DECREF( locals_LocationParseError_143 );
    locals_LocationParseError_143 = NULL;
    goto outline_result_37;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_37:;
    tmp_assign_source_115 = tmp_outline_return_value_37;
    assert( tmp_class_creation_19__class_dict == NULL );
    tmp_class_creation_19__class_dict = tmp_assign_source_115;

    tmp_compare_left_19 = const_str_plain___metaclass__;
    tmp_compare_right_19 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_In_19 == -1) );
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_19 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_key_name_19 = const_str_plain___metaclass__;
    tmp_assign_source_116 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_73;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_assign_source_117 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_73;
    }
    assert( tmp_select_metaclass_19__base == NULL );
    tmp_select_metaclass_19__base = tmp_assign_source_117;

    // Tried code:
    // Tried code:
    tmp_source_name_19 = tmp_select_metaclass_19__base;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_outline_return_value_38 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_19 );
    if ( tmp_outline_return_value_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_76;
    }
    goto try_return_handler_75;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_37 );
    Py_XDECREF( exception_keeper_value_37 );
    Py_XDECREF( exception_keeper_tb_37 );
    tmp_type_arg_19 = tmp_select_metaclass_19__base;

    CHECK_OBJECT( tmp_type_arg_19 );
    tmp_outline_return_value_38 = BUILTIN_TYPE1( tmp_type_arg_19 );
    assert( tmp_outline_return_value_38 != NULL );
    goto try_return_handler_75;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_75:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
    Py_DECREF( tmp_select_metaclass_19__base );
    tmp_select_metaclass_19__base = NULL;

    goto outline_result_38;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
    Py_DECREF( tmp_select_metaclass_19__base );
    tmp_select_metaclass_19__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_38:;
    tmp_assign_source_116 = tmp_outline_return_value_38;
    condexpr_end_19:;
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_116;

    tmp_called_name_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_19 );
    tmp_args_element_name_55 = const_str_plain_LocationParseError;
    tmp_args_element_name_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_args_element_name_56 );
    tmp_args_element_name_57 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_args_element_name_57 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57 };
        tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
    }

    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_73;
    }
    assert( tmp_class_creation_19__class == NULL );
    tmp_class_creation_19__class = tmp_assign_source_118;

    goto try_end_19;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    tmp_assign_source_119 = tmp_class_creation_19__class;

    CHECK_OBJECT( tmp_assign_source_119 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationParseError, tmp_assign_source_119 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class );
    Py_DECREF( tmp_class_creation_19__class );
    tmp_class_creation_19__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_dict );
    Py_DECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Tried code:
    tmp_assign_source_120 = PyTuple_New( 1 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_120 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 153;

        goto try_except_handler_77;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_assign_source_120, 0, tmp_tuple_element_20 );
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_120;

    tmp_set_locals = PyDict_New();
    locals_ResponseError_153 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ResponseError_153, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
    tmp_res = PyDict_SetItem( locals_ResponseError_153, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
    tmp_res = PyDict_SetItem( locals_ResponseError_153, const_str_plain_GENERIC_ERROR, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
    tmp_res = PyDict_SetItem( locals_ResponseError_153, const_str_plain_SPECIFIC_ERROR, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_39 = locals_ResponseError_153;
    Py_INCREF( tmp_outline_return_value_39 );
    goto try_return_handler_78;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_78:;
    Py_DECREF( locals_ResponseError_153 );
    locals_ResponseError_153 = NULL;
    goto outline_result_39;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_39:;
    tmp_assign_source_121 = tmp_outline_return_value_39;
    assert( tmp_class_creation_20__class_dict == NULL );
    tmp_class_creation_20__class_dict = tmp_assign_source_121;

    tmp_compare_left_20 = const_str_plain___metaclass__;
    tmp_compare_right_20 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    assert( !(tmp_cmp_In_20 == -1) );
    if ( tmp_cmp_In_20 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_dict_name_20 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain___metaclass__;
    tmp_assign_source_122 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;

        goto try_except_handler_77;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_assign_source_123 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;

        goto try_except_handler_77;
    }
    assert( tmp_select_metaclass_20__base == NULL );
    tmp_select_metaclass_20__base = tmp_assign_source_123;

    // Tried code:
    // Tried code:
    tmp_source_name_20 = tmp_select_metaclass_20__base;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_outline_return_value_40 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_20 );
    if ( tmp_outline_return_value_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;

        goto try_except_handler_80;
    }
    goto try_return_handler_79;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_39 );
    Py_XDECREF( exception_keeper_value_39 );
    Py_XDECREF( exception_keeper_tb_39 );
    tmp_type_arg_20 = tmp_select_metaclass_20__base;

    CHECK_OBJECT( tmp_type_arg_20 );
    tmp_outline_return_value_40 = BUILTIN_TYPE1( tmp_type_arg_20 );
    assert( tmp_outline_return_value_40 != NULL );
    goto try_return_handler_79;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_79:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
    Py_DECREF( tmp_select_metaclass_20__base );
    tmp_select_metaclass_20__base = NULL;

    goto outline_result_40;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
    Py_DECREF( tmp_select_metaclass_20__base );
    tmp_select_metaclass_20__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_40:;
    tmp_assign_source_122 = tmp_outline_return_value_40;
    condexpr_end_20:;
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_122;

    tmp_called_name_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_element_name_58 = const_str_plain_ResponseError;
    tmp_args_element_name_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_args_element_name_59 );
    tmp_args_element_name_60 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_args_element_name_60 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
        tmp_assign_source_124 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;

        goto try_except_handler_77;
    }
    assert( tmp_class_creation_20__class == NULL );
    tmp_class_creation_20__class = tmp_assign_source_124;

    goto try_end_20;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    tmp_assign_source_125 = tmp_class_creation_20__class;

    CHECK_OBJECT( tmp_assign_source_125 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_125 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class );
    Py_DECREF( tmp_class_creation_20__class );
    tmp_class_creation_20__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_dict );
    Py_DECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Tried code:
    tmp_assign_source_126 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_126 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;

        exception_lineno = 159;

        goto try_except_handler_81;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_126, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_21__bases == NULL );
    tmp_class_creation_21__bases = tmp_assign_source_126;

    tmp_set_locals = PyDict_New();
    locals_SecurityWarning_159 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_SecurityWarning_159, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
    tmp_res = PyDict_SetItem( locals_SecurityWarning_159, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_41 = locals_SecurityWarning_159;
    Py_INCREF( tmp_outline_return_value_41 );
    goto try_return_handler_82;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_82:;
    Py_DECREF( locals_SecurityWarning_159 );
    locals_SecurityWarning_159 = NULL;
    goto outline_result_41;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_41:;
    tmp_assign_source_127 = tmp_outline_return_value_41;
    assert( tmp_class_creation_21__class_dict == NULL );
    tmp_class_creation_21__class_dict = tmp_assign_source_127;

    tmp_compare_left_21 = const_str_plain___metaclass__;
    tmp_compare_right_21 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_In_21 == -1) );
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_dict_name_21 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_key_name_21 = const_str_plain___metaclass__;
    tmp_assign_source_128 = DICT_GET_ITEM( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto try_except_handler_81;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_subscribed_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_subscribed_name_21 );
    tmp_subscript_name_21 = const_int_0;
    tmp_assign_source_129 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto try_except_handler_81;
    }
    assert( tmp_select_metaclass_21__base == NULL );
    tmp_select_metaclass_21__base = tmp_assign_source_129;

    // Tried code:
    // Tried code:
    tmp_source_name_21 = tmp_select_metaclass_21__base;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_outline_return_value_42 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_21 );
    if ( tmp_outline_return_value_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto try_except_handler_84;
    }
    goto try_return_handler_83;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_84:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_41 );
    Py_XDECREF( exception_keeper_value_41 );
    Py_XDECREF( exception_keeper_tb_41 );
    tmp_type_arg_21 = tmp_select_metaclass_21__base;

    CHECK_OBJECT( tmp_type_arg_21 );
    tmp_outline_return_value_42 = BUILTIN_TYPE1( tmp_type_arg_21 );
    assert( tmp_outline_return_value_42 != NULL );
    goto try_return_handler_83;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_83:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
    Py_DECREF( tmp_select_metaclass_21__base );
    tmp_select_metaclass_21__base = NULL;

    goto outline_result_42;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
    Py_DECREF( tmp_select_metaclass_21__base );
    tmp_select_metaclass_21__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_42:;
    tmp_assign_source_128 = tmp_outline_return_value_42;
    condexpr_end_21:;
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_128;

    tmp_called_name_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_21 );
    tmp_args_element_name_61 = const_str_plain_SecurityWarning;
    tmp_args_element_name_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_args_element_name_62 );
    tmp_args_element_name_63 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_args_element_name_63 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
        tmp_assign_source_130 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto try_except_handler_81;
    }
    assert( tmp_class_creation_21__class == NULL );
    tmp_class_creation_21__class = tmp_assign_source_130;

    goto try_end_21;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    tmp_assign_source_131 = tmp_class_creation_21__class;

    CHECK_OBJECT( tmp_assign_source_131 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning, tmp_assign_source_131 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class );
    Py_DECREF( tmp_class_creation_21__class );
    tmp_class_creation_21__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_dict );
    Py_DECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Tried code:
    tmp_assign_source_132 = PyTuple_New( 1 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_132 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;

        exception_lineno = 164;

        goto try_except_handler_85;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_assign_source_132, 0, tmp_tuple_element_22 );
    assert( tmp_class_creation_22__bases == NULL );
    tmp_class_creation_22__bases = tmp_assign_source_132;

    tmp_set_locals = PyDict_New();
    locals_SubjectAltNameWarning_164 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_SubjectAltNameWarning_164, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_d3e96f948eaa41c53caaae3833d57481;
    tmp_res = PyDict_SetItem( locals_SubjectAltNameWarning_164, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_43 = locals_SubjectAltNameWarning_164;
    Py_INCREF( tmp_outline_return_value_43 );
    goto try_return_handler_86;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_86:;
    Py_DECREF( locals_SubjectAltNameWarning_164 );
    locals_SubjectAltNameWarning_164 = NULL;
    goto outline_result_43;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_43:;
    tmp_assign_source_133 = tmp_outline_return_value_43;
    assert( tmp_class_creation_22__class_dict == NULL );
    tmp_class_creation_22__class_dict = tmp_assign_source_133;

    tmp_compare_left_22 = const_str_plain___metaclass__;
    tmp_compare_right_22 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    assert( !(tmp_cmp_In_22 == -1) );
    if ( tmp_cmp_In_22 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_22 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_key_name_22 = const_str_plain___metaclass__;
    tmp_assign_source_134 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto try_except_handler_85;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_subscribed_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_subscribed_name_22 );
    tmp_subscript_name_22 = const_int_0;
    tmp_assign_source_135 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto try_except_handler_85;
    }
    assert( tmp_select_metaclass_22__base == NULL );
    tmp_select_metaclass_22__base = tmp_assign_source_135;

    // Tried code:
    // Tried code:
    tmp_source_name_22 = tmp_select_metaclass_22__base;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_outline_return_value_44 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_22 );
    if ( tmp_outline_return_value_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto try_except_handler_88;
    }
    goto try_return_handler_87;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_88:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_43 );
    Py_XDECREF( exception_keeper_value_43 );
    Py_XDECREF( exception_keeper_tb_43 );
    tmp_type_arg_22 = tmp_select_metaclass_22__base;

    CHECK_OBJECT( tmp_type_arg_22 );
    tmp_outline_return_value_44 = BUILTIN_TYPE1( tmp_type_arg_22 );
    assert( tmp_outline_return_value_44 != NULL );
    goto try_return_handler_87;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_87:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
    Py_DECREF( tmp_select_metaclass_22__base );
    tmp_select_metaclass_22__base = NULL;

    goto outline_result_44;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
    Py_DECREF( tmp_select_metaclass_22__base );
    tmp_select_metaclass_22__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_44:;
    tmp_assign_source_134 = tmp_outline_return_value_44;
    condexpr_end_22:;
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_134;

    tmp_called_name_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_args_element_name_64 = const_str_plain_SubjectAltNameWarning;
    tmp_args_element_name_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_args_element_name_65 );
    tmp_args_element_name_66 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_args_element_name_66 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
        tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto try_except_handler_85;
    }
    assert( tmp_class_creation_22__class == NULL );
    tmp_class_creation_22__class = tmp_assign_source_136;

    goto try_end_22;
    // Exception handler code:
    try_except_handler_85:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    tmp_assign_source_137 = tmp_class_creation_22__class;

    CHECK_OBJECT( tmp_assign_source_137 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_137 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class );
    Py_DECREF( tmp_class_creation_22__class );
    tmp_class_creation_22__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_dict );
    Py_DECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Tried code:
    tmp_assign_source_138 = PyTuple_New( 1 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_138 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;

        exception_lineno = 169;

        goto try_except_handler_89;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_138, 0, tmp_tuple_element_23 );
    assert( tmp_class_creation_23__bases == NULL );
    tmp_class_creation_23__bases = tmp_assign_source_138;

    tmp_set_locals = PyDict_New();
    locals_InsecureRequestWarning_169 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_InsecureRequestWarning_169, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3ecac7959fca6b094793e5853872d936;
    tmp_res = PyDict_SetItem( locals_InsecureRequestWarning_169, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_45 = locals_InsecureRequestWarning_169;
    Py_INCREF( tmp_outline_return_value_45 );
    goto try_return_handler_90;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_90:;
    Py_DECREF( locals_InsecureRequestWarning_169 );
    locals_InsecureRequestWarning_169 = NULL;
    goto outline_result_45;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_45:;
    tmp_assign_source_139 = tmp_outline_return_value_45;
    assert( tmp_class_creation_23__class_dict == NULL );
    tmp_class_creation_23__class_dict = tmp_assign_source_139;

    tmp_compare_left_23 = const_str_plain___metaclass__;
    tmp_compare_right_23 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    assert( !(tmp_cmp_In_23 == -1) );
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_dict_name_23 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain___metaclass__;
    tmp_assign_source_140 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_89;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_subscribed_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_subscribed_name_23 );
    tmp_subscript_name_23 = const_int_0;
    tmp_assign_source_141 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_89;
    }
    assert( tmp_select_metaclass_23__base == NULL );
    tmp_select_metaclass_23__base = tmp_assign_source_141;

    // Tried code:
    // Tried code:
    tmp_source_name_23 = tmp_select_metaclass_23__base;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_outline_return_value_46 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_23 );
    if ( tmp_outline_return_value_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_92;
    }
    goto try_return_handler_91;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_92:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_45 );
    Py_XDECREF( exception_keeper_value_45 );
    Py_XDECREF( exception_keeper_tb_45 );
    tmp_type_arg_23 = tmp_select_metaclass_23__base;

    CHECK_OBJECT( tmp_type_arg_23 );
    tmp_outline_return_value_46 = BUILTIN_TYPE1( tmp_type_arg_23 );
    assert( tmp_outline_return_value_46 != NULL );
    goto try_return_handler_91;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_91:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
    Py_DECREF( tmp_select_metaclass_23__base );
    tmp_select_metaclass_23__base = NULL;

    goto outline_result_46;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
    Py_DECREF( tmp_select_metaclass_23__base );
    tmp_select_metaclass_23__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_46:;
    tmp_assign_source_140 = tmp_outline_return_value_46;
    condexpr_end_23:;
    assert( tmp_class_creation_23__metaclass == NULL );
    tmp_class_creation_23__metaclass = tmp_assign_source_140;

    tmp_called_name_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_called_name_23 );
    tmp_args_element_name_67 = const_str_plain_InsecureRequestWarning;
    tmp_args_element_name_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_args_element_name_68 );
    tmp_args_element_name_69 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_args_element_name_69 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
        tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
    }

    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_89;
    }
    assert( tmp_class_creation_23__class == NULL );
    tmp_class_creation_23__class = tmp_assign_source_142;

    goto try_end_23;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    tmp_assign_source_143 = tmp_class_creation_23__class;

    CHECK_OBJECT( tmp_assign_source_143 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning, tmp_assign_source_143 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class );
    Py_DECREF( tmp_class_creation_23__class );
    tmp_class_creation_23__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_dict );
    Py_DECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Tried code:
    tmp_assign_source_144 = PyTuple_New( 1 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_144 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;

        exception_lineno = 174;

        goto try_except_handler_93;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_144, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_24__bases == NULL );
    tmp_class_creation_24__bases = tmp_assign_source_144;

    tmp_set_locals = PyDict_New();
    locals_SystemTimeWarning_174 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_SystemTimeWarning_174, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_d455563e1ef951148bac32f5cc949a27;
    tmp_res = PyDict_SetItem( locals_SystemTimeWarning_174, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_47 = locals_SystemTimeWarning_174;
    Py_INCREF( tmp_outline_return_value_47 );
    goto try_return_handler_94;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_94:;
    Py_DECREF( locals_SystemTimeWarning_174 );
    locals_SystemTimeWarning_174 = NULL;
    goto outline_result_47;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_47:;
    tmp_assign_source_145 = tmp_outline_return_value_47;
    assert( tmp_class_creation_24__class_dict == NULL );
    tmp_class_creation_24__class_dict = tmp_assign_source_145;

    tmp_compare_left_24 = const_str_plain___metaclass__;
    tmp_compare_right_24 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_compare_right_24 );
    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    assert( !(tmp_cmp_In_24 == -1) );
    if ( tmp_cmp_In_24 == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_dict_name_24 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_key_name_24 = const_str_plain___metaclass__;
    tmp_assign_source_146 = DICT_GET_ITEM( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_assign_source_146 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto try_except_handler_93;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_subscribed_name_24 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_subscribed_name_24 );
    tmp_subscript_name_24 = const_int_0;
    tmp_assign_source_147 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto try_except_handler_93;
    }
    assert( tmp_select_metaclass_24__base == NULL );
    tmp_select_metaclass_24__base = tmp_assign_source_147;

    // Tried code:
    // Tried code:
    tmp_source_name_24 = tmp_select_metaclass_24__base;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_outline_return_value_48 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_24 );
    if ( tmp_outline_return_value_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto try_except_handler_96;
    }
    goto try_return_handler_95;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_96:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_47 );
    Py_XDECREF( exception_keeper_value_47 );
    Py_XDECREF( exception_keeper_tb_47 );
    tmp_type_arg_24 = tmp_select_metaclass_24__base;

    CHECK_OBJECT( tmp_type_arg_24 );
    tmp_outline_return_value_48 = BUILTIN_TYPE1( tmp_type_arg_24 );
    assert( tmp_outline_return_value_48 != NULL );
    goto try_return_handler_95;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_95:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_24__base );
    Py_DECREF( tmp_select_metaclass_24__base );
    tmp_select_metaclass_24__base = NULL;

    goto outline_result_48;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_24__base );
    Py_DECREF( tmp_select_metaclass_24__base );
    tmp_select_metaclass_24__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_48:;
    tmp_assign_source_146 = tmp_outline_return_value_48;
    condexpr_end_24:;
    assert( tmp_class_creation_24__metaclass == NULL );
    tmp_class_creation_24__metaclass = tmp_assign_source_146;

    tmp_called_name_24 = tmp_class_creation_24__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_args_element_name_70 = const_str_plain_SystemTimeWarning;
    tmp_args_element_name_71 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_args_element_name_71 );
    tmp_args_element_name_72 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_args_element_name_72 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_72 };
        tmp_assign_source_148 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, call_args );
    }

    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto try_except_handler_93;
    }
    assert( tmp_class_creation_24__class == NULL );
    tmp_class_creation_24__class = tmp_assign_source_148;

    goto try_end_24;
    // Exception handler code:
    try_except_handler_93:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    Py_XDECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    tmp_assign_source_149 = tmp_class_creation_24__class;

    CHECK_OBJECT( tmp_assign_source_149 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_149 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class );
    Py_DECREF( tmp_class_creation_24__class );
    tmp_class_creation_24__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__bases );
    Py_DECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class_dict );
    Py_DECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__metaclass );
    Py_DECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    // Tried code:
    tmp_assign_source_150 = PyTuple_New( 1 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_150 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;

        exception_lineno = 179;

        goto try_except_handler_97;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_150, 0, tmp_tuple_element_25 );
    assert( tmp_class_creation_25__bases == NULL );
    tmp_class_creation_25__bases = tmp_assign_source_150;

    tmp_set_locals = PyDict_New();
    locals_InsecurePlatformWarning_179 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_InsecurePlatformWarning_179, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_85322d4279b2ac8026a5921e77f32165;
    tmp_res = PyDict_SetItem( locals_InsecurePlatformWarning_179, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_49 = locals_InsecurePlatformWarning_179;
    Py_INCREF( tmp_outline_return_value_49 );
    goto try_return_handler_98;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_98:;
    Py_DECREF( locals_InsecurePlatformWarning_179 );
    locals_InsecurePlatformWarning_179 = NULL;
    goto outline_result_49;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_49:;
    tmp_assign_source_151 = tmp_outline_return_value_49;
    assert( tmp_class_creation_25__class_dict == NULL );
    tmp_class_creation_25__class_dict = tmp_assign_source_151;

    tmp_compare_left_25 = const_str_plain___metaclass__;
    tmp_compare_right_25 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_compare_right_25 );
    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    assert( !(tmp_cmp_In_25 == -1) );
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_25 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_key_name_25 = const_str_plain___metaclass__;
    tmp_assign_source_152 = DICT_GET_ITEM( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto try_except_handler_97;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_subscribed_name_25 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_subscribed_name_25 );
    tmp_subscript_name_25 = const_int_0;
    tmp_assign_source_153 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto try_except_handler_97;
    }
    assert( tmp_select_metaclass_25__base == NULL );
    tmp_select_metaclass_25__base = tmp_assign_source_153;

    // Tried code:
    // Tried code:
    tmp_source_name_25 = tmp_select_metaclass_25__base;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_outline_return_value_50 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_25 );
    if ( tmp_outline_return_value_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto try_except_handler_100;
    }
    goto try_return_handler_99;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_100:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_49 );
    Py_XDECREF( exception_keeper_value_49 );
    Py_XDECREF( exception_keeper_tb_49 );
    tmp_type_arg_25 = tmp_select_metaclass_25__base;

    CHECK_OBJECT( tmp_type_arg_25 );
    tmp_outline_return_value_50 = BUILTIN_TYPE1( tmp_type_arg_25 );
    assert( tmp_outline_return_value_50 != NULL );
    goto try_return_handler_99;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_99:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_25__base );
    Py_DECREF( tmp_select_metaclass_25__base );
    tmp_select_metaclass_25__base = NULL;

    goto outline_result_50;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_25__base );
    Py_DECREF( tmp_select_metaclass_25__base );
    tmp_select_metaclass_25__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_50:;
    tmp_assign_source_152 = tmp_outline_return_value_50;
    condexpr_end_25:;
    assert( tmp_class_creation_25__metaclass == NULL );
    tmp_class_creation_25__metaclass = tmp_assign_source_152;

    tmp_called_name_25 = tmp_class_creation_25__metaclass;

    CHECK_OBJECT( tmp_called_name_25 );
    tmp_args_element_name_73 = const_str_plain_InsecurePlatformWarning;
    tmp_args_element_name_74 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_args_element_name_74 );
    tmp_args_element_name_75 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_args_element_name_75 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75 };
        tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, call_args );
    }

    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto try_except_handler_97;
    }
    assert( tmp_class_creation_25__class == NULL );
    tmp_class_creation_25__class = tmp_assign_source_154;

    goto try_end_25;
    // Exception handler code:
    try_except_handler_97:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    Py_XDECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    tmp_assign_source_155 = tmp_class_creation_25__class;

    CHECK_OBJECT( tmp_assign_source_155 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_155 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class );
    Py_DECREF( tmp_class_creation_25__class );
    tmp_class_creation_25__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__bases );
    Py_DECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class_dict );
    Py_DECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__metaclass );
    Py_DECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    // Tried code:
    tmp_assign_source_156 = PyTuple_New( 1 );
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_156 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto try_except_handler_101;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_assign_source_156, 0, tmp_tuple_element_26 );
    assert( tmp_class_creation_26__bases == NULL );
    tmp_class_creation_26__bases = tmp_assign_source_156;

    tmp_set_locals = PyDict_New();
    locals_SNIMissingWarning_184 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_SNIMissingWarning_184, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_0beacf6afb33b121e9545510332129fc;
    tmp_res = PyDict_SetItem( locals_SNIMissingWarning_184, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_51 = locals_SNIMissingWarning_184;
    Py_INCREF( tmp_outline_return_value_51 );
    goto try_return_handler_102;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_102:;
    Py_DECREF( locals_SNIMissingWarning_184 );
    locals_SNIMissingWarning_184 = NULL;
    goto outline_result_51;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_51:;
    tmp_assign_source_157 = tmp_outline_return_value_51;
    assert( tmp_class_creation_26__class_dict == NULL );
    tmp_class_creation_26__class_dict = tmp_assign_source_157;

    tmp_compare_left_26 = const_str_plain___metaclass__;
    tmp_compare_right_26 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_compare_right_26 );
    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    assert( !(tmp_cmp_In_26 == -1) );
    if ( tmp_cmp_In_26 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_dict_name_26 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain___metaclass__;
    tmp_assign_source_158 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_assign_source_158 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_101;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_subscribed_name_26 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_subscribed_name_26 );
    tmp_subscript_name_26 = const_int_0;
    tmp_assign_source_159 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_101;
    }
    assert( tmp_select_metaclass_26__base == NULL );
    tmp_select_metaclass_26__base = tmp_assign_source_159;

    // Tried code:
    // Tried code:
    tmp_source_name_26 = tmp_select_metaclass_26__base;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_outline_return_value_52 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_26 );
    if ( tmp_outline_return_value_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_104;
    }
    goto try_return_handler_103;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_104:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_51 );
    Py_XDECREF( exception_keeper_value_51 );
    Py_XDECREF( exception_keeper_tb_51 );
    tmp_type_arg_26 = tmp_select_metaclass_26__base;

    CHECK_OBJECT( tmp_type_arg_26 );
    tmp_outline_return_value_52 = BUILTIN_TYPE1( tmp_type_arg_26 );
    assert( tmp_outline_return_value_52 != NULL );
    goto try_return_handler_103;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_103:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_26__base );
    Py_DECREF( tmp_select_metaclass_26__base );
    tmp_select_metaclass_26__base = NULL;

    goto outline_result_52;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_26__base );
    Py_DECREF( tmp_select_metaclass_26__base );
    tmp_select_metaclass_26__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_52:;
    tmp_assign_source_158 = tmp_outline_return_value_52;
    condexpr_end_26:;
    assert( tmp_class_creation_26__metaclass == NULL );
    tmp_class_creation_26__metaclass = tmp_assign_source_158;

    tmp_called_name_26 = tmp_class_creation_26__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_args_element_name_76 = const_str_plain_SNIMissingWarning;
    tmp_args_element_name_77 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_args_element_name_77 );
    tmp_args_element_name_78 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_args_element_name_78 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78 };
        tmp_assign_source_160 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
    }

    if ( tmp_assign_source_160 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_101;
    }
    assert( tmp_class_creation_26__class == NULL );
    tmp_class_creation_26__class = tmp_assign_source_160;

    goto try_end_26;
    // Exception handler code:
    try_except_handler_101:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    Py_XDECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    tmp_assign_source_161 = tmp_class_creation_26__class;

    CHECK_OBJECT( tmp_assign_source_161 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_161 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class );
    Py_DECREF( tmp_class_creation_26__class );
    tmp_class_creation_26__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__bases );
    Py_DECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class_dict );
    Py_DECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__metaclass );
    Py_DECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    // Tried code:
    tmp_assign_source_162 = PyTuple_New( 1 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_162 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;

        exception_lineno = 189;

        goto try_except_handler_105;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_162, 0, tmp_tuple_element_27 );
    assert( tmp_class_creation_27__bases == NULL );
    tmp_class_creation_27__bases = tmp_assign_source_162;

    tmp_set_locals = PyDict_New();
    locals_DependencyWarning_189 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_DependencyWarning_189, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
    tmp_res = PyDict_SetItem( locals_DependencyWarning_189, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_53 = locals_DependencyWarning_189;
    Py_INCREF( tmp_outline_return_value_53 );
    goto try_return_handler_106;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_106:;
    Py_DECREF( locals_DependencyWarning_189 );
    locals_DependencyWarning_189 = NULL;
    goto outline_result_53;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_53:;
    tmp_assign_source_163 = tmp_outline_return_value_53;
    assert( tmp_class_creation_27__class_dict == NULL );
    tmp_class_creation_27__class_dict = tmp_assign_source_163;

    tmp_compare_left_27 = const_str_plain___metaclass__;
    tmp_compare_right_27 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_compare_right_27 );
    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    assert( !(tmp_cmp_In_27 == -1) );
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_dict_name_27 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_key_name_27 = const_str_plain___metaclass__;
    tmp_assign_source_164 = DICT_GET_ITEM( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_assign_source_164 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_105;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_subscribed_name_27 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_subscribed_name_27 );
    tmp_subscript_name_27 = const_int_0;
    tmp_assign_source_165 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
    if ( tmp_assign_source_165 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_105;
    }
    assert( tmp_select_metaclass_27__base == NULL );
    tmp_select_metaclass_27__base = tmp_assign_source_165;

    // Tried code:
    // Tried code:
    tmp_source_name_27 = tmp_select_metaclass_27__base;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_outline_return_value_54 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_27 );
    if ( tmp_outline_return_value_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_108;
    }
    goto try_return_handler_107;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_108:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_53 );
    Py_XDECREF( exception_keeper_value_53 );
    Py_XDECREF( exception_keeper_tb_53 );
    tmp_type_arg_27 = tmp_select_metaclass_27__base;

    CHECK_OBJECT( tmp_type_arg_27 );
    tmp_outline_return_value_54 = BUILTIN_TYPE1( tmp_type_arg_27 );
    assert( tmp_outline_return_value_54 != NULL );
    goto try_return_handler_107;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_107:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_27__base );
    Py_DECREF( tmp_select_metaclass_27__base );
    tmp_select_metaclass_27__base = NULL;

    goto outline_result_54;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_27__base );
    Py_DECREF( tmp_select_metaclass_27__base );
    tmp_select_metaclass_27__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_54:;
    tmp_assign_source_164 = tmp_outline_return_value_54;
    condexpr_end_27:;
    assert( tmp_class_creation_27__metaclass == NULL );
    tmp_class_creation_27__metaclass = tmp_assign_source_164;

    tmp_called_name_27 = tmp_class_creation_27__metaclass;

    CHECK_OBJECT( tmp_called_name_27 );
    tmp_args_element_name_79 = const_str_plain_DependencyWarning;
    tmp_args_element_name_80 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_args_element_name_80 );
    tmp_args_element_name_81 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_args_element_name_81 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81 };
        tmp_assign_source_166 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, call_args );
    }

    if ( tmp_assign_source_166 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_105;
    }
    assert( tmp_class_creation_27__class == NULL );
    tmp_class_creation_27__class = tmp_assign_source_166;

    goto try_end_27;
    // Exception handler code:
    try_except_handler_105:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    Py_XDECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    tmp_assign_source_167 = tmp_class_creation_27__class;

    CHECK_OBJECT( tmp_assign_source_167 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_167 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class );
    Py_DECREF( tmp_class_creation_27__class );
    tmp_class_creation_27__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__bases );
    Py_DECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class_dict );
    Py_DECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__metaclass );
    Py_DECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Tried code:
    tmp_assign_source_168 = PyTuple_New( 2 );
    tmp_tuple_element_28 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_28 == NULL ))
    {
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_168 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;

        exception_lineno = 198;

        goto try_except_handler_109;
    }

    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_assign_source_168, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_assign_source_168, 1, tmp_tuple_element_28 );
    assert( tmp_class_creation_28__bases == NULL );
    tmp_class_creation_28__bases = tmp_assign_source_168;

    tmp_set_locals = PyDict_New();
    locals_ResponseNotChunked_198 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ResponseNotChunked_198, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
    tmp_res = PyDict_SetItem( locals_ResponseNotChunked_198, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_55 = locals_ResponseNotChunked_198;
    Py_INCREF( tmp_outline_return_value_55 );
    goto try_return_handler_110;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_110:;
    Py_DECREF( locals_ResponseNotChunked_198 );
    locals_ResponseNotChunked_198 = NULL;
    goto outline_result_55;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_55:;
    tmp_assign_source_169 = tmp_outline_return_value_55;
    assert( tmp_class_creation_28__class_dict == NULL );
    tmp_class_creation_28__class_dict = tmp_assign_source_169;

    tmp_compare_left_28 = const_str_plain___metaclass__;
    tmp_compare_right_28 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_compare_right_28 );
    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    assert( !(tmp_cmp_In_28 == -1) );
    if ( tmp_cmp_In_28 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_28 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_key_name_28 = const_str_plain___metaclass__;
    tmp_assign_source_170 = DICT_GET_ITEM( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_assign_source_170 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto try_except_handler_109;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_subscribed_name_28 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_subscribed_name_28 );
    tmp_subscript_name_28 = const_int_0;
    tmp_assign_source_171 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
    if ( tmp_assign_source_171 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto try_except_handler_109;
    }
    assert( tmp_select_metaclass_28__base == NULL );
    tmp_select_metaclass_28__base = tmp_assign_source_171;

    // Tried code:
    // Tried code:
    tmp_source_name_28 = tmp_select_metaclass_28__base;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_outline_return_value_56 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_28 );
    if ( tmp_outline_return_value_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto try_except_handler_112;
    }
    goto try_return_handler_111;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_112:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_55 );
    Py_XDECREF( exception_keeper_value_55 );
    Py_XDECREF( exception_keeper_tb_55 );
    tmp_type_arg_28 = tmp_select_metaclass_28__base;

    CHECK_OBJECT( tmp_type_arg_28 );
    tmp_outline_return_value_56 = BUILTIN_TYPE1( tmp_type_arg_28 );
    assert( tmp_outline_return_value_56 != NULL );
    goto try_return_handler_111;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_111:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_28__base );
    Py_DECREF( tmp_select_metaclass_28__base );
    tmp_select_metaclass_28__base = NULL;

    goto outline_result_56;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_28__base );
    Py_DECREF( tmp_select_metaclass_28__base );
    tmp_select_metaclass_28__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_56:;
    tmp_assign_source_170 = tmp_outline_return_value_56;
    condexpr_end_28:;
    assert( tmp_class_creation_28__metaclass == NULL );
    tmp_class_creation_28__metaclass = tmp_assign_source_170;

    tmp_called_name_28 = tmp_class_creation_28__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_args_element_name_82 = const_str_plain_ResponseNotChunked;
    tmp_args_element_name_83 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_args_element_name_83 );
    tmp_args_element_name_84 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_args_element_name_84 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84 };
        tmp_assign_source_172 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
    }

    if ( tmp_assign_source_172 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto try_except_handler_109;
    }
    assert( tmp_class_creation_28__class == NULL );
    tmp_class_creation_28__class = tmp_assign_source_172;

    goto try_end_28;
    // Exception handler code:
    try_except_handler_109:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    Py_XDECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    tmp_assign_source_173 = tmp_class_creation_28__class;

    CHECK_OBJECT( tmp_assign_source_173 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked, tmp_assign_source_173 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class );
    Py_DECREF( tmp_class_creation_28__class );
    tmp_class_creation_28__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__bases );
    Py_DECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class_dict );
    Py_DECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__metaclass );
    Py_DECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    // Tried code:
    tmp_assign_source_174 = PyTuple_New( 1 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_174 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 203;

        goto try_except_handler_113;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_174, 0, tmp_tuple_element_29 );
    assert( tmp_class_creation_29__bases == NULL );
    tmp_class_creation_29__bases = tmp_assign_source_174;

    tmp_set_locals = PyDict_New();
    locals_BodyNotHttplibCompatible_203 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_BodyNotHttplibCompatible_203, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
    tmp_res = PyDict_SetItem( locals_BodyNotHttplibCompatible_203, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_57 = locals_BodyNotHttplibCompatible_203;
    Py_INCREF( tmp_outline_return_value_57 );
    goto try_return_handler_114;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_114:;
    Py_DECREF( locals_BodyNotHttplibCompatible_203 );
    locals_BodyNotHttplibCompatible_203 = NULL;
    goto outline_result_57;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_57:;
    tmp_assign_source_175 = tmp_outline_return_value_57;
    assert( tmp_class_creation_29__class_dict == NULL );
    tmp_class_creation_29__class_dict = tmp_assign_source_175;

    tmp_compare_left_29 = const_str_plain___metaclass__;
    tmp_compare_right_29 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_compare_right_29 );
    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    assert( !(tmp_cmp_In_29 == -1) );
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_dict_name_29 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain___metaclass__;
    tmp_assign_source_176 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_assign_source_176 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;

        goto try_except_handler_113;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_subscribed_name_29 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_subscribed_name_29 );
    tmp_subscript_name_29 = const_int_0;
    tmp_assign_source_177 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
    if ( tmp_assign_source_177 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;

        goto try_except_handler_113;
    }
    assert( tmp_select_metaclass_29__base == NULL );
    tmp_select_metaclass_29__base = tmp_assign_source_177;

    // Tried code:
    // Tried code:
    tmp_source_name_29 = tmp_select_metaclass_29__base;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_outline_return_value_58 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_29 );
    if ( tmp_outline_return_value_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;

        goto try_except_handler_116;
    }
    goto try_return_handler_115;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_116:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_57 );
    Py_XDECREF( exception_keeper_value_57 );
    Py_XDECREF( exception_keeper_tb_57 );
    tmp_type_arg_29 = tmp_select_metaclass_29__base;

    CHECK_OBJECT( tmp_type_arg_29 );
    tmp_outline_return_value_58 = BUILTIN_TYPE1( tmp_type_arg_29 );
    assert( tmp_outline_return_value_58 != NULL );
    goto try_return_handler_115;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_115:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_29__base );
    Py_DECREF( tmp_select_metaclass_29__base );
    tmp_select_metaclass_29__base = NULL;

    goto outline_result_58;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_29__base );
    Py_DECREF( tmp_select_metaclass_29__base );
    tmp_select_metaclass_29__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_58:;
    tmp_assign_source_176 = tmp_outline_return_value_58;
    condexpr_end_29:;
    assert( tmp_class_creation_29__metaclass == NULL );
    tmp_class_creation_29__metaclass = tmp_assign_source_176;

    tmp_called_name_29 = tmp_class_creation_29__metaclass;

    CHECK_OBJECT( tmp_called_name_29 );
    tmp_args_element_name_85 = const_str_plain_BodyNotHttplibCompatible;
    tmp_args_element_name_86 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_args_element_name_86 );
    tmp_args_element_name_87 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_args_element_name_87 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87 };
        tmp_assign_source_178 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_29, call_args );
    }

    if ( tmp_assign_source_178 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;

        goto try_except_handler_113;
    }
    assert( tmp_class_creation_29__class == NULL );
    tmp_class_creation_29__class = tmp_assign_source_178;

    goto try_end_29;
    // Exception handler code:
    try_except_handler_113:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    Py_XDECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    tmp_assign_source_179 = tmp_class_creation_29__class;

    CHECK_OBJECT( tmp_assign_source_179 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible, tmp_assign_source_179 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class );
    Py_DECREF( tmp_class_creation_29__class );
    tmp_class_creation_29__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__bases );
    Py_DECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class_dict );
    Py_DECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__metaclass );
    Py_DECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    // Tried code:
    tmp_assign_source_180 = PyTuple_New( 2 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_180 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto try_except_handler_117;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_180, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_180 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "httplib_IncompleteRead" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto try_except_handler_117;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_180, 1, tmp_tuple_element_30 );
    assert( tmp_class_creation_30__bases == NULL );
    tmp_class_creation_30__bases = tmp_assign_source_180;

    tmp_set_locals = PyDict_New();
    locals_IncompleteRead_212 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_IncompleteRead_212, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
    tmp_res = PyDict_SetItem( locals_IncompleteRead_212, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );
    tmp_res = PyDict_SetItem( locals_IncompleteRead_212, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );
    tmp_res = PyDict_SetItem( locals_IncompleteRead_212, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_59 = locals_IncompleteRead_212;
    Py_INCREF( tmp_outline_return_value_59 );
    goto try_return_handler_118;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_118:;
    Py_DECREF( locals_IncompleteRead_212 );
    locals_IncompleteRead_212 = NULL;
    goto outline_result_59;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_59:;
    tmp_assign_source_181 = tmp_outline_return_value_59;
    assert( tmp_class_creation_30__class_dict == NULL );
    tmp_class_creation_30__class_dict = tmp_assign_source_181;

    tmp_compare_left_30 = const_str_plain___metaclass__;
    tmp_compare_right_30 = tmp_class_creation_30__class_dict;

    CHECK_OBJECT( tmp_compare_right_30 );
    tmp_cmp_In_30 = PySequence_Contains( tmp_compare_right_30, tmp_compare_left_30 );
    assert( !(tmp_cmp_In_30 == -1) );
    if ( tmp_cmp_In_30 == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_dict_name_30 = tmp_class_creation_30__class_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_key_name_30 = const_str_plain___metaclass__;
    tmp_assign_source_182 = DICT_GET_ITEM( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_assign_source_182 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_117;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_subscribed_name_30 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_subscribed_name_30 );
    tmp_subscript_name_30 = const_int_0;
    tmp_assign_source_183 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
    if ( tmp_assign_source_183 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_117;
    }
    assert( tmp_select_metaclass_30__base == NULL );
    tmp_select_metaclass_30__base = tmp_assign_source_183;

    // Tried code:
    // Tried code:
    tmp_source_name_30 = tmp_select_metaclass_30__base;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_outline_return_value_60 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_30 );
    if ( tmp_outline_return_value_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_120;
    }
    goto try_return_handler_119;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_120:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_59 );
    Py_XDECREF( exception_keeper_value_59 );
    Py_XDECREF( exception_keeper_tb_59 );
    tmp_type_arg_30 = tmp_select_metaclass_30__base;

    CHECK_OBJECT( tmp_type_arg_30 );
    tmp_outline_return_value_60 = BUILTIN_TYPE1( tmp_type_arg_30 );
    assert( tmp_outline_return_value_60 != NULL );
    goto try_return_handler_119;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_119:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_30__base );
    Py_DECREF( tmp_select_metaclass_30__base );
    tmp_select_metaclass_30__base = NULL;

    goto outline_result_60;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_30__base );
    Py_DECREF( tmp_select_metaclass_30__base );
    tmp_select_metaclass_30__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_60:;
    tmp_assign_source_182 = tmp_outline_return_value_60;
    condexpr_end_30:;
    assert( tmp_class_creation_30__metaclass == NULL );
    tmp_class_creation_30__metaclass = tmp_assign_source_182;

    tmp_called_name_30 = tmp_class_creation_30__metaclass;

    CHECK_OBJECT( tmp_called_name_30 );
    tmp_args_element_name_88 = const_str_plain_IncompleteRead;
    tmp_args_element_name_89 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_args_element_name_89 );
    tmp_args_element_name_90 = tmp_class_creation_30__class_dict;

    CHECK_OBJECT( tmp_args_element_name_90 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90 };
        tmp_assign_source_184 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, call_args );
    }

    if ( tmp_assign_source_184 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_117;
    }
    assert( tmp_class_creation_30__class == NULL );
    tmp_class_creation_30__class = tmp_assign_source_184;

    goto try_end_30;
    // Exception handler code:
    try_except_handler_117:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    Py_XDECREF( tmp_class_creation_30__class_dict );
    tmp_class_creation_30__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    tmp_assign_source_185 = tmp_class_creation_30__class;

    CHECK_OBJECT( tmp_assign_source_185 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead, tmp_assign_source_185 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__class );
    Py_DECREF( tmp_class_creation_30__class );
    tmp_class_creation_30__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__bases );
    Py_DECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__class_dict );
    Py_DECREF( tmp_class_creation_30__class_dict );
    tmp_class_creation_30__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__metaclass );
    Py_DECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    // Tried code:
    tmp_assign_source_186 = PyTuple_New( 1 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_186 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 231;

        goto try_except_handler_121;
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_assign_source_186, 0, tmp_tuple_element_31 );
    assert( tmp_class_creation_31__bases == NULL );
    tmp_class_creation_31__bases = tmp_assign_source_186;

    tmp_set_locals = PyDict_New();
    locals_InvalidHeader_231 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_InvalidHeader_231, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_28db377b4c4aaf2881b08e822881aecb;
    tmp_res = PyDict_SetItem( locals_InvalidHeader_231, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_61 = locals_InvalidHeader_231;
    Py_INCREF( tmp_outline_return_value_61 );
    goto try_return_handler_122;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_122:;
    Py_DECREF( locals_InvalidHeader_231 );
    locals_InvalidHeader_231 = NULL;
    goto outline_result_61;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_61:;
    tmp_assign_source_187 = tmp_outline_return_value_61;
    assert( tmp_class_creation_31__class_dict == NULL );
    tmp_class_creation_31__class_dict = tmp_assign_source_187;

    tmp_compare_left_31 = const_str_plain___metaclass__;
    tmp_compare_right_31 = tmp_class_creation_31__class_dict;

    CHECK_OBJECT( tmp_compare_right_31 );
    tmp_cmp_In_31 = PySequence_Contains( tmp_compare_right_31, tmp_compare_left_31 );
    assert( !(tmp_cmp_In_31 == -1) );
    if ( tmp_cmp_In_31 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_31 = tmp_class_creation_31__class_dict;

    CHECK_OBJECT( tmp_dict_name_31 );
    tmp_key_name_31 = const_str_plain___metaclass__;
    tmp_assign_source_188 = DICT_GET_ITEM( tmp_dict_name_31, tmp_key_name_31 );
    if ( tmp_assign_source_188 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_121;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_subscribed_name_31 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_subscribed_name_31 );
    tmp_subscript_name_31 = const_int_0;
    tmp_assign_source_189 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_31, tmp_subscript_name_31 );
    if ( tmp_assign_source_189 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_121;
    }
    assert( tmp_select_metaclass_31__base == NULL );
    tmp_select_metaclass_31__base = tmp_assign_source_189;

    // Tried code:
    // Tried code:
    tmp_source_name_31 = tmp_select_metaclass_31__base;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_outline_return_value_62 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_31 );
    if ( tmp_outline_return_value_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_124;
    }
    goto try_return_handler_123;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_124:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_61 );
    Py_XDECREF( exception_keeper_value_61 );
    Py_XDECREF( exception_keeper_tb_61 );
    tmp_type_arg_31 = tmp_select_metaclass_31__base;

    CHECK_OBJECT( tmp_type_arg_31 );
    tmp_outline_return_value_62 = BUILTIN_TYPE1( tmp_type_arg_31 );
    assert( tmp_outline_return_value_62 != NULL );
    goto try_return_handler_123;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_123:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_31__base );
    Py_DECREF( tmp_select_metaclass_31__base );
    tmp_select_metaclass_31__base = NULL;

    goto outline_result_62;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_31__base );
    Py_DECREF( tmp_select_metaclass_31__base );
    tmp_select_metaclass_31__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_62:;
    tmp_assign_source_188 = tmp_outline_return_value_62;
    condexpr_end_31:;
    assert( tmp_class_creation_31__metaclass == NULL );
    tmp_class_creation_31__metaclass = tmp_assign_source_188;

    tmp_called_name_31 = tmp_class_creation_31__metaclass;

    CHECK_OBJECT( tmp_called_name_31 );
    tmp_args_element_name_91 = const_str_plain_InvalidHeader;
    tmp_args_element_name_92 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_args_element_name_92 );
    tmp_args_element_name_93 = tmp_class_creation_31__class_dict;

    CHECK_OBJECT( tmp_args_element_name_93 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93 };
        tmp_assign_source_190 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, call_args );
    }

    if ( tmp_assign_source_190 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_121;
    }
    assert( tmp_class_creation_31__class == NULL );
    tmp_class_creation_31__class = tmp_assign_source_190;

    goto try_end_31;
    // Exception handler code:
    try_except_handler_121:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    Py_XDECREF( tmp_class_creation_31__class_dict );
    tmp_class_creation_31__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    tmp_assign_source_191 = tmp_class_creation_31__class;

    CHECK_OBJECT( tmp_assign_source_191 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_191 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__class );
    Py_DECREF( tmp_class_creation_31__class );
    tmp_class_creation_31__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__bases );
    Py_DECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__class_dict );
    Py_DECREF( tmp_class_creation_31__class_dict );
    tmp_class_creation_31__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__metaclass );
    Py_DECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    tmp_assign_source_192 = PyTuple_New( 2 );
    tmp_tuple_element_32 = PyExc_AssertionError;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_assign_source_192, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_assign_source_192, 1, tmp_tuple_element_32 );
    assert( tmp_class_creation_32__bases == NULL );
    tmp_class_creation_32__bases = tmp_assign_source_192;

    tmp_set_locals = PyDict_New();
    locals_ProxySchemeUnknown_236 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_ProxySchemeUnknown_236, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
    tmp_res = PyDict_SetItem( locals_ProxySchemeUnknown_236, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );
    tmp_res = PyDict_SetItem( locals_ProxySchemeUnknown_236, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_63 = locals_ProxySchemeUnknown_236;
    Py_INCREF( tmp_outline_return_value_63 );
    goto try_return_handler_125;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_125:;
    Py_DECREF( locals_ProxySchemeUnknown_236 );
    locals_ProxySchemeUnknown_236 = NULL;
    goto outline_result_63;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_63:;
    tmp_assign_source_193 = tmp_outline_return_value_63;
    assert( tmp_class_creation_32__class_dict == NULL );
    tmp_class_creation_32__class_dict = tmp_assign_source_193;

    // Tried code:
    tmp_compare_left_32 = const_str_plain___metaclass__;
    tmp_compare_right_32 = tmp_class_creation_32__class_dict;

    CHECK_OBJECT( tmp_compare_right_32 );
    tmp_cmp_In_32 = PySequence_Contains( tmp_compare_right_32, tmp_compare_left_32 );
    assert( !(tmp_cmp_In_32 == -1) );
    if ( tmp_cmp_In_32 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_dict_name_32 = tmp_class_creation_32__class_dict;

    CHECK_OBJECT( tmp_dict_name_32 );
    tmp_key_name_32 = const_str_plain___metaclass__;
    tmp_assign_source_194 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
    if ( tmp_assign_source_194 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_126;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_subscribed_name_32 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_subscribed_name_32 );
    tmp_subscript_name_32 = const_int_0;
    tmp_assign_source_195 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_32, tmp_subscript_name_32 );
    if ( tmp_assign_source_195 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_126;
    }
    assert( tmp_select_metaclass_32__base == NULL );
    tmp_select_metaclass_32__base = tmp_assign_source_195;

    // Tried code:
    // Tried code:
    tmp_source_name_32 = tmp_select_metaclass_32__base;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_outline_return_value_64 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_32 );
    if ( tmp_outline_return_value_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_128;
    }
    goto try_return_handler_127;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_128:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_63 );
    Py_XDECREF( exception_keeper_value_63 );
    Py_XDECREF( exception_keeper_tb_63 );
    tmp_type_arg_32 = tmp_select_metaclass_32__base;

    CHECK_OBJECT( tmp_type_arg_32 );
    tmp_outline_return_value_64 = BUILTIN_TYPE1( tmp_type_arg_32 );
    assert( tmp_outline_return_value_64 != NULL );
    goto try_return_handler_127;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_127:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_32__base );
    Py_DECREF( tmp_select_metaclass_32__base );
    tmp_select_metaclass_32__base = NULL;

    goto outline_result_64;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_32__base );
    Py_DECREF( tmp_select_metaclass_32__base );
    tmp_select_metaclass_32__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_64:;
    tmp_assign_source_194 = tmp_outline_return_value_64;
    condexpr_end_32:;
    assert( tmp_class_creation_32__metaclass == NULL );
    tmp_class_creation_32__metaclass = tmp_assign_source_194;

    tmp_called_name_32 = tmp_class_creation_32__metaclass;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_args_element_name_94 = const_str_plain_ProxySchemeUnknown;
    tmp_args_element_name_95 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_args_element_name_95 );
    tmp_args_element_name_96 = tmp_class_creation_32__class_dict;

    CHECK_OBJECT( tmp_args_element_name_96 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_args_element_name_94, tmp_args_element_name_95, tmp_args_element_name_96 };
        tmp_assign_source_196 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, call_args );
    }

    if ( tmp_assign_source_196 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_126;
    }
    assert( tmp_class_creation_32__class == NULL );
    tmp_class_creation_32__class = tmp_assign_source_196;

    goto try_end_32;
    // Exception handler code:
    try_except_handler_126:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__bases );
    Py_DECREF( tmp_class_creation_32__bases );
    tmp_class_creation_32__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class_dict );
    Py_DECREF( tmp_class_creation_32__class_dict );
    tmp_class_creation_32__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    tmp_assign_source_197 = tmp_class_creation_32__class;

    CHECK_OBJECT( tmp_assign_source_197 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_197 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class );
    Py_DECREF( tmp_class_creation_32__class );
    tmp_class_creation_32__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__bases );
    Py_DECREF( tmp_class_creation_32__bases );
    tmp_class_creation_32__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class_dict );
    Py_DECREF( tmp_class_creation_32__class_dict );
    tmp_class_creation_32__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__metaclass );
    Py_DECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    // Tried code:
    tmp_assign_source_198 = PyTuple_New( 1 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_198 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 245;

        goto try_except_handler_129;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_198, 0, tmp_tuple_element_33 );
    assert( tmp_class_creation_33__bases == NULL );
    tmp_class_creation_33__bases = tmp_assign_source_198;

    tmp_set_locals = PyDict_New();
    locals_HeaderParsingError_245 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_HeaderParsingError_245, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_6b2631bb00bf77812f4e433630f72b85;
    tmp_res = PyDict_SetItem( locals_HeaderParsingError_245, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );
    tmp_res = PyDict_SetItem( locals_HeaderParsingError_245, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_65 = locals_HeaderParsingError_245;
    Py_INCREF( tmp_outline_return_value_65 );
    goto try_return_handler_130;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_130:;
    Py_DECREF( locals_HeaderParsingError_245 );
    locals_HeaderParsingError_245 = NULL;
    goto outline_result_65;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_65:;
    tmp_assign_source_199 = tmp_outline_return_value_65;
    assert( tmp_class_creation_33__class_dict == NULL );
    tmp_class_creation_33__class_dict = tmp_assign_source_199;

    tmp_compare_left_33 = const_str_plain___metaclass__;
    tmp_compare_right_33 = tmp_class_creation_33__class_dict;

    CHECK_OBJECT( tmp_compare_right_33 );
    tmp_cmp_In_33 = PySequence_Contains( tmp_compare_right_33, tmp_compare_left_33 );
    assert( !(tmp_cmp_In_33 == -1) );
    if ( tmp_cmp_In_33 == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_dict_name_33 = tmp_class_creation_33__class_dict;

    CHECK_OBJECT( tmp_dict_name_33 );
    tmp_key_name_33 = const_str_plain___metaclass__;
    tmp_assign_source_200 = DICT_GET_ITEM( tmp_dict_name_33, tmp_key_name_33 );
    if ( tmp_assign_source_200 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;

        goto try_except_handler_129;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_subscribed_name_33 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_subscribed_name_33 );
    tmp_subscript_name_33 = const_int_0;
    tmp_assign_source_201 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_33, tmp_subscript_name_33 );
    if ( tmp_assign_source_201 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;

        goto try_except_handler_129;
    }
    assert( tmp_select_metaclass_33__base == NULL );
    tmp_select_metaclass_33__base = tmp_assign_source_201;

    // Tried code:
    // Tried code:
    tmp_source_name_33 = tmp_select_metaclass_33__base;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_outline_return_value_66 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_33 );
    if ( tmp_outline_return_value_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;

        goto try_except_handler_132;
    }
    goto try_return_handler_131;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_132:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_65 );
    Py_XDECREF( exception_keeper_value_65 );
    Py_XDECREF( exception_keeper_tb_65 );
    tmp_type_arg_33 = tmp_select_metaclass_33__base;

    CHECK_OBJECT( tmp_type_arg_33 );
    tmp_outline_return_value_66 = BUILTIN_TYPE1( tmp_type_arg_33 );
    assert( tmp_outline_return_value_66 != NULL );
    goto try_return_handler_131;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_131:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_33__base );
    Py_DECREF( tmp_select_metaclass_33__base );
    tmp_select_metaclass_33__base = NULL;

    goto outline_result_66;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_33__base );
    Py_DECREF( tmp_select_metaclass_33__base );
    tmp_select_metaclass_33__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_66:;
    tmp_assign_source_200 = tmp_outline_return_value_66;
    condexpr_end_33:;
    assert( tmp_class_creation_33__metaclass == NULL );
    tmp_class_creation_33__metaclass = tmp_assign_source_200;

    tmp_called_name_33 = tmp_class_creation_33__metaclass;

    CHECK_OBJECT( tmp_called_name_33 );
    tmp_args_element_name_97 = const_str_plain_HeaderParsingError;
    tmp_args_element_name_98 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_args_element_name_98 );
    tmp_args_element_name_99 = tmp_class_creation_33__class_dict;

    CHECK_OBJECT( tmp_args_element_name_99 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99 };
        tmp_assign_source_202 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_33, call_args );
    }

    if ( tmp_assign_source_202 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;

        goto try_except_handler_129;
    }
    assert( tmp_class_creation_33__class == NULL );
    tmp_class_creation_33__class = tmp_assign_source_202;

    goto try_end_33;
    // Exception handler code:
    try_except_handler_129:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    Py_XDECREF( tmp_class_creation_33__class_dict );
    tmp_class_creation_33__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    tmp_assign_source_203 = tmp_class_creation_33__class;

    CHECK_OBJECT( tmp_assign_source_203 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_203 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__class );
    Py_DECREF( tmp_class_creation_33__class );
    tmp_class_creation_33__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__bases );
    Py_DECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__class_dict );
    Py_DECREF( tmp_class_creation_33__class_dict );
    tmp_class_creation_33__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__metaclass );
    Py_DECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    // Tried code:
    tmp_assign_source_204 = PyTuple_New( 1 );
    tmp_tuple_element_34 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_34 == NULL ))
    {
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_204 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;

        exception_lineno = 253;

        goto try_except_handler_133;
    }

    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_assign_source_204, 0, tmp_tuple_element_34 );
    assert( tmp_class_creation_34__bases == NULL );
    tmp_class_creation_34__bases = tmp_assign_source_204;

    tmp_set_locals = PyDict_New();
    locals_UnrewindableBodyError_253 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyDict_SetItem( locals_UnrewindableBodyError_253, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_8c0402b3f822d653c84c590d6e596566;
    tmp_res = PyDict_SetItem( locals_UnrewindableBodyError_253, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_67 = locals_UnrewindableBodyError_253;
    Py_INCREF( tmp_outline_return_value_67 );
    goto try_return_handler_134;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_134:;
    Py_DECREF( locals_UnrewindableBodyError_253 );
    locals_UnrewindableBodyError_253 = NULL;
    goto outline_result_67;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_67:;
    tmp_assign_source_205 = tmp_outline_return_value_67;
    assert( tmp_class_creation_34__class_dict == NULL );
    tmp_class_creation_34__class_dict = tmp_assign_source_205;

    tmp_compare_left_34 = const_str_plain___metaclass__;
    tmp_compare_right_34 = tmp_class_creation_34__class_dict;

    CHECK_OBJECT( tmp_compare_right_34 );
    tmp_cmp_In_34 = PySequence_Contains( tmp_compare_right_34, tmp_compare_left_34 );
    assert( !(tmp_cmp_In_34 == -1) );
    if ( tmp_cmp_In_34 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_34 = tmp_class_creation_34__class_dict;

    CHECK_OBJECT( tmp_dict_name_34 );
    tmp_key_name_34 = const_str_plain___metaclass__;
    tmp_assign_source_206 = DICT_GET_ITEM( tmp_dict_name_34, tmp_key_name_34 );
    if ( tmp_assign_source_206 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_133;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_subscribed_name_34 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_subscribed_name_34 );
    tmp_subscript_name_34 = const_int_0;
    tmp_assign_source_207 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_34, tmp_subscript_name_34 );
    if ( tmp_assign_source_207 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_133;
    }
    assert( tmp_select_metaclass_34__base == NULL );
    tmp_select_metaclass_34__base = tmp_assign_source_207;

    // Tried code:
    // Tried code:
    tmp_source_name_34 = tmp_select_metaclass_34__base;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_outline_return_value_68 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_34 );
    if ( tmp_outline_return_value_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_136;
    }
    goto try_return_handler_135;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_136:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_67 );
    Py_XDECREF( exception_keeper_value_67 );
    Py_XDECREF( exception_keeper_tb_67 );
    tmp_type_arg_34 = tmp_select_metaclass_34__base;

    CHECK_OBJECT( tmp_type_arg_34 );
    tmp_outline_return_value_68 = BUILTIN_TYPE1( tmp_type_arg_34 );
    assert( tmp_outline_return_value_68 != NULL );
    goto try_return_handler_135;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_135:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_34__base );
    Py_DECREF( tmp_select_metaclass_34__base );
    tmp_select_metaclass_34__base = NULL;

    goto outline_result_68;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_34__base );
    Py_DECREF( tmp_select_metaclass_34__base );
    tmp_select_metaclass_34__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_68:;
    tmp_assign_source_206 = tmp_outline_return_value_68;
    condexpr_end_34:;
    assert( tmp_class_creation_34__metaclass == NULL );
    tmp_class_creation_34__metaclass = tmp_assign_source_206;

    tmp_called_name_34 = tmp_class_creation_34__metaclass;

    CHECK_OBJECT( tmp_called_name_34 );
    tmp_args_element_name_100 = const_str_plain_UnrewindableBodyError;
    tmp_args_element_name_101 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_args_element_name_101 );
    tmp_args_element_name_102 = tmp_class_creation_34__class_dict;

    CHECK_OBJECT( tmp_args_element_name_102 );
    frame_604c767a40d022adda63962b6e9761ac->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_100, tmp_args_element_name_101, tmp_args_element_name_102 };
        tmp_assign_source_208 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, call_args );
    }

    if ( tmp_assign_source_208 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_133;
    }
    assert( tmp_class_creation_34__class == NULL );
    tmp_class_creation_34__class = tmp_assign_source_208;

    goto try_end_34;
    // Exception handler code:
    try_except_handler_133:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    Py_XDECREF( tmp_class_creation_34__class_dict );
    tmp_class_creation_34__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_604c767a40d022adda63962b6e9761ac );
#endif
    popFrameStack();

    assertFrameObject( frame_604c767a40d022adda63962b6e9761ac );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_604c767a40d022adda63962b6e9761ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_604c767a40d022adda63962b6e9761ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_604c767a40d022adda63962b6e9761ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_604c767a40d022adda63962b6e9761ac, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_209 = tmp_class_creation_34__class;

    CHECK_OBJECT( tmp_assign_source_209 );
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_209 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__class );
    Py_DECREF( tmp_class_creation_34__class );
    tmp_class_creation_34__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__bases );
    Py_DECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__class_dict );
    Py_DECREF( tmp_class_creation_34__class_dict );
    tmp_class_creation_34__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__metaclass );
    Py_DECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;


    return MOD_RETURN_VALUE( module_urllib3$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
