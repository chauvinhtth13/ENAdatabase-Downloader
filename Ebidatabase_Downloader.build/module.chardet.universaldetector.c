/* Generated code for Python source for module 'chardet.universaldetector'
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

/* The _module_chardet$universaldetector is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$universaldetector;
PyDictObject *moduledict_chardet$universaldetector;

/* The module constants used, if any. */
static PyObject *const_str_plain__has_win_bytes;
static PyObject *const_str_digest_6e041e68342160b5c52f96a387a10185;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_prober_tuple;
static PyObject *const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple;
static PyObject *const_str_digest_8cd41f9549dd4710d5b9a25284345bff;
static PyObject *const_dict_002c5c06832d6e9c8de1aa07534ece81;
static PyObject *const_tuple_str_plain_Latin1Prober_tuple;
static PyObject *const_dict_90f3771d827783d7c3f7c063b068451f;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_byte_str;
static PyObject *const_str_digest_cd9c0a308cacd46c2f9852ecd7412108;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain__charset_probers;
extern PyObject *const_str_plain_language;
static PyObject *const_tuple_str_plain_MBCSGroupProber_tuple;
static PyObject *const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple;
static PyObject *const_str_digest_3feb039d342093a9fc19c97c763be56e;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_9c9170000e8116836a32fb144ec2827a;
extern PyObject *const_str_plain_Latin1Prober;
static PyObject *const_str_plain_ISO_WIN_MAP;
static PyObject *const_str_plain_BOM_LE;
static PyObject *const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c;
static PyObject *const_str_plain_HIGH_BYTE_DETECTOR;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_escprober;
static PyObject *const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
static PyObject *const_dict_3bcf27e9da95f233b135a4fa0ccd80da;
extern PyObject *const_str_plain_ALL;
static PyObject *const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da;
static PyObject *const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2;
static PyObject *const_tuple_str_plain_SBCSGroupProber_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple;
static PyObject *const_str_digest_5e73c293e48712f21fb40fe58935766b;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple;
extern PyObject *const_str_plain_MBCSGroupProber;
extern PyObject *const_str_plain_PURE_ASCII;
static PyObject *const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_feed;
static PyObject *const_str_plain_latin1prober;
static PyObject *const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple;
static PyObject *const_str_digest_94822410052685fe3f09d986d30eb776;
static PyObject *const_str_digest_5c857a2c1c3044c8de00afb0887f582d;
static PyObject *const_tuple_str_plain_EscCharSetProber_tuple;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_plain__esc_charset_prober;
static PyObject *const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple;
extern PyObject *const_str_plain_BOM_UTF32_LE;
extern PyObject *const_str_plain_LanguageFilter;
static PyObject *const_str_digest_f412f555784f387d309a8e308f5adcf2;
static PyObject *const_str_plain_lower_charset_name;
static PyObject *const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b;
static PyObject *const_str_digest_5257dff1dc44d02cd9b7b99613dac693;
static PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple;
static PyObject *const_str_plain_ESC_DETECTOR;
static PyObject *const_str_digest_5b44479d06839737e5032359828bd044;
static PyObject *const_str_plain_max_prober;
extern PyObject *const_str_plain_ESC_ASCII;
static PyObject *const_str_plain_sbcsgroupprober;
static PyObject *const_str_digest_8faecd24d45b0f8564cecb06b07f272b;
static PyObject *const_str_digest_ba557194362b608fd158fbd8ee5a7d1f;
extern PyObject *const_str_plain_search;
static PyObject *const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple;
static PyObject *const_str_digest_414f3eb53ddda005f535853eee9ea763;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_BOM_BE;
static PyObject *const_str_plain__input_state;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_MINIMUM_THRESHOLD;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_charsetgroupprober;
extern PyObject *const_str_plain_HIGH_BYTE;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_mbcsgroupprober;
extern PyObject *const_str_plain_prober;
static PyObject *const_dict_acd3a4b6b498901da52c8b1bd56c8dab;
static PyObject *const_dict_377578fbc5d025df2ee66117cf6a77d3;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_fd972b6d81d84a08e896c65329848fea;
static PyObject *const_dict_a6e4a40c040c4fb964d98e1bfa97ab44;
static PyObject *const_str_digest_24f43beb80981e610617318b075673a8;
static PyObject *const_str_digest_0924862728666b9340d0f8882b51a0c0;
extern PyObject *const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
static PyObject *const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_float_0_2;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
static PyObject *const_str_plain_max_prober_confidence;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_BOM_UTF32_BE;
static PyObject *const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d;
static PyObject *const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42;
static PyObject *const_str_plain_getEffectiveLevel;
static PyObject *const_str_digest_880529ee285393273b708ebc2cbdff96;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_plain_prober_confidence;
static PyObject *const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d;
extern PyObject *const_str_plain_confidence;
extern PyObject *const_str_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_probers;
extern PyObject *const_str_plain_InputState;
static PyObject *const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
static PyObject *const_dict_9e25188306b97a758ea0254cbe76ba84;
static PyObject *const_str_digest_09464b1871d24e20ccfd92b25c196849;
static PyObject *const_str_digest_dd1206f138c97d58cbf970bd79a9b717;
static PyObject *const_str_digest_2ced950648ef68ce805626cb9fed7f86;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_done;
extern PyObject *const_str_plain_codecs;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_UniversalDetector;
static PyObject *const_str_digest_c2ee01df52e9689b49110b353b517cca;
extern PyObject *const_str_plain__last_char;
extern PyObject *const_str_plain_NON_CJK;
extern PyObject *const_str_plain_SBCSGroupProber;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple;
static PyObject *const_str_digest_308b528f6f3a13b66fca5729f635fa2d;
static PyObject *const_str_plain_group_prober;
static PyObject *const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple;
static PyObject *const_str_plain__got_data;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_32f1e903be2daff919d233b4544c856e;
static PyObject *const_str_digest_70182f142ba67a97f57b332e5e974437;
extern PyObject *const_str_plain_CharSetGroupProber;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_EscCharSetProber;
static PyObject *const_str_plain_WIN_BYTE_DETECTOR;
static PyObject *const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c;
extern PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
static PyObject *const_str_digest_53766747036085ecfb5d3ad939a250bd;
extern PyObject *const_str_plain_BOM_UTF8;
static PyObject *const_dict_a6d98921e43d818182447b49977eb763;
extern PyObject *const_str_plain_lang_filter;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__has_win_bytes = UNSTREAM_STRING( &constant_bin[ 633493 ], 14, 1 );
    const_str_digest_6e041e68342160b5c52f96a387a10185 = UNSTREAM_STRING( &constant_bin[ 117789 ], 5, 0 );
    const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple = PyTuple_New( 1 );
    const_str_digest_94822410052685fe3f09d986d30eb776 = UNSTREAM_STRING( &constant_bin[ 633507 ], 25, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple, 0, const_str_digest_94822410052685fe3f09d986d30eb776 ); Py_INCREF( const_str_digest_94822410052685fe3f09d986d30eb776 );
    const_str_digest_8cd41f9549dd4710d5b9a25284345bff = UNSTREAM_STRING( &constant_bin[ 633532 ], 277, 0 );
    const_dict_002c5c06832d6e9c8de1aa07534ece81 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_language, const_str_empty );
    const_str_digest_70182f142ba67a97f57b332e5e974437 = UNSTREAM_STRING( &constant_bin[ 633809 ], 9, 0 );
    PyDict_SetItem( const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_encoding, const_str_digest_70182f142ba67a97f57b332e5e974437 );
    assert( PyDict_Size( const_dict_002c5c06832d6e9c8de1aa07534ece81 ) == 3 );
    const_tuple_str_plain_Latin1Prober_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Latin1Prober_tuple, 0, const_str_plain_Latin1Prober ); Py_INCREF( const_str_plain_Latin1Prober );
    const_dict_90f3771d827783d7c3f7c063b068451f = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_language, const_str_empty );
    PyDict_SetItem( const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_encoding, const_str_plain_ascii );
    assert( PyDict_Size( const_dict_90f3771d827783d7c3f7c063b068451f ) == 3 );
    const_str_digest_cd9c0a308cacd46c2f9852ecd7412108 = UNSTREAM_STRING( &constant_bin[ 633818 ], 12, 0 );
    const_str_plain__charset_probers = UNSTREAM_STRING( &constant_bin[ 633830 ], 16, 1 );
    const_tuple_str_plain_MBCSGroupProber_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MBCSGroupProber_tuple, 0, const_str_plain_MBCSGroupProber ); Py_INCREF( const_str_plain_MBCSGroupProber );
    const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple = PyTuple_New( 1 );
    const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2 = UNSTREAM_STRING( &constant_bin[ 633846 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple, 0, const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2 ); Py_INCREF( const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2 );
    const_str_digest_3feb039d342093a9fc19c97c763be56e = UNSTREAM_STRING( &constant_bin[ 633863 ], 22, 0 );
    const_str_digest_9c9170000e8116836a32fb144ec2827a = UNSTREAM_STRING( &constant_bin[ 633885 ], 28, 0 );
    const_str_plain_ISO_WIN_MAP = UNSTREAM_STRING( &constant_bin[ 633913 ], 11, 1 );
    const_str_plain_BOM_LE = UNSTREAM_STRING( &constant_bin[ 633924 ], 6, 1 );
    const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c = UNSTREAM_STRING( &constant_bin[ 633930 ], 10, 0 );
    const_str_plain_HIGH_BYTE_DETECTOR = UNSTREAM_STRING( &constant_bin[ 633940 ], 18, 1 );
    const_str_plain_escprober = UNSTREAM_STRING( &constant_bin[ 121215 ], 9, 1 );
    const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 0, const_str_plain_InputState ); Py_INCREF( const_str_plain_InputState );
    PyTuple_SET_ITEM( const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 1, const_str_plain_LanguageFilter ); Py_INCREF( const_str_plain_LanguageFilter );
    PyTuple_SET_ITEM( const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 2, const_str_plain_ProbingState ); Py_INCREF( const_str_plain_ProbingState );
    const_dict_3bcf27e9da95f233b135a4fa0ccd80da = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_language, const_str_empty );
    const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2 = UNSTREAM_STRING( &constant_bin[ 626285 ], 6, 0 );
    PyDict_SetItem( const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_encoding, const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2 );
    assert( PyDict_Size( const_dict_3bcf27e9da95f233b135a4fa0ccd80da ) == 3 );
    const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da = UNSTREAM_STRING( &constant_bin[ 633958 ], 12, 0 );
    const_tuple_str_plain_SBCSGroupProber_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SBCSGroupProber_tuple, 0, const_str_plain_SBCSGroupProber ); Py_INCREF( const_str_plain_SBCSGroupProber );
    const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple = PyTuple_New( 1 );
    const_str_digest_5b44479d06839737e5032359828bd044 = UNSTREAM_STRING( &constant_bin[ 633970 ], 32, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple, 0, const_str_digest_5b44479d06839737e5032359828bd044 ); Py_INCREF( const_str_digest_5b44479d06839737e5032359828bd044 );
    const_str_digest_5e73c293e48712f21fb40fe58935766b = UNSTREAM_STRING( &constant_bin[ 633930 ], 8, 0 );
    const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 1, const_str_plain_charset_name ); Py_INCREF( const_str_plain_charset_name );
    const_str_plain_group_prober = UNSTREAM_STRING( &constant_bin[ 634002 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 2, const_str_plain_group_prober ); Py_INCREF( const_str_plain_group_prober );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 3, const_str_plain_confidence ); Py_INCREF( const_str_plain_confidence );
    const_str_plain_max_prober_confidence = UNSTREAM_STRING( &constant_bin[ 634014 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 4, const_str_plain_max_prober_confidence ); Py_INCREF( const_str_plain_max_prober_confidence );
    const_str_plain_max_prober = UNSTREAM_STRING( &constant_bin[ 634014 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 5, const_str_plain_max_prober ); Py_INCREF( const_str_plain_max_prober );
    const_str_plain_lower_charset_name = UNSTREAM_STRING( &constant_bin[ 634035 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 6, const_str_plain_lower_charset_name ); Py_INCREF( const_str_plain_lower_charset_name );
    const_str_plain_prober_confidence = UNSTREAM_STRING( &constant_bin[ 634018 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 7, const_str_plain_prober_confidence ); Py_INCREF( const_str_plain_prober_confidence );
    PyTuple_SET_ITEM( const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 8, const_str_plain_prober ); Py_INCREF( const_str_plain_prober );
    const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47 = UNSTREAM_STRING( &constant_bin[ 634053 ], 10, 0 );
    const_str_plain_latin1prober = UNSTREAM_STRING( &constant_bin[ 620251 ], 12, 1 );
    const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple = PyTuple_New( 1 );
    const_str_digest_414f3eb53ddda005f535853eee9ea763 = UNSTREAM_STRING( &constant_bin[ 634063 ], 5, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple, 0, const_str_digest_414f3eb53ddda005f535853eee9ea763 ); Py_INCREF( const_str_digest_414f3eb53ddda005f535853eee9ea763 );
    const_str_digest_5c857a2c1c3044c8de00afb0887f582d = UNSTREAM_STRING( &constant_bin[ 634068 ], 12, 0 );
    const_tuple_str_plain_EscCharSetProber_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EscCharSetProber_tuple, 0, const_str_plain_EscCharSetProber ); Py_INCREF( const_str_plain_EscCharSetProber );
    const_str_plain__esc_charset_prober = UNSTREAM_STRING( &constant_bin[ 634080 ], 19, 1 );
    const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple = PyTuple_New( 1 );
    const_str_digest_2ced950648ef68ce805626cb9fed7f86 = UNSTREAM_STRING( &constant_bin[ 634099 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple, 0, const_str_digest_2ced950648ef68ce805626cb9fed7f86 ); Py_INCREF( const_str_digest_2ced950648ef68ce805626cb9fed7f86 );
    const_str_digest_f412f555784f387d309a8e308f5adcf2 = UNSTREAM_STRING( &constant_bin[ 634103 ], 369, 0 );
    const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b = UNSTREAM_STRING( &constant_bin[ 634472 ], 22, 0 );
    const_str_digest_5257dff1dc44d02cd9b7b99613dac693 = UNSTREAM_STRING( &constant_bin[ 634494 ], 12, 0 );
    const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 2, const_str_plain_prober ); Py_INCREF( const_str_plain_prober );
    const_str_plain_ESC_DETECTOR = UNSTREAM_STRING( &constant_bin[ 634506 ], 12, 1 );
    const_str_plain_sbcsgroupprober = UNSTREAM_STRING( &constant_bin[ 633300 ], 15, 1 );
    const_str_digest_8faecd24d45b0f8564cecb06b07f272b = UNSTREAM_STRING( &constant_bin[ 634518 ], 230, 0 );
    const_str_digest_ba557194362b608fd158fbd8ee5a7d1f = UNSTREAM_STRING( &constant_bin[ 634748 ], 6, 0 );
    const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple, 0, const_str_digest_6e041e68342160b5c52f96a387a10185 ); Py_INCREF( const_str_digest_6e041e68342160b5c52f96a387a10185 );
    const_str_plain_BOM_BE = UNSTREAM_STRING( &constant_bin[ 634754 ], 6, 1 );
    const_str_plain__input_state = UNSTREAM_STRING( &constant_bin[ 634760 ], 12, 1 );
    const_str_plain_MINIMUM_THRESHOLD = UNSTREAM_STRING( &constant_bin[ 634772 ], 17, 1 );
    const_str_plain_mbcsgroupprober = UNSTREAM_STRING( &constant_bin[ 620802 ], 15, 1 );
    const_dict_acd3a4b6b498901da52c8b1bd56c8dab = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_language, const_str_empty );
    PyDict_SetItem( const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_encoding, const_str_digest_3feb039d342093a9fc19c97c763be56e );
    assert( PyDict_Size( const_dict_acd3a4b6b498901da52c8b1bd56c8dab ) == 3 );
    const_dict_377578fbc5d025df2ee66117cf6a77d3 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_language, const_str_empty );
    PyDict_SetItem( const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_encoding, const_str_digest_ba557194362b608fd158fbd8ee5a7d1f );
    assert( PyDict_Size( const_dict_377578fbc5d025df2ee66117cf6a77d3 ) == 3 );
    const_str_digest_fd972b6d81d84a08e896c65329848fea = UNSTREAM_STRING( &constant_bin[ 634789 ], 10, 0 );
    const_dict_a6e4a40c040c4fb964d98e1bfa97ab44 = _PyDict_NewPresized( 8 );
    const_str_digest_308b528f6f3a13b66fca5729f635fa2d = UNSTREAM_STRING( &constant_bin[ 634799 ], 10, 0 );
    const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d = UNSTREAM_STRING( &constant_bin[ 634809 ], 12, 0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_308b528f6f3a13b66fca5729f635fa2d, const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d );
    const_str_digest_24f43beb80981e610617318b075673a8 = UNSTREAM_STRING( &constant_bin[ 634821 ], 10, 0 );
    const_str_digest_dd1206f138c97d58cbf970bd79a9b717 = UNSTREAM_STRING( &constant_bin[ 634831 ], 12, 0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_24f43beb80981e610617318b075673a8, const_str_digest_dd1206f138c97d58cbf970bd79a9b717 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_fd972b6d81d84a08e896c65329848fea, const_str_digest_5c857a2c1c3044c8de00afb0887f582d );
    const_str_digest_c2ee01df52e9689b49110b353b517cca = UNSTREAM_STRING( &constant_bin[ 634843 ], 12, 0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47, const_str_digest_c2ee01df52e9689b49110b353b517cca );
    const_str_digest_09464b1871d24e20ccfd92b25c196849 = UNSTREAM_STRING( &constant_bin[ 634855 ], 10, 0 );
    const_str_digest_0924862728666b9340d0f8882b51a0c0 = UNSTREAM_STRING( &constant_bin[ 634865 ], 12, 0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_09464b1871d24e20ccfd92b25c196849, const_str_digest_0924862728666b9340d0f8882b51a0c0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c, const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_20861594150da1e43b5ee3f86b9deef6, const_str_digest_5257dff1dc44d02cd9b7b99613dac693 );
    const_str_digest_880529ee285393273b708ebc2cbdff96 = UNSTREAM_STRING( &constant_bin[ 634877 ], 11, 0 );
    PyDict_SetItem( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_880529ee285393273b708ebc2cbdff96, const_str_digest_cd9c0a308cacd46c2f9852ecd7412108 );
    assert( PyDict_Size( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44 ) == 8 );
    const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple, 0, const_str_digest_5e73c293e48712f21fb40fe58935766b ); Py_INCREF( const_str_digest_5e73c293e48712f21fb40fe58935766b );
    const_float_0_2 = UNSTREAM_FLOAT( &constant_bin[ 634888 ] );
    const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42 = UNSTREAM_STRING( &constant_bin[ 634896 ], 509, 0 );
    const_str_plain_getEffectiveLevel = UNSTREAM_STRING( &constant_bin[ 635405 ], 17, 1 );
    const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d = UNSTREAM_STRING( &constant_bin[ 635422 ], 6, 0 );
    const_dict_9e25188306b97a758ea0254cbe76ba84 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_confidence, const_float_0_0 );
    PyDict_SetItem( const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_language, Py_None );
    PyDict_SetItem( const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_encoding, Py_None );
    assert( PyDict_Size( const_dict_9e25188306b97a758ea0254cbe76ba84 ) == 3 );
    const_str_plain_done = UNSTREAM_STRING( &constant_bin[ 635065 ], 4, 1 );
    const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple = PyTuple_New( 1 );
    const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c = UNSTREAM_STRING( &constant_bin[ 635428 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple, 0, const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c ); Py_INCREF( const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c );
    const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple, 0, const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d ); Py_INCREF( const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d );
    const_str_plain__got_data = UNSTREAM_STRING( &constant_bin[ 635432 ], 9, 1 );
    const_str_digest_32f1e903be2daff919d233b4544c856e = UNSTREAM_STRING( &constant_bin[ 635441 ], 34, 0 );
    const_str_plain_WIN_BYTE_DETECTOR = UNSTREAM_STRING( &constant_bin[ 635475 ], 17, 1 );
    const_str_digest_53766747036085ecfb5d3ad939a250bd = UNSTREAM_STRING( &constant_bin[ 635492 ], 230, 0 );
    const_dict_a6d98921e43d818182447b49977eb763 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_confidence, const_float_1_0 );
    PyDict_SetItem( const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_language, const_str_empty );
    PyDict_SetItem( const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_encoding, const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b );
    assert( PyDict_Size( const_dict_a6d98921e43d818182447b49977eb763 ) == 3 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$universaldetector( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2672f5107653898fef5f309ea134041c;
static PyCodeObject *codeobj_13b54895a2d44c7d91b8244ed76843eb;
static PyCodeObject *codeobj_2c77e7e84a9d6c3d5eb3ce5c17ba46a7;
static PyCodeObject *codeobj_479797caf33b7bb9b70359a01ed399da;
static PyCodeObject *codeobj_1accf555fdd67685231b0fd7212313db;
static PyCodeObject *codeobj_5a7821ab311a9a27cb4beea72fb18cee;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9c9170000e8116836a32fb144ec2827a );
    codeobj_2672f5107653898fef5f309ea134041c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_32f1e903be2daff919d233b4544c856e, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_13b54895a2d44c7d91b8244ed76843eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UniversalDetector, 51, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 81, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_479797caf33b7bb9b70359a01ed399da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 220, const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1accf555fdd67685231b0fd7212313db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 111, const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a7821ab311a9a27cb4beea72fb18cee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 94, const_tuple_str_plain_self_str_plain_prober_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed(  );


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_4_close(  );


// The module function definitions.
static PyObject *impl_chardet$universaldetector$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_lang_filter = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 = NULL;

    struct Nuitka_FrameObject *frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7, codeobj_2c77e7e84a9d6c3d5eb3ce5c17ba46a7, module_chardet$universaldetector, sizeof(void *)+sizeof(void *) );
    frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 = cache_frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__esc_charset_prober, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyList_New( 0 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__charset_probers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_done, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__got_data, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__input_state, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__last_char, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_lang_filter;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_lang_filter, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7->m_frame.f_lineno = 90;
    tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple, 0 ) );

    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_logger, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_assattr_name_10 = Py_None;
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__has_win_bytes, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7->m_frame.f_lineno = 92;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if ( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 == cache_frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 )
    {
        Py_DECREF( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 );
    }
    cache_frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 = NULL;

    assertFrameObject( frame_2c77e7e84a9d6c3d5eb3ce5c17ba46a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_lang_filter );
    Py_DECREF( par_lang_filter );
    par_lang_filter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_lang_filter );
    Py_DECREF( par_lang_filter );
    par_lang_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_1___init__ );
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


static PyObject *impl_chardet$universaldetector$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_5a7821ab311a9a27cb4beea72fb18cee = NULL;

    struct Nuitka_FrameObject *frame_5a7821ab311a9a27cb4beea72fb18cee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a7821ab311a9a27cb4beea72fb18cee, codeobj_5a7821ab311a9a27cb4beea72fb18cee, module_chardet$universaldetector, sizeof(void *)+sizeof(void *) );
    frame_5a7821ab311a9a27cb4beea72fb18cee = cache_frame_5a7821ab311a9a27cb4beea72fb18cee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a7821ab311a9a27cb4beea72fb18cee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a7821ab311a9a27cb4beea72fb18cee ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_Copy( const_dict_9e25188306b97a758ea0254cbe76ba84 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_result, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_done, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_False;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__got_data, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_False;
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__has_win_bytes, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PURE_ASCII );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__input_state, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = const_str_empty;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__last_char, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__esc_charset_prober );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 106;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__esc_charset_prober );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_5a7821ab311a9a27cb4beea72fb18cee->m_frame.f_lineno = 107;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__charset_probers );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oo";
        exception_lineno = 108;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 108;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_prober;
        var_prober = tmp_assign_source_3;
        Py_INCREF( var_prober );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_prober;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_5a7821ab311a9a27cb4beea72fb18cee->m_frame.f_lineno = 109;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a7821ab311a9a27cb4beea72fb18cee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a7821ab311a9a27cb4beea72fb18cee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a7821ab311a9a27cb4beea72fb18cee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a7821ab311a9a27cb4beea72fb18cee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a7821ab311a9a27cb4beea72fb18cee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a7821ab311a9a27cb4beea72fb18cee,
        type_description_1,
        par_self,
        var_prober
    );


    // Release cached frame.
    if ( frame_5a7821ab311a9a27cb4beea72fb18cee == cache_frame_5a7821ab311a9a27cb4beea72fb18cee )
    {
        Py_DECREF( frame_5a7821ab311a9a27cb4beea72fb18cee );
    }
    cache_frame_5a7821ab311a9a27cb4beea72fb18cee = NULL;

    assertFrameObject( frame_5a7821ab311a9a27cb4beea72fb18cee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_2_reset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_2_reset );
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


static PyObject *impl_chardet$universaldetector$$$function_3_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_bytearray_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_1accf555fdd67685231b0fd7212313db = NULL;

    struct Nuitka_FrameObject *frame_1accf555fdd67685231b0fd7212313db;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1accf555fdd67685231b0fd7212313db, codeobj_1accf555fdd67685231b0fd7212313db, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1accf555fdd67685231b0fd7212313db = cache_frame_1accf555fdd67685231b0fd7212313db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1accf555fdd67685231b0fd7212313db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1accf555fdd67685231b0fd7212313db ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_done );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 125;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_len_arg_1 = par_byte_str;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_cond_value_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 128;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_1 = par_byte_str;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_bytearray_arg_1 = par_byte_str;

    CHECK_OBJECT( tmp_bytearray_arg_1 );
    tmp_assign_source_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_byte_str;
        assert( old != NULL );
        par_byte_str = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__got_data );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_byte_str;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_startswith );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
        exception_tb = NULL;

        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BOM_UTF8 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_1 = PyDict_Copy( const_dict_002c5c06832d6e9c8de1aa07534ece81 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_result, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 139;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_5 = par_byte_str;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_startswith );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_BOM_UTF32_LE );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
        exception_tb = NULL;

        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_BOM_UTF32_BE );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assattr_name_2 = PyDict_Copy( const_dict_377578fbc5d025df2ee66117cf6a77d3 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_result, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_6;
    branch_no_6:;
    tmp_called_instance_1 = par_byte_str;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 149;
    tmp_cond_value_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple, 0 ) );

    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 149;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assattr_name_3 = PyDict_Copy( const_dict_acd3a4b6b498901da52c8b1bd56c8dab );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 151;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    goto branch_end_7;
    branch_no_7:;
    tmp_called_instance_2 = par_byte_str;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 154;
    tmp_cond_value_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple, 0 ) );

    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 154;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_4 = PyDict_Copy( const_dict_a6d98921e43d818182447b49977eb763 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_result, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_8 = par_byte_str;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_startswith );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_BOM_LE );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codecs" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_BOM_BE );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_5 = PyDict_Copy( const_dict_3bcf27e9da95f233b135a4fa0ccd80da );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_result, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_no_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    tmp_assattr_name_6 = Py_True;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__got_data, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_result );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_encoding;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_7 = Py_True;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_done, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_10:;
    branch_no_4:;
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__input_state );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_PURE_ASCII );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 173;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 173;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_HIGH_BYTE_DETECTOR );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_byte_str;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_search, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_HIGH_BYTE );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__input_state, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__input_state );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_PURE_ASCII );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 177;
        type_description_1 = "ooo";
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ESC_DETECTOR );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_search );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__last_char );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_10 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_10 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ESC_ASCII );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__input_state, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    branch_no_13:;
    branch_end_12:;
    branch_no_11:;
    tmp_sliceslicedel_index_lower_1 = -1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_byte_str;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_assattr_name_10 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__last_char, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_22 = par_self;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__input_state );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_ESC_ASCII );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_24 = par_self;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_cond_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__esc_charset_prober );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_EscCharSetProber );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscCharSetProber );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EscCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 188;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = par_self;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_lang_filter );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__esc_charset_prober, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 188;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    branch_no_15:;
    tmp_source_name_26 = par_self;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__esc_charset_prober );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_byte_str;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_compare_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_feed, call_args );
    }

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;

        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_FOUND_IT );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assattr_name_12 = _PyDict_NewPresized( 3 );
    tmp_source_name_29 = par_self;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__esc_charset_prober );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_charset_name );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_res = PyDict_SetItem( tmp_assattr_name_12, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_30 = par_self;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__esc_charset_prober );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 193;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_get_confidence );
    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_confidence;
    tmp_res = PyDict_SetItem( tmp_assattr_name_12, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_32 = par_self;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__esc_charset_prober );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_language );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_language;
    tmp_res = PyDict_SetItem( tmp_assattr_name_12, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_assattr_target_12 = par_self;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_result, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_assattr_name_13 = Py_True;
    tmp_assattr_target_13 = par_self;

    CHECK_OBJECT( tmp_assattr_target_13 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_done, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_16:;
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_33 = par_self;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__input_state );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_HIGH_BYTE );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_35 = par_self;

    CHECK_OBJECT( tmp_source_name_35 );
    tmp_cond_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__charset_probers );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_12 );

        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_no_18;
    }
    else
    {
        goto branch_yes_18;
    }
    branch_yes_18:;
    tmp_assattr_name_14 = PyList_New( 1 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MBCSGroupProber" );
        exception_tb = NULL;

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = par_self;

    CHECK_OBJECT( tmp_source_name_36 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_lang_filter );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_1 );
    tmp_assattr_target_14 = par_self;

    CHECK_OBJECT( tmp_assattr_target_14 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain__charset_probers, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_source_name_37 = par_self;

    CHECK_OBJECT( tmp_source_name_37 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_lang_filter );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "LanguageFilter" );
        exception_tb = NULL;

        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_NON_CJK );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_13 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_cond_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_40 = par_self;

    CHECK_OBJECT( tmp_source_name_40 );
    tmp_source_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__charset_probers );
    if ( tmp_source_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_append );
    Py_DECREF( tmp_source_name_39 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SBCSGroupProber" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 208;
    tmp_args_element_name_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    tmp_source_name_42 = par_self;

    CHECK_OBJECT( tmp_source_name_42 );
    tmp_source_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__charset_probers );
    if ( tmp_source_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_append );
    Py_DECREF( tmp_source_name_41 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_Latin1Prober );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin1Prober );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin1Prober" );
        exception_tb = NULL;

        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 209;
    tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_18:;
    tmp_source_name_43 = par_self;

    CHECK_OBJECT( tmp_source_name_43 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__charset_probers );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "ooo";
        exception_lineno = 210;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
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

    tmp_compare_left_6 = exception_keeper_type_1;
    tmp_compare_right_6 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_20;
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_20:;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_prober;
        var_prober = tmp_assign_source_4;
        Py_INCREF( var_prober );
        Py_XDECREF( old );
    }

    tmp_called_instance_6 = var_prober;

    CHECK_OBJECT( tmp_called_instance_6 );
    tmp_args_element_name_11 = par_byte_str;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_compare_left_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_feed, call_args );
    }

    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;

        exception_lineno = 211;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_FOUND_IT );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 211;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );
        Py_DECREF( tmp_compare_right_7 );

        exception_lineno = 211;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assattr_name_15 = _PyDict_NewPresized( 3 );
    tmp_source_name_45 = var_prober;

    CHECK_OBJECT( tmp_source_name_45 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_charset_name );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 212;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_dict_key_4 = const_str_plain_encoding;
    tmp_res = PyDict_SetItem( tmp_assattr_name_15, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_7 = var_prober;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 213;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_get_confidence );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 213;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_dict_key_5 = const_str_plain_confidence;
    tmp_res = PyDict_SetItem( tmp_assattr_name_15, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_source_name_46 = var_prober;

    CHECK_OBJECT( tmp_source_name_46 );
    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_language );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_dict_key_6 = const_str_plain_language;
    tmp_res = PyDict_SetItem( tmp_assattr_name_15, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_assattr_target_15 = par_self;

    CHECK_OBJECT( tmp_assattr_target_15 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_result, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 212;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_15 );
    tmp_assattr_name_16 = Py_True;
    tmp_assattr_target_16 = par_self;

    CHECK_OBJECT( tmp_assattr_target_16 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_done, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_end_1;
    branch_no_21:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_47 = par_self;

    CHECK_OBJECT( tmp_source_name_47 );
    tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_WIN_BYTE_DETECTOR );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = par_byte_str;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_1accf555fdd67685231b0fd7212313db->m_frame.f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_cond_value_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_search, call_args );
    }

    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_cond_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        exception_lineno = 217;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assattr_name_17 = Py_True;
    tmp_assattr_target_17 = par_self;

    CHECK_OBJECT( tmp_assattr_target_17 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain__has_win_bytes, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_22:;
    branch_no_17:;
    branch_end_14:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1accf555fdd67685231b0fd7212313db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1accf555fdd67685231b0fd7212313db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1accf555fdd67685231b0fd7212313db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1accf555fdd67685231b0fd7212313db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1accf555fdd67685231b0fd7212313db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1accf555fdd67685231b0fd7212313db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1accf555fdd67685231b0fd7212313db,
        type_description_1,
        par_self,
        par_byte_str,
        var_prober
    );


    // Release cached frame.
    if ( frame_1accf555fdd67685231b0fd7212313db == cache_frame_1accf555fdd67685231b0fd7212313db )
    {
        Py_DECREF( frame_1accf555fdd67685231b0fd7212313db );
    }
    cache_frame_1accf555fdd67685231b0fd7212313db = NULL;

    assertFrameObject( frame_1accf555fdd67685231b0fd7212313db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_3_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_3_feed );
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


static PyObject *impl_chardet$universaldetector$$$function_4_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_charset_name = NULL;
    PyObject *var_group_prober = NULL;
    PyObject *var_confidence = NULL;
    PyObject *var_max_prober_confidence = NULL;
    PyObject *var_max_prober = NULL;
    PyObject *var_lower_charset_name = NULL;
    PyObject *var_prober_confidence = NULL;
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    static struct Nuitka_FrameObject *cache_frame_479797caf33b7bb9b70359a01ed399da = NULL;

    struct Nuitka_FrameObject *frame_479797caf33b7bb9b70359a01ed399da;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_479797caf33b7bb9b70359a01ed399da, codeobj_479797caf33b7bb9b70359a01ed399da, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_479797caf33b7bb9b70359a01ed399da = cache_frame_479797caf33b7bb9b70359a01ed399da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_479797caf33b7bb9b70359a01ed399da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_479797caf33b7bb9b70359a01ed399da ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_done );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 229;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_result );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_done, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__got_data );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 233;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_logger );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 234;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__input_state );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 237;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PURE_ASCII );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 237;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 237;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_2 = PyDict_Copy( const_dict_90f3771d827783d7c3f7c063b068451f );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_result, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 238;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__input_state );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InputState" );
        exception_tb = NULL;

        exception_lineno = 243;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_HIGH_BYTE );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 243;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 243;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_1 = Py_None;
    assert( var_prober_confidence == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_prober_confidence = tmp_assign_source_1;

    tmp_assign_source_2 = const_float_0_0;
    assert( var_max_prober_confidence == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_max_prober_confidence = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_max_prober == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_max_prober = tmp_assign_source_3;

    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__charset_probers );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooooooo";
        exception_lineno = 247;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
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

    tmp_compare_left_3 = exception_keeper_type_1;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 247;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_5:;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_prober;
        var_prober = tmp_assign_source_6;
        Py_INCREF( var_prober );
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_prober;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    goto loop_start_1;
    branch_no_6:;
    tmp_called_instance_2 = var_prober;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 250;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_confidence );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_prober_confidence;
        var_prober_confidence = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_prober_confidence;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = var_max_prober_confidence;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober_confidence" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_8 = var_prober_confidence;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_max_prober_confidence;
        var_max_prober_confidence = tmp_assign_source_8;
        Py_INCREF( var_max_prober_confidence );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = var_prober;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_max_prober;
        var_max_prober = tmp_assign_source_9;
        Py_INCREF( var_max_prober );
        Py_XDECREF( old );
    }

    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_and_left_value_1 = var_max_prober;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober" );
        exception_tb = NULL;

        exception_lineno = 254;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooooooo";
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
    tmp_compexpr_left_1 = var_max_prober_confidence;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober_confidence" );
        exception_tb = NULL;

        exception_lineno = 254;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_MINIMUM_THRESHOLD );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 254;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_11 = var_max_prober;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober" );
        exception_tb = NULL;

        exception_lineno = 255;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_charset_name );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_charset_name == NULL );
    var_charset_name = tmp_assign_source_10;

    tmp_source_name_12 = var_max_prober;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_charset_name );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 256;
    tmp_assign_source_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_lower_charset_name == NULL );
    var_lower_charset_name = tmp_assign_source_11;

    tmp_called_instance_4 = var_max_prober;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober" );
        exception_tb = NULL;

        exception_lineno = 257;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 257;
    tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_get_confidence );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_confidence == NULL );
    var_confidence = tmp_assign_source_12;

    tmp_called_instance_5 = var_lower_charset_name;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 260;
    tmp_cond_value_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple, 0 ) );

    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 260;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__has_win_bytes );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 261;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ISO_WIN_MAP );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_lower_charset_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_charset_name;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_get, call_args );
    }

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_charset_name;
        assert( old != NULL );
        var_charset_name = tmp_assign_source_13;
        Py_DECREF( old );
    }

    branch_no_10:;
    branch_no_9:;
    tmp_assattr_name_3 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = var_charset_name;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "charset_name" );
        exception_tb = NULL;

        exception_lineno = 264;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = var_confidence;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_confidence;
    tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_15 = var_max_prober;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "max_prober" );
        exception_tb = NULL;

        exception_lineno = 266;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_language );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 266;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_language;
    tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 264;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_8:;
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_logger );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 269;
    tmp_compare_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getEffectiveLevel );
    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 269;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_DEBUG );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 269;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 269;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_result );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_encoding;
    tmp_compare_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = Py_None;
    tmp_is_1 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_is_1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_logger );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 271;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__charset_probers );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_15 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 272;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_7 = exception_keeper_type_3;
    tmp_compare_right_7 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_2;
    goto branch_end_13;
    branch_no_13:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    branch_end_13:;
    // End of try:
    try_end_3:;
    tmp_assign_source_16 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_group_prober;
        var_group_prober = tmp_assign_source_16;
        Py_INCREF( var_group_prober );
        Py_XDECREF( old );
    }

    tmp_cond_value_7 = var_group_prober;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_14;
    }
    else
    {
        goto branch_yes_14;
    }
    branch_yes_14:;
    goto loop_start_2;
    branch_no_14:;
    tmp_isinstance_inst_1 = var_group_prober;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "CharSetGroupProber" );
        exception_tb = NULL;

        exception_lineno = 275;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_21 = var_group_prober;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_probers );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    // Tried code:
    tmp_value_name_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_value_name_3 );
    tmp_assign_source_18 = ITERATOR_NEXT( tmp_value_name_3 );
    if ( tmp_assign_source_18 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 276;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    goto try_end_4;
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

    tmp_compare_left_8 = exception_keeper_type_4;
    tmp_compare_right_8 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 276;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto loop_end_3;
    goto branch_end_16;
    branch_no_16:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    branch_end_16:;
    // End of try:
    try_end_4:;
    tmp_assign_source_19 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_prober;
        var_prober = tmp_assign_source_19;
        Py_INCREF( var_prober );
        Py_XDECREF( old );
    }

    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_logger );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_debug );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_3 = const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
    tmp_source_name_24 = var_prober;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_charset_name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 278;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_source_name_25 = var_prober;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_language );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 279;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_called_instance_9 = var_prober;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 280;
    tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_get_confidence );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 280;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto branch_end_15;
    branch_no_15:;
    tmp_source_name_27 = par_self;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_logger );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_debug );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_7 = const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
    tmp_source_name_28 = var_prober;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prober" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_charset_name );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 283;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_29 = var_prober;

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prober" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_language );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 284;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_instance_10 = var_prober;

    if ( tmp_called_instance_10 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prober" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 285;
    tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_get_confidence );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    frame_479797caf33b7bb9b70359a01ed399da->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_end_15:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_12:;
    branch_no_11:;
    tmp_source_name_30 = par_self;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_result );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_479797caf33b7bb9b70359a01ed399da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_479797caf33b7bb9b70359a01ed399da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_479797caf33b7bb9b70359a01ed399da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_479797caf33b7bb9b70359a01ed399da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_479797caf33b7bb9b70359a01ed399da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_479797caf33b7bb9b70359a01ed399da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_479797caf33b7bb9b70359a01ed399da,
        type_description_1,
        par_self,
        var_charset_name,
        var_group_prober,
        var_confidence,
        var_max_prober_confidence,
        var_max_prober,
        var_lower_charset_name,
        var_prober_confidence,
        var_prober
    );


    // Release cached frame.
    if ( frame_479797caf33b7bb9b70359a01ed399da == cache_frame_479797caf33b7bb9b70359a01ed399da )
    {
        Py_DECREF( frame_479797caf33b7bb9b70359a01ed399da );
    }
    cache_frame_479797caf33b7bb9b70359a01ed399da = NULL;

    assertFrameObject( frame_479797caf33b7bb9b70359a01ed399da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_4_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_charset_name );
    var_charset_name = NULL;

    Py_XDECREF( var_group_prober );
    var_group_prober = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_confidence );
    var_confidence = NULL;

    Py_XDECREF( var_max_prober_confidence );
    var_max_prober_confidence = NULL;

    Py_XDECREF( var_max_prober );
    var_max_prober = NULL;

    Py_XDECREF( var_lower_charset_name );
    var_lower_charset_name = NULL;

    Py_XDECREF( var_prober_confidence );
    var_prober_confidence = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_charset_name );
    var_charset_name = NULL;

    Py_XDECREF( var_group_prober );
    var_group_prober = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_confidence );
    var_confidence = NULL;

    Py_XDECREF( var_max_prober_confidence );
    var_max_prober_confidence = NULL;

    Py_XDECREF( var_max_prober );
    var_max_prober = NULL;

    Py_XDECREF( var_lower_charset_name );
    var_lower_charset_name = NULL;

    Py_XDECREF( var_prober_confidence );
    var_prober_confidence = NULL;

    Py_XDECREF( var_prober );
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector$$$function_4_close );
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



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c77e7e84a9d6c3d5eb3ce5c17ba46a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$universaldetector,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5a7821ab311a9a27cb4beea72fb18cee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$universaldetector,
        const_str_digest_53766747036085ecfb5d3ad939a250bd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_3_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1accf555fdd67685231b0fd7212313db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$universaldetector,
        const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_4_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_479797caf33b7bb9b70359a01ed399da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$universaldetector,
        const_str_digest_8faecd24d45b0f8564cecb06b07f272b,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$universaldetector =
{
    PyModuleDef_HEAD_INIT,
    "chardet.universaldetector",   /* m_name */
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

MOD_INIT_DECL( chardet$universaldetector )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$universaldetector );
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
    puts("chardet.universaldetector: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.universaldetector: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.universaldetector: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$universaldetector" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$universaldetector = Py_InitModule4(
        "chardet.universaldetector",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$universaldetector = PyModule_Create( &mdef_chardet$universaldetector );
#endif

    moduledict_chardet$universaldetector = MODULE_DICT( module_chardet$universaldetector );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$universaldetector );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_94822410052685fe3f09d986d30eb776, module_chardet$universaldetector );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
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
    PyObject *tmp_key_name_1;
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
    int tmp_res;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_13b54895a2d44c7d91b8244ed76843eb_2 = NULL;

    struct Nuitka_FrameObject *frame_13b54895a2d44c7d91b8244ed76843eb_2;

    struct Nuitka_FrameObject *frame_2672f5107653898fef5f309ea134041c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_UniversalDetector_51 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8cd41f9549dd4710d5b9a25284345bff;
    UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_2672f5107653898fef5f309ea134041c = MAKE_MODULE_FRAME( codeobj_2672f5107653898fef5f309ea134041c, module_chardet$universaldetector );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2672f5107653898fef5f309ea134041c );
    assert( Py_REFCNT( frame_2672f5107653898fef5f309ea134041c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_codecs;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 39;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_logging;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 40;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_re;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 41;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_plain_charsetgroupprober;
    tmp_globals_name_4 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_CharSetGroupProber_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 43;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CharSetGroupProber );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber, tmp_assign_source_6 );
    tmp_name_name_5 = const_str_plain_enums;
    tmp_globals_name_5 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 44;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_InputState );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState, tmp_assign_source_8 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_LanguageFilter );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter, tmp_assign_source_9 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ProbingState );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_10 );
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

    tmp_name_name_6 = const_str_plain_escprober;
    tmp_globals_name_6 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_EscCharSetProber_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 45;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_EscCharSetProber );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_EscCharSetProber, tmp_assign_source_11 );
    tmp_name_name_7 = const_str_plain_latin1prober;
    tmp_globals_name_7 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Latin1Prober_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 46;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Latin1Prober );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_Latin1Prober, tmp_assign_source_12 );
    tmp_name_name_8 = const_str_plain_mbcsgroupprober;
    tmp_globals_name_8 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_MBCSGroupProber_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 47;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_MBCSGroupProber );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber, tmp_assign_source_13 );
    tmp_name_name_9 = const_str_plain_sbcsgroupprober;
    tmp_globals_name_9 = (PyObject *)moduledict_chardet$universaldetector;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_SBCSGroupProber_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 48;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SBCSGroupProber );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber, tmp_assign_source_14 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_UniversalDetector_51 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_94822410052685fe3f09d986d30eb776;
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_f412f555784f387d309a8e308f5adcf2;
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_float_0_2;
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_MINIMUM_THRESHOLD, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13b54895a2d44c7d91b8244ed76843eb_2, codeobj_13b54895a2d44c7d91b8244ed76843eb, module_chardet$universaldetector, 0 );
    frame_13b54895a2d44c7d91b8244ed76843eb_2 = cache_frame_13b54895a2d44c7d91b8244ed76843eb_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13b54895a2d44c7d91b8244ed76843eb_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13b54895a2d44c7d91b8244ed76843eb_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 69;

        goto frame_exception_exit_2;
    }

    frame_13b54895a2d44c7d91b8244ed76843eb_2->m_frame.f_lineno = 69;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_HIGH_BYTE_DETECTOR, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 70;

        goto frame_exception_exit_2;
    }

    frame_13b54895a2d44c7d91b8244ed76843eb_2->m_frame.f_lineno = 70;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_ESC_DETECTOR, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 71;

        goto frame_exception_exit_2;
    }

    frame_13b54895a2d44c7d91b8244ed76843eb_2->m_frame.f_lineno = 71;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_WIN_BYTE_DETECTOR, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_2;
    }
    tmp_dictset_value = PyDict_Copy( const_dict_a6e4a40c040c4fb964d98e1bfa97ab44 );
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_ISO_WIN_MAP, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "LanguageFilter" );
        exception_tb = NULL;

        exception_lineno = 81;

        goto frame_exception_exit_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ALL );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 81;

        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13b54895a2d44c7d91b8244ed76843eb_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13b54895a2d44c7d91b8244ed76843eb_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13b54895a2d44c7d91b8244ed76843eb_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13b54895a2d44c7d91b8244ed76843eb_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13b54895a2d44c7d91b8244ed76843eb_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13b54895a2d44c7d91b8244ed76843eb_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_13b54895a2d44c7d91b8244ed76843eb_2 == cache_frame_13b54895a2d44c7d91b8244ed76843eb_2 )
    {
        Py_DECREF( frame_13b54895a2d44c7d91b8244ed76843eb_2 );
    }
    cache_frame_13b54895a2d44c7d91b8244ed76843eb_2 = NULL;

    assertFrameObject( frame_13b54895a2d44c7d91b8244ed76843eb_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset(  );
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_reset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed(  );
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_feed, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_4_close(  );
    tmp_res = PyDict_SetItem( locals_UniversalDetector_51, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_1 = locals_UniversalDetector_51;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_UniversalDetector_51 );
    locals_UniversalDetector_51 = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_UniversalDetector_51 );
    locals_UniversalDetector_51 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$universaldetector );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 51;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_15 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_15;

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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_16 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_UniversalDetector;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_2672f5107653898fef5f309ea134041c->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_17;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2672f5107653898fef5f309ea134041c );
#endif
    popFrameStack();

    assertFrameObject( frame_2672f5107653898fef5f309ea134041c );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2672f5107653898fef5f309ea134041c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2672f5107653898fef5f309ea134041c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2672f5107653898fef5f309ea134041c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2672f5107653898fef5f309ea134041c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_18 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_UniversalDetector, tmp_assign_source_18 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_chardet$universaldetector );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
