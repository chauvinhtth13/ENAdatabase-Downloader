/* Generated code for Python source for module 'requests.sessions'
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

/* The _module_requests$sessions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$sessions;
PyDictObject *moduledict_requests$sessions;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_default_port;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_8b3e93dde92996b29edc87dca601bdd4;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_0186b0786c0e31948d9081496849d709;
static PyObject *const_str_digest_5a03fab32d979e313c02d1eea965ab54;
static PyObject *const_str_plain_environ_proxies;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
static PyObject *const_str_digest_73d6d8215c67828c30ea5a0548aac597;
extern PyObject *const_str_plain_proxy;
static PyObject *const_str_digest_489820f4fee1c95447c20d7aee4bc394;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_found;
static PyObject *const_str_plain_merge_setting;
static PyObject *const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple;
static PyObject *const_str_plain_gen;
extern PyObject *const_tuple_13e73ffbff2b6baddf93809493dc996c_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple;
extern PyObject *const_str_plain_to_key_val_list;
extern PyObject *const_str_plain_get_environ_proxies;
static PyObject *const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple;
extern PyObject *const_str_plain_get_netrc_auth;
extern PyObject *const_str_plain_should_bypass_proxies;
static PyObject *const_str_plain_rebuild_proxies;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_str_plain_rewind_body;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_plain_CURL_CA_BUNDLE;
extern PyObject *const_str_plain_cookiejar_from_dict;
static PyObject *const_str_plain_new_parsed;
extern PyObject *const_str_plain_put;
static PyObject *const_str_plain_changed_port;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_plain_CaseInsensitiveDict;
static PyObject *const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_plain_merged_setting;
extern PyObject *const_tuple_str_plain_OrderedDict_tuple;
static PyObject *const_str_digest_b6f30b6068e11c9af3fe58415b3c68c7;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_delete;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain_latin1_tuple;
extern PyObject *const_str_plain_platform;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain__cookies;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
static PyObject *const_str_plain_see_other;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0;
static PyObject *const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
static PyObject *const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4;
static PyObject *const_str_plain_yield_requests;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_plain_trust_env;
static PyObject *const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
extern PyObject *const_str_plain_DEFAULT_PORTS;
extern PyObject *const_str_plain_prepare_auth;
extern PyObject *const_str_plain_requote_uri;
static PyObject *const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple;
static PyObject *const_str_plain_REQUESTS_CA_BUNDLE;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_changed_scheme;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_adapter;
static PyObject *const_dict_5a980a96e502e21a57174819267c7344;
static PyObject *const_str_plain_merged_cookies;
static PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_json;
static PyObject *const_str_plain_new_url;
extern PyObject *const_tuple_str_plain_allow_redirects_false_tuple;
extern PyObject *const_str_plain_to_native_string;
static PyObject *const_str_plain_mount;
static PyObject *const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple;
extern PyObject *const_str_plain_merge_cookies;
extern PyObject *const_str_plain_default_hooks;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_method;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
extern PyObject *const_str_plain_session;
static PyObject *const_tuple_str_plain_stream_tuple;
extern PyObject *const_str_plain_PreparedRequest;
static PyObject *const_str_digest_131435ff30698deac2d874478938fdd4;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain___getstate__;
static PyObject *const_str_plain_rebuild_auth;
extern PyObject *const_str_plain_get_auth_from_url;
static PyObject *const_str_plain_session_setting;
extern PyObject *const_str_plain_prepared_request;
static PyObject *const_str_digest_df29e6ce65bab6565825f33ca253f321;
extern PyObject *const_str_plain_setdefault;
static PyObject *const_str_digest_83853292c48098773b03eae760dcfe38;
static PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
extern PyObject *const_str_plain_timeout;
static PyObject *const_str_plain_merge_hooks;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_1c229bac7f81999111a1bfbc0984644e;
static PyObject *const_str_digest_368818c648e1111518d4140f8cd94f10;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_prepare;
extern PyObject *const_str_plain_permanent_redirect;
static PyObject *const_tuple_str_plain_Cookie_none_tuple;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_tuple_str_plain_all_tuple;
extern PyObject *const_str_plain_datetime;
static PyObject *const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_resp;
static PyObject *const_str_plain_SessionRedirectMixin;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_plain_PATCH;
extern PyObject *const_str_plain_Authorization;
extern PyObject *const_str_plain_seconds;
extern PyObject *const_str_plain_status_codes;
static PyObject *const_str_digest_4ad3bc46c34d1c60c4164b799a04b3cc;
static PyObject *const_str_digest_e5c47cda55c76ea732e8b1b107ec7f3e;
static PyObject *const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
extern PyObject *const_str_plain_request;
static PyObject *const_tuple_str_plain_CURL_CA_BUNDLE_tuple;
static PyObject *const_list_9207dd8b2644bfb46948b5120a9f9f49_list;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_POST;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
extern PyObject *const_str_plain_is_py3;
static PyObject *const_str_digest_5f2af7e954563f0f1b8598cb903357ce;
static PyObject *const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_latin1;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_win32;
static PyObject *const_tuple_false_none_true_none_none_false_tuple;
extern PyObject *const_str_plain_r;
static PyObject *const_tuple_667f897da4eaa203681d962b0447b021_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
extern PyObject *const_str_plain_moved;
static PyObject *const_str_digest_3773766f3922dc10926506cd67493626;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_38880064d8a718ac4fe097a5f0516329;
extern PyObject *const_str_plain_allow_redirects;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_preferred_clock;
static PyObject *const_str_plain_session_hooks;
static PyObject *const_tuple_str_plain_HTTPAdapter_tuple;
extern PyObject *const_str_plain_ContentDecodingError;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_28eb6d6e3c84195b87f5eda206592417;
static PyObject *const_str_plain_get_adapter;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_OPTIONS;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_plain_should_strip_auth;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_hooks;
extern PyObject *const_str_plain_default_headers;
extern PyObject *const_tuple_str_plain_no_proxy_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_utf8;
extern PyObject *const_str_plain_temporary_redirect;
extern PyObject *const_str_plain___attrs__;
static PyObject *const_str_digest_7a75f5a047e8ecb4a204038c360e59fa;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_attr;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_InvalidSchema;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_REDIRECT_STATI_tuple;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_29620facf3bef2c77de3fc57d779e3db_tuple;
static PyObject *const_tuple_490423ced48f9fd9822f38887b6bc473_tuple;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_Mapping;
extern PyObject *const_tuple_str_plain_self_str_plain_v_tuple;
extern PyObject *const_str_plain_all;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_digest_48d563b3d6be908aabde89b2dd46bb34;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_str_plain__basic_auth_str;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_decode_content;
extern PyObject *const_str_plain__replace;
static PyObject *const_str_plain_merge_environment_settings;
extern PyObject *const_tuple_str_plain_response_tuple;
static PyObject *const_str_digest_e6c29ad28e61deb465fa0cc8c7536291;
static PyObject *const_str_digest_7e68f1bdd87458491c575c9c8a14f24c;
static PyObject *const_str_digest_bb0c986a4d44a65e09f2da3af698fc66;
extern PyObject *const_str_plain_is_redirect;
extern PyObject *const_str_plain_GET;
static PyObject *const_str_plain_adapters;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852;
extern PyObject *const_str_plain_https;
static PyObject *const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
extern PyObject *const_str_plain_ChunkedEncodingError;
extern PyObject *const_str_plain_Session;
static PyObject *const_str_digest_67055a59082a8581b7a2c86a2d1c1f83;
extern PyObject *const_str_plain__body_position;
extern PyObject *const_str_plain_extract_cookies_to_jar;
static PyObject *const_str_plain_request_hooks;
extern PyObject *const_str_plain_CookieJar;
static PyObject *const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain_files;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_prepare_cookies;
static PyObject *const_str_plain_old_url;
static PyObject *const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86;
static PyObject *const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple;
extern PyObject *const_str_plain_no_proxy;
extern PyObject *const_str_plain_elapsed;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain_Cookie;
static PyObject *const_tuple_str_plain_timedelta_tuple;
static PyObject *const_str_plain_env_proxies;
extern PyObject *const_int_pos_80;
static PyObject *const_str_plain_clock;
extern PyObject *const_str_plain_username;
static PyObject *const_str_plain_dict_class;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
static PyObject *const_str_plain_resolve_redirects;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_head;
static PyObject *const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple;
static PyObject *const_str_plain_keys_to_move;
extern PyObject *const_str_plain_cookielib;
static PyObject *const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
extern PyObject *const_str_plain_proxies;
static PyObject *const_str_plain_old_parsed;
static PyObject *const_str_plain_get_redirect_target;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_plain_prepare_request;
extern PyObject *const_str_plain_patch;
extern PyObject *const_str_plain_REDIRECT_STATI;
static PyObject *const_str_plain_bypass_proxy;
extern PyObject *const_str_plain_cert;
static PyObject *const_str_plain_new_proxies;
static PyObject *const_tuple_int_pos_80_none_tuple;
static PyObject *const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_DELETE;
extern PyObject *const_int_pos_443;
extern PyObject *const_str_plain_RequestsCookieJar;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
static PyObject *const_tuple_int_pos_443_none_tuple;
extern PyObject *const_tuple_str_plain_allow_redirects_true_tuple;
static PyObject *const_str_plain_none_keys;
static PyObject *const_str_plain_request_setting;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_DEFAULT_REDIRECT_LIMIT;
static PyObject *const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple;
extern PyObject *const_str_empty;
static PyObject *const_tuple_29985b23b32f97a51730acda006bb9a6_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_dispatch_hook;
extern PyObject *const_str_plain_history;
static PyObject *const_str_plain_new_auth;
extern PyObject *const_tuple_str_plain_codes_tuple;
static PyObject *const_str_plain_perf_counter;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain__next;
static PyObject *const_str_plain_rebuild_method;
extern PyObject *const_str_plain_HTTPAdapter;
static PyObject *const_str_plain_max_redirects;
static PyObject *const_tuple_c59b47fc020fdd11d8bc5a8d1b215165_tuple;
extern PyObject *const_str_plain_params;
static PyObject *const_tuple_153dcf20c10bdd54f82262576a731803_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_147a008155143b0e10b18dcd3be84fb5;
extern PyObject *const_str_plain_fragment;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8b3e93dde92996b29edc87dca601bdd4 = UNSTREAM_STRING( &constant_bin[ 968482 ], 130, 0 );
    const_str_digest_0186b0786c0e31948d9081496849d709 = UNSTREAM_STRING( &constant_bin[ 968612 ], 70, 0 );
    const_str_digest_5a03fab32d979e313c02d1eea965ab54 = UNSTREAM_STRING( &constant_bin[ 968682 ], 373, 0 );
    const_str_plain_environ_proxies = UNSTREAM_STRING( &constant_bin[ 969055 ], 15, 1 );
    const_str_digest_73d6d8215c67828c30ea5a0548aac597 = UNSTREAM_STRING( &constant_bin[ 969070 ], 346, 0 );
    const_str_digest_489820f4fee1c95447c20d7aee4bc394 = UNSTREAM_STRING( &constant_bin[ 969416 ], 232, 0 );
    const_str_plain_merge_setting = UNSTREAM_STRING( &constant_bin[ 969648 ], 13, 1 );
    const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple = PyTuple_New( 1 );
    const_str_plain_REQUESTS_CA_BUNDLE = UNSTREAM_STRING( &constant_bin[ 969661 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0, const_str_plain_REQUESTS_CA_BUNDLE ); Py_INCREF( const_str_plain_REQUESTS_CA_BUNDLE );
    const_str_plain_gen = UNSTREAM_STRING( &constant_bin[ 1774 ], 3, 1 );
    const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 3, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_new_auth = UNSTREAM_STRING( &constant_bin[ 969679 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 5, const_str_plain_new_auth ); Py_INCREF( const_str_plain_new_auth );
    const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 2, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 3, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 4, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain_merged_cookies = UNSTREAM_STRING( &constant_bin[ 969687 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 5, const_str_plain_merged_cookies ); Py_INCREF( const_str_plain_merged_cookies );
    const_str_plain_rebuild_proxies = UNSTREAM_STRING( &constant_bin[ 969701 ], 15, 1 );
    const_str_plain_CURL_CA_BUNDLE = UNSTREAM_STRING( &constant_bin[ 969716 ], 14, 1 );
    const_str_plain_new_parsed = UNSTREAM_STRING( &constant_bin[ 969730 ], 10, 1 );
    const_str_plain_changed_port = UNSTREAM_STRING( &constant_bin[ 969740 ], 12, 1 );
    const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple = PyTuple_New( 8 );
    const_str_plain_request_setting = UNSTREAM_STRING( &constant_bin[ 969752 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 0, const_str_plain_request_setting ); Py_INCREF( const_str_plain_request_setting );
    const_str_plain_session_setting = UNSTREAM_STRING( &constant_bin[ 969767 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 1, const_str_plain_session_setting ); Py_INCREF( const_str_plain_session_setting );
    const_str_plain_dict_class = UNSTREAM_STRING( &constant_bin[ 969782 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 3, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_none_keys = UNSTREAM_STRING( &constant_bin[ 969792 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 5, const_str_plain_none_keys ); Py_INCREF( const_str_plain_none_keys );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 6, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_merged_setting = UNSTREAM_STRING( &constant_bin[ 969801 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 7, const_str_plain_merged_setting ); Py_INCREF( const_str_plain_merged_setting );
    const_str_digest_b6f30b6068e11c9af3fe58415b3c68c7 = UNSTREAM_STRING( &constant_bin[ 969815 ], 22, 0 );
    const_str_plain_see_other = UNSTREAM_STRING( &constant_bin[ 969837 ], 9, 1 );
    const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0 = UNSTREAM_STRING( &constant_bin[ 969846 ], 126, 0 );
    const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 7, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 12, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 13, Py_None ); Py_INCREF( Py_None );
    const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4 = UNSTREAM_STRING( &constant_bin[ 969972 ], 230, 0 );
    const_str_plain_yield_requests = UNSTREAM_STRING( &constant_bin[ 970202 ], 14, 1 );
    const_str_plain_trust_env = UNSTREAM_STRING( &constant_bin[ 970216 ], 9, 1 );
    const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 0, const_str_plain_requote_uri ); Py_INCREF( const_str_plain_requote_uri );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 1, const_str_plain_get_environ_proxies ); Py_INCREF( const_str_plain_get_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 2, const_str_plain_get_netrc_auth ); Py_INCREF( const_str_plain_get_netrc_auth );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 3, const_str_plain_should_bypass_proxies ); Py_INCREF( const_str_plain_should_bypass_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 4, const_str_plain_get_auth_from_url ); Py_INCREF( const_str_plain_get_auth_from_url );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 5, const_str_plain_rewind_body ); Py_INCREF( const_str_plain_rewind_body );
    const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 0, const_str_plain_to_key_val_list ); Py_INCREF( const_str_plain_to_key_val_list );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 1, const_str_plain_default_headers ); Py_INCREF( const_str_plain_default_headers );
    PyTuple_SET_ITEM( const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple, 2, const_str_plain_DEFAULT_PORTS ); Py_INCREF( const_str_plain_DEFAULT_PORTS );
    const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_changed_scheme = UNSTREAM_STRING( &constant_bin[ 970225 ], 14, 1 );
    const_dict_5a980a96e502e21a57174819267c7344 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5a980a96e502e21a57174819267c7344, const_str_plain_yield_requests, Py_True );
    assert( PyDict_Size( const_dict_5a980a96e502e21a57174819267c7344 ) == 1 );
    const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0, const_str_digest_13971ae58b983978540cbb4bbf3b1360 ); Py_INCREF( const_str_digest_13971ae58b983978540cbb4bbf3b1360 );
    const_str_plain_new_url = UNSTREAM_STRING( &constant_bin[ 970239 ], 7, 1 );
    const_str_plain_mount = UNSTREAM_STRING( &constant_bin[ 53065 ], 5, 1 );
    const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 2, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    const_str_plain_keys_to_move = UNSTREAM_STRING( &constant_bin[ 970246 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 3, const_str_plain_keys_to_move ); Py_INCREF( const_str_plain_keys_to_move );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_7c06a402579f6f9d9db7f3e04da983fc = UNSTREAM_STRING( &constant_bin[ 636306 ], 7, 0 );
    const_tuple_str_plain_stream_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_digest_131435ff30698deac2d874478938fdd4 = UNSTREAM_STRING( &constant_bin[ 970258 ], 432, 0 );
    const_str_plain_rebuild_auth = UNSTREAM_STRING( &constant_bin[ 970690 ], 12, 1 );
    const_str_digest_df29e6ce65bab6565825f33ca253f321 = UNSTREAM_STRING( &constant_bin[ 970702 ], 456, 0 );
    const_str_digest_83853292c48098773b03eae760dcfe38 = UNSTREAM_STRING( &constant_bin[ 971158 ], 66, 0 );
    const_str_digest_504b77692b694460b8c25198a52c83ba = UNSTREAM_STRING( &constant_bin[ 30687 ], 8, 0 );
    const_str_plain_merge_hooks = UNSTREAM_STRING( &constant_bin[ 971224 ], 11, 1 );
    const_str_digest_1c229bac7f81999111a1bfbc0984644e = UNSTREAM_STRING( &constant_bin[ 971235 ], 233, 0 );
    const_str_digest_368818c648e1111518d4140f8cd94f10 = UNSTREAM_STRING( &constant_bin[ 971468 ], 26, 0 );
    const_tuple_str_plain_Cookie_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cookie_none_tuple, 0, const_str_plain_Cookie ); Py_INCREF( const_str_plain_Cookie );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cookie_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5 = UNSTREAM_STRING( &constant_bin[ 971494 ], 94, 0 );
    const_str_plain_SessionRedirectMixin = UNSTREAM_STRING( &constant_bin[ 971588 ], 20, 1 );
    const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple, 2, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple, 3, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_plain_PATCH = UNSTREAM_STRING( &constant_bin[ 944469 ], 5, 1 );
    const_str_digest_4ad3bc46c34d1c60c4164b799a04b3cc = UNSTREAM_STRING( &constant_bin[ 971608 ], 384, 0 );
    const_str_digest_e5c47cda55c76ea732e8b1b107ec7f3e = UNSTREAM_STRING( &constant_bin[ 971992 ], 42, 0 );
    const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd = UNSTREAM_STRING( &constant_bin[ 972034 ], 55, 0 );
    const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03 = UNSTREAM_STRING( &constant_bin[ 972089 ], 35, 0 );
    const_tuple_str_plain_CURL_CA_BUNDLE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0, const_str_plain_CURL_CA_BUNDLE ); Py_INCREF( const_str_plain_CURL_CA_BUNDLE );
    const_list_9207dd8b2644bfb46948b5120a9f9f49_list = PyList_New( 12 );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 1, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 2, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 3, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 4, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 5, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 6, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 7, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_adapters = UNSTREAM_STRING( &constant_bin[ 935759 ], 8, 1 );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 8, const_str_plain_adapters ); Py_INCREF( const_str_plain_adapters );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 9, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 10, const_str_plain_trust_env ); Py_INCREF( const_str_plain_trust_env );
    const_str_plain_max_redirects = UNSTREAM_STRING( &constant_bin[ 972124 ], 13, 1 );
    PyList_SET_ITEM( const_list_9207dd8b2644bfb46948b5120a9f9f49_list, 11, const_str_plain_max_redirects ); Py_INCREF( const_str_plain_max_redirects );
    const_str_plain_POST = UNSTREAM_STRING( &constant_bin[ 668740 ], 4, 1 );
    const_str_digest_5f2af7e954563f0f1b8598cb903357ce = UNSTREAM_STRING( &constant_bin[ 972137 ], 375, 0 );
    const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 3, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 6, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 7, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    const_str_plain_env_proxies = UNSTREAM_STRING( &constant_bin[ 972512 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 8, const_str_plain_env_proxies ); Py_INCREF( const_str_plain_env_proxies );
    PyTuple_SET_ITEM( const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 9, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_tuple_false_none_true_none_none_false_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_tuple_667f897da4eaa203681d962b0447b021_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 0, const_str_digest_3c9527fc53ea2272c2080ca035d6631c ); Py_INCREF( const_str_digest_3c9527fc53ea2272c2080ca035d6631c );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 1, const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 ); Py_INCREF( const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 2, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    const_str_digest_3773766f3922dc10926506cd67493626 = UNSTREAM_STRING( &constant_bin[ 972523 ], 233, 0 );
    const_str_digest_38880064d8a718ac4fe097a5f0516329 = UNSTREAM_STRING( &constant_bin[ 972756 ], 149, 0 );
    const_str_plain_preferred_clock = UNSTREAM_STRING( &constant_bin[ 972905 ], 15, 1 );
    const_str_plain_session_hooks = UNSTREAM_STRING( &constant_bin[ 972920 ], 13, 1 );
    const_tuple_str_plain_HTTPAdapter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPAdapter_tuple, 0, const_str_plain_HTTPAdapter ); Py_INCREF( const_str_plain_HTTPAdapter );
    const_str_digest_28eb6d6e3c84195b87f5eda206592417 = UNSTREAM_STRING( &constant_bin[ 972933 ], 229, 0 );
    const_str_plain_get_adapter = UNSTREAM_STRING( &constant_bin[ 973162 ], 11, 1 );
    const_str_plain_should_strip_auth = UNSTREAM_STRING( &constant_bin[ 973173 ], 17, 1 );
    const_str_digest_7a75f5a047e8ecb4a204038c360e59fa = UNSTREAM_STRING( &constant_bin[ 973190 ], 2424, 0 );
    const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_REDIRECT_STATI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REDIRECT_STATI_tuple, 0, const_str_plain_REDIRECT_STATI ); Py_INCREF( const_str_plain_REDIRECT_STATI );
    const_tuple_29620facf3bef2c77de3fc57d779e3db_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 975614 ], 245 );
    const_tuple_490423ced48f9fd9822f38887b6bc473_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 3, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 4, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 5, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 6, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 7, const_str_plain_elapsed ); Py_INCREF( const_str_plain_elapsed );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 8, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 9, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 10, const_str_plain_allow_redirects ); Py_INCREF( const_str_plain_allow_redirects );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 11, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 12, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_digest_48d563b3d6be908aabde89b2dd46bb34 = UNSTREAM_STRING( &constant_bin[ 975859 ], 73, 0 );
    const_str_plain_merge_environment_settings = UNSTREAM_STRING( &constant_bin[ 975932 ], 26, 1 );
    const_str_digest_e6c29ad28e61deb465fa0cc8c7536291 = UNSTREAM_STRING( &constant_bin[ 975958 ], 20, 0 );
    const_str_digest_7e68f1bdd87458491c575c9c8a14f24c = UNSTREAM_STRING( &constant_bin[ 975978 ], 43, 0 );
    const_str_digest_bb0c986a4d44a65e09f2da3af698fc66 = UNSTREAM_STRING( &constant_bin[ 976021 ], 395, 0 );
    const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852 = UNSTREAM_STRING( &constant_bin[ 976416 ], 119, 0 );
    const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 0, const_str_plain_Request ); Py_INCREF( const_str_plain_Request );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 1, const_str_plain_PreparedRequest ); Py_INCREF( const_str_plain_PreparedRequest );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 2, const_str_plain_DEFAULT_REDIRECT_LIMIT ); Py_INCREF( const_str_plain_DEFAULT_REDIRECT_LIMIT );
    const_str_digest_67055a59082a8581b7a2c86a2d1c1f83 = UNSTREAM_STRING( &constant_bin[ 976535 ], 232, 0 );
    const_str_plain_request_hooks = UNSTREAM_STRING( &constant_bin[ 976767 ], 13, 1 );
    const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 3, const_str_plain_json ); Py_INCREF( const_str_plain_json );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_old_url = UNSTREAM_STRING( &constant_bin[ 976780 ], 7, 1 );
    const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86, const_str_plain_decode_content, Py_False );
    assert( PyDict_Size( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 ) == 1 );
    const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    const_tuple_str_plain_timedelta_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_timedelta_tuple, 0, const_str_plain_timedelta ); Py_INCREF( const_str_plain_timedelta );
    const_str_plain_clock = UNSTREAM_STRING( &constant_bin[ 972915 ], 5, 1 );
    const_str_plain_resolve_redirects = UNSTREAM_STRING( &constant_bin[ 966753 ], 17, 1 );
    const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 1, const_str_plain_old_url ); Py_INCREF( const_str_plain_old_url );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 2, const_str_plain_new_url ); Py_INCREF( const_str_plain_new_url );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 3, const_str_plain_new_parsed ); Py_INCREF( const_str_plain_new_parsed );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 4, const_str_plain_default_port ); Py_INCREF( const_str_plain_default_port );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 5, const_str_plain_changed_port ); Py_INCREF( const_str_plain_changed_port );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 6, const_str_plain_changed_scheme ); Py_INCREF( const_str_plain_changed_scheme );
    const_str_plain_old_parsed = UNSTREAM_STRING( &constant_bin[ 976787 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 7, const_str_plain_old_parsed ); Py_INCREF( const_str_plain_old_parsed );
    const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 0, const_str_plain_TooManyRedirects ); Py_INCREF( const_str_plain_TooManyRedirects );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 1, const_str_plain_InvalidSchema ); Py_INCREF( const_str_plain_InvalidSchema );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 2, const_str_plain_ChunkedEncodingError ); Py_INCREF( const_str_plain_ChunkedEncodingError );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 3, const_str_plain_ContentDecodingError ); Py_INCREF( const_str_plain_ContentDecodingError );
    const_str_plain_get_redirect_target = UNSTREAM_STRING( &constant_bin[ 976797 ], 19, 1 );
    const_str_plain_prepare_request = UNSTREAM_STRING( &constant_bin[ 976816 ], 15, 1 );
    const_str_plain_bypass_proxy = UNSTREAM_STRING( &constant_bin[ 976831 ], 12, 1 );
    const_str_plain_new_proxies = UNSTREAM_STRING( &constant_bin[ 976843 ], 11, 1 );
    const_tuple_int_pos_80_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_80_none_tuple, 0, const_int_pos_80 ); Py_INCREF( const_int_pos_80 );
    PyTuple_SET_ITEM( const_tuple_int_pos_80_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_88099abfc2d744feb222ef53bae67000_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 0, const_str_plain_cookiejar_from_dict ); Py_INCREF( const_str_plain_cookiejar_from_dict );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 1, const_str_plain_extract_cookies_to_jar ); Py_INCREF( const_str_plain_extract_cookies_to_jar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 2, const_str_plain_RequestsCookieJar ); Py_INCREF( const_str_plain_RequestsCookieJar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 3, const_str_plain_merge_cookies ); Py_INCREF( const_str_plain_merge_cookies );
    const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 0, const_str_plain_default_hooks ); Py_INCREF( const_str_plain_default_hooks );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 1, const_str_plain_dispatch_hook ); Py_INCREF( const_str_plain_dispatch_hook );
    const_tuple_int_pos_443_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_443_none_tuple, 0, const_int_pos_443 ); Py_INCREF( const_int_pos_443 );
    PyTuple_SET_ITEM( const_tuple_int_pos_443_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 0, const_str_plain_request_hooks ); Py_INCREF( const_str_plain_request_hooks );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 1, const_str_plain_session_hooks ); Py_INCREF( const_str_plain_session_hooks );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    const_tuple_29985b23b32f97a51730acda006bb9a6_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 3, const_str_plain_new_proxies ); Py_INCREF( const_str_plain_new_proxies );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 4, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 5, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 6, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 7, const_str_plain_environ_proxies ); Py_INCREF( const_str_plain_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 8, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 9, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 10, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 11, const_str_plain_bypass_proxy ); Py_INCREF( const_str_plain_bypass_proxy );
    PyTuple_SET_ITEM( const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 12, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    const_str_plain_perf_counter = UNSTREAM_STRING( &constant_bin[ 976854 ], 12, 1 );
    const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1 = UNSTREAM_STRING( &constant_bin[ 976866 ], 169, 0 );
    const_str_plain_rebuild_method = UNSTREAM_STRING( &constant_bin[ 977035 ], 14, 1 );
    const_tuple_c59b47fc020fdd11d8bc5a8d1b215165_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 977049 ], 268 );
    const_tuple_153dcf20c10bdd54f82262576a731803_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_153dcf20c10bdd54f82262576a731803_tuple, 0, const_str_plain_cookielib ); Py_INCREF( const_str_plain_cookielib );
    PyTuple_SET_ITEM( const_tuple_153dcf20c10bdd54f82262576a731803_tuple, 1, const_str_plain_is_py3 ); Py_INCREF( const_str_plain_is_py3 );
    PyTuple_SET_ITEM( const_tuple_153dcf20c10bdd54f82262576a731803_tuple, 2, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    PyTuple_SET_ITEM( const_tuple_153dcf20c10bdd54f82262576a731803_tuple, 3, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_153dcf20c10bdd54f82262576a731803_tuple, 4, const_str_plain_Mapping ); Py_INCREF( const_str_plain_Mapping );
    const_str_digest_147a008155143b0e10b18dcd3be84fb5 = UNSTREAM_STRING( &constant_bin[ 969297 ], 17, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$sessions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_13dfae501303bd529d9e321c6709f042;
static PyCodeObject *codeobj_181911aaa7b425454401c0168d356ce3;
static PyCodeObject *codeobj_f364db0fd7645476044828c340eb9110;
static PyCodeObject *codeobj_471450d6e6875e6754cac73575d2dcf4;
static PyCodeObject *codeobj_58fbde5f52c09d5f95b0f9b7385d749e;
static PyCodeObject *codeobj_0e397d7e6480d1d9cc7a8ef11ffbb605;
static PyCodeObject *codeobj_b868af187788df8df15a296201f5a11f;
static PyCodeObject *codeobj_bd1437daabd3aaf03f38a1297715cc00;
static PyCodeObject *codeobj_ab48f331e4c556d9601aadd3982dd1ed;
static PyCodeObject *codeobj_bd34d8a583fc23da776fb361ead16bb3;
static PyCodeObject *codeobj_d9a5bb2e4536734a06b527f3e141cbe9;
static PyCodeObject *codeobj_95e24830b853c5ddde3016e25b55cf6d;
static PyCodeObject *codeobj_747c59d3c52723c34f114a914f50e04d;
static PyCodeObject *codeobj_b0d5a00aafd3340b2ced07dc7e18a246;
static PyCodeObject *codeobj_871c4f66988e7a26d52e776d4144def1;
static PyCodeObject *codeobj_f7f1b78c242d68948f6ac7c6d2cd14e3;
static PyCodeObject *codeobj_ec6a20f3563584f22a81ec09b8e88e4f;
static PyCodeObject *codeobj_268ad4bcde567788f3612f7926981f98;
static PyCodeObject *codeobj_05a2b7d73059c9a7a3f7d026e8a46dd2;
static PyCodeObject *codeobj_d05e57294edb17cdfe3ba579a70dc77c;
static PyCodeObject *codeobj_b3fad0de3d2fab85695694d43f59dd04;
static PyCodeObject *codeobj_e118af105a2b1171517dd70954949588;
static PyCodeObject *codeobj_9b10d3a7f6482093180f3a07ac9ba5ac;
static PyCodeObject *codeobj_43cd56918363bee914fbc708d8519cc4;
static PyCodeObject *codeobj_e49fdcf5d8a56b475b147f2b8155a1a7;
static PyCodeObject *codeobj_a53bd476806289c76327c26a82fee9a8;
static PyCodeObject *codeobj_957ea430b49263a9612c15f576e35b03;
static PyCodeObject *codeobj_c51799fb6a70791e326c5d4a2cbc170f;
static PyCodeObject *codeobj_67209afde685ce814bb66bfcc58e5269;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e6c29ad28e61deb465fa0cc8c7536291 );
    codeobj_13dfae501303bd529d9e321c6709f042 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_368818c648e1111518d4140f8cd94f10, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_181911aaa7b425454401c0168d356ce3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 424, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f364db0fd7645476044828c340eb9110 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 427, const_tuple_str_plain_self_str_plain_args_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_471450d6e6875e6754cac73575d2dcf4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 760, const_tuple_str_plain_self_str_plain_state_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_58fbde5f52c09d5f95b0f9b7385d749e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 362, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0e397d7e6480d1d9cc7a8ef11ffbb605 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 764, const_tuple_13e73ffbff2b6baddf93809493dc996c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b868af187788df8df15a296201f5a11f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 744, const_tuple_str_plain_self_str_plain_v_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd1437daabd3aaf03f38a1297715cc00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_delete, 616, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ab48f331e4c556d9601aadd3982dd1ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 546, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_bd34d8a583fc23da776fb361ead16bb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_adapter, 730, const_tuple_aa87dce6bc8d4a6876e49444041e97a4_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9a5bb2e4536734a06b527f3e141cbe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_redirect_target, 98, const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95e24830b853c5ddde3016e25b55cf6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_head, 568, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_747c59d3c52723c34f114a914f50e04d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_environment_settings, 701, const_tuple_bd21be27f36f7d089b1862e03811a3bf_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0d5a00aafd3340b2ced07dc7e18a246 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_hooks, 81, const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_871c4f66988e7a26d52e776d4144def1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_setting, 50, const_tuple_d9cfcf1a0de6fda69e538d28f659ec15_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7f1b78c242d68948f6ac7c6d2cd14e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mount, 749, const_tuple_04b0f1aa15d98fb6bda929be13979847_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec6a20f3563584f22a81ec09b8e88e4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 557, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_268ad4bcde567788f3612f7926981f98 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch, 604, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_05a2b7d73059c9a7a3f7d026e8a46dd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_post, 579, const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d05e57294edb17cdfe3ba579a70dc77c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepare_request, 430, const_tuple_155a02be0fde54405ba7e8ab714b8f6f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3fad0de3d2fab85695694d43f59dd04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 592, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e118af105a2b1171517dd70954949588 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_auth, 254, const_tuple_e82e01efd353cffebeaefc7d27ba1a4e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b10d3a7f6482093180f3a07ac9ba5ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_method, 314, const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43cd56918363bee914fbc708d8519cc4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_proxies, 273, const_tuple_29985b23b32f97a51730acda006bb9a6_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e49fdcf5d8a56b475b147f2b8155a1a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 470, const_tuple_29620facf3bef2c77de3fc57d779e3db_tuple, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a53bd476806289c76327c26a82fee9a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_redirects, 144, const_tuple_c59b47fc020fdd11d8bc5a8d1b215165_tuple, 9, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_957ea430b49263a9612c15f576e35b03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 626, const_tuple_490423ced48f9fd9822f38887b6bc473_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c51799fb6a70791e326c5d4a2cbc170f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_session, 769, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67209afde685ce814bb66bfcc58e5269 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_should_strip_auth, 119, const_tuple_84ba78b2a3292c04b66648bd3ecba317_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_get(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_options(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_head(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_post( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_patch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_delete(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_send(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_close(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25_mount(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_28_session(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___init__(  );


// The module function definitions.
static PyObject *impl_requests$sessions$$$function_1_merge_setting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_setting = python_pars[ 0 ];
    PyObject *par_session_setting = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_none_keys = NULL;
    PyObject *var_key = NULL;
    PyObject *var_merged_setting = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_871c4f66988e7a26d52e776d4144def1 = NULL;

    struct Nuitka_FrameObject *frame_871c4f66988e7a26d52e776d4144def1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_session_setting;

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
    tmp_return_value = par_request_setting;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_1:;
    tmp_compare_left_2 = par_request_setting;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_session_setting;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_2:;
    MAKE_OR_REUSE_FRAME( cache_frame_871c4f66988e7a26d52e776d4144def1, codeobj_871c4f66988e7a26d52e776d4144def1, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_871c4f66988e7a26d52e776d4144def1 = cache_frame_871c4f66988e7a26d52e776d4144def1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_871c4f66988e7a26d52e776d4144def1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_871c4f66988e7a26d52e776d4144def1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_session_setting;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Mapping" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
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
    tmp_isinstance_inst_2 = par_request_setting;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Mapping" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
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


        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = par_request_setting;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_called_name_1 = par_dict_class;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_key_val_list" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_session_setting;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_871c4f66988e7a26d52e776d4144def1->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_871c4f66988e7a26d52e776d4144def1->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_merged_setting == NULL );
    var_merged_setting = tmp_assign_source_1;

    tmp_source_name_1 = var_merged_setting;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_key_val_list" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_request_setting;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_871c4f66988e7a26d52e776d4144def1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_871c4f66988e7a26d52e776d4144def1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_1 = var_merged_setting;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_871c4f66988e7a26d52e776d4144def1->m_frame.f_lineno = 74;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_list_contraction_1__$0;

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


        type_description_1 = "oooooooo";
        exception_lineno = 74;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
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

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_4:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooooo";
                exception_lineno = 74;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_9;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_10;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_4 = var_v;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = var_k;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_none_keys == NULL );
    var_none_keys = tmp_assign_source_2;

    tmp_iter_arg_3 = var_none_keys;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_12 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_12 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 75;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_5 = exception_keeper_type_5;
    tmp_compare_right_5 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    goto loop_end_2;
    goto branch_end_6;
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    branch_end_6:;
    // End of try:
    try_end_4:;
    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_13;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_delsubscr_target_1 = var_merged_setting;

    CHECK_OBJECT( tmp_delsubscr_target_1 );
    tmp_delsubscr_subscript_1 = var_key;

    CHECK_OBJECT( tmp_delsubscr_subscript_1 );
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_871c4f66988e7a26d52e776d4144def1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_871c4f66988e7a26d52e776d4144def1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_871c4f66988e7a26d52e776d4144def1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_871c4f66988e7a26d52e776d4144def1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_871c4f66988e7a26d52e776d4144def1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_871c4f66988e7a26d52e776d4144def1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_871c4f66988e7a26d52e776d4144def1,
        type_description_1,
        par_request_setting,
        par_session_setting,
        par_dict_class,
        var_k,
        var_v,
        var_none_keys,
        var_key,
        var_merged_setting
    );


    // Release cached frame.
    if ( frame_871c4f66988e7a26d52e776d4144def1 == cache_frame_871c4f66988e7a26d52e776d4144def1 )
    {
        Py_DECREF( frame_871c4f66988e7a26d52e776d4144def1 );
    }
    cache_frame_871c4f66988e7a26d52e776d4144def1 = NULL;

    assertFrameObject( frame_871c4f66988e7a26d52e776d4144def1 );

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

    tmp_return_value = var_merged_setting;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_request_setting );
    Py_DECREF( par_request_setting );
    par_request_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_session_setting );
    Py_DECREF( par_session_setting );
    par_session_setting = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_request_setting );
    Py_DECREF( par_request_setting );
    par_request_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    CHECK_OBJECT( (PyObject *)par_session_setting );
    Py_DECREF( par_session_setting );
    par_session_setting = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
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


static PyObject *impl_requests$sessions$$$function_2_merge_hooks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_hooks = python_pars[ 0 ];
    PyObject *par_session_hooks = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b0d5a00aafd3340b2ced07dc7e18a246 = NULL;

    struct Nuitka_FrameObject *frame_b0d5a00aafd3340b2ced07dc7e18a246;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b0d5a00aafd3340b2ced07dc7e18a246, codeobj_b0d5a00aafd3340b2ced07dc7e18a246, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b0d5a00aafd3340b2ced07dc7e18a246 = cache_frame_b0d5a00aafd3340b2ced07dc7e18a246;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b0d5a00aafd3340b2ced07dc7e18a246 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b0d5a00aafd3340b2ced07dc7e18a246 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_session_hooks;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_instance_1 = par_session_hooks;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b0d5a00aafd3340b2ced07dc7e18a246->m_frame.f_lineno = 87;
    tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = PyList_New( 0 );
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
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

        exception_lineno = 87;
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
    tmp_return_value = par_request_hooks;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compexpr_left_3 = par_request_hooks;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = Py_None;
    tmp_or_left_value_2 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    assert( !(tmp_or_left_truth_2 == -1) );
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_called_instance_2 = par_request_hooks;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_b0d5a00aafd3340b2ced07dc7e18a246->m_frame.f_lineno = 90;
    tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = PyList_New( 0 );
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_cond_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_session_hooks;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_request_hooks;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_session_hooks;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_dict_class;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b0d5a00aafd3340b2ced07dc7e18a246->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0d5a00aafd3340b2ced07dc7e18a246 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0d5a00aafd3340b2ced07dc7e18a246 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0d5a00aafd3340b2ced07dc7e18a246 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b0d5a00aafd3340b2ced07dc7e18a246, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b0d5a00aafd3340b2ced07dc7e18a246->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b0d5a00aafd3340b2ced07dc7e18a246, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0d5a00aafd3340b2ced07dc7e18a246,
        type_description_1,
        par_request_hooks,
        par_session_hooks,
        par_dict_class
    );


    // Release cached frame.
    if ( frame_b0d5a00aafd3340b2ced07dc7e18a246 == cache_frame_b0d5a00aafd3340b2ced07dc7e18a246 )
    {
        Py_DECREF( frame_b0d5a00aafd3340b2ced07dc7e18a246 );
    }
    cache_frame_b0d5a00aafd3340b2ced07dc7e18a246 = NULL;

    assertFrameObject( frame_b0d5a00aafd3340b2ced07dc7e18a246 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_session_hooks );
    Py_DECREF( par_session_hooks );
    par_session_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_request_hooks );
    Py_DECREF( par_request_hooks );
    par_request_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

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

    CHECK_OBJECT( (PyObject *)par_session_hooks );
    Py_DECREF( par_session_hooks );
    par_session_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_request_hooks );
    Py_DECREF( par_request_hooks );
    par_request_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_dict_class );
    Py_DECREF( par_dict_class );
    par_dict_class = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
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


static PyObject *impl_requests$sessions$$$function_3_get_redirect_target( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_resp = python_pars[ 1 ];
    PyObject *var_location = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_d9a5bb2e4536734a06b527f3e141cbe9 = NULL;

    struct Nuitka_FrameObject *frame_d9a5bb2e4536734a06b527f3e141cbe9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9a5bb2e4536734a06b527f3e141cbe9, codeobj_d9a5bb2e4536734a06b527f3e141cbe9, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9a5bb2e4536734a06b527f3e141cbe9 = cache_frame_d9a5bb2e4536734a06b527f3e141cbe9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9a5bb2e4536734a06b527f3e141cbe9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9a5bb2e4536734a06b527f3e141cbe9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_resp;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_redirect );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 106;
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
    tmp_source_name_2 = par_resp;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_location;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_location == NULL );
    var_location = tmp_assign_source_1;

    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3 );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3 );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_py3" );
        exception_tb = NULL;

        exception_lineno = 114;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooo";
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
    tmp_called_instance_1 = var_location;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d9a5bb2e4536734a06b527f3e141cbe9->m_frame.f_lineno = 115;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_location;
        assert( old != NULL );
        var_location = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_location;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_utf8;
    frame_d9a5bb2e4536734a06b527f3e141cbe9->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a5bb2e4536734a06b527f3e141cbe9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a5bb2e4536734a06b527f3e141cbe9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a5bb2e4536734a06b527f3e141cbe9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9a5bb2e4536734a06b527f3e141cbe9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9a5bb2e4536734a06b527f3e141cbe9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9a5bb2e4536734a06b527f3e141cbe9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9a5bb2e4536734a06b527f3e141cbe9,
        type_description_1,
        par_self,
        par_resp,
        var_location
    );


    // Release cached frame.
    if ( frame_d9a5bb2e4536734a06b527f3e141cbe9 == cache_frame_d9a5bb2e4536734a06b527f3e141cbe9 )
    {
        Py_DECREF( frame_d9a5bb2e4536734a06b527f3e141cbe9 );
    }
    cache_frame_d9a5bb2e4536734a06b527f3e141cbe9 = NULL;

    assertFrameObject( frame_d9a5bb2e4536734a06b527f3e141cbe9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

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

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
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


static PyObject *impl_requests$sessions$$$function_4_should_strip_auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_old_url = python_pars[ 1 ];
    PyObject *par_new_url = python_pars[ 2 ];
    PyObject *var_new_parsed = NULL;
    PyObject *var_default_port = NULL;
    PyObject *var_changed_port = NULL;
    PyObject *var_changed_scheme = NULL;
    PyObject *var_old_parsed = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_67209afde685ce814bb66bfcc58e5269 = NULL;

    struct Nuitka_FrameObject *frame_67209afde685ce814bb66bfcc58e5269;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67209afde685ce814bb66bfcc58e5269, codeobj_67209afde685ce814bb66bfcc58e5269, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67209afde685ce814bb66bfcc58e5269 = cache_frame_67209afde685ce814bb66bfcc58e5269;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67209afde685ce814bb66bfcc58e5269 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67209afde685ce814bb66bfcc58e5269 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_old_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_67209afde685ce814bb66bfcc58e5269->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_old_parsed == NULL );
    var_old_parsed = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_new_url;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_67209afde685ce814bb66bfcc58e5269->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_parsed == NULL );
    var_new_parsed = tmp_assign_source_2;

    tmp_source_name_1 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hostname );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hostname );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 123;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 123;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_3 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_str_plain_http;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 130;
        type_description_1 = "oooooooo";
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
    tmp_source_name_4 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_port );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_tuple_int_pos_80_none_tuple;
    tmp_and_left_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_5 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_str_plain_https;
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_source_name_6 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_port );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_tuple_int_pos_443_none_tuple;
    tmp_and_right_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_3 );
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_7 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_port );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_5 );

        exception_lineno = 134;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = RICH_COMPARE_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_changed_port == NULL );
    var_changed_port = tmp_assign_source_3;

    tmp_source_name_9 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_scheme );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = RICH_COMPARE_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_changed_scheme == NULL );
    var_changed_scheme = tmp_assign_source_4;

    tmp_assign_source_5 = PyTuple_New( 2 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_PORTS" );
        exception_tb = NULL;

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_scheme );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = Py_None;
    frame_67209afde685ce814bb66bfcc58e5269->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_1 );
    assert( var_default_port == NULL );
    var_default_port = tmp_assign_source_5;

    tmp_operand_name_1 = var_changed_scheme;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_4 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_source_name_13 = var_old_parsed;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_port );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = var_default_port;

    CHECK_OBJECT( tmp_compexpr_right_7 );
    tmp_and_left_value_5 = SEQUENCE_CONTAINS( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_source_name_14 = var_new_parsed;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_port );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_8 = var_default_port;

    CHECK_OBJECT( tmp_compexpr_right_8 );
    tmp_and_right_value_5 = SEQUENCE_CONTAINS( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_value_2 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_2 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_or_left_value_1 = var_changed_port;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooo";
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
    tmp_or_right_value_1 = var_changed_scheme;

    CHECK_OBJECT( tmp_or_right_value_1 );
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67209afde685ce814bb66bfcc58e5269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67209afde685ce814bb66bfcc58e5269 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67209afde685ce814bb66bfcc58e5269 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67209afde685ce814bb66bfcc58e5269, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67209afde685ce814bb66bfcc58e5269->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67209afde685ce814bb66bfcc58e5269, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67209afde685ce814bb66bfcc58e5269,
        type_description_1,
        par_self,
        par_old_url,
        par_new_url,
        var_new_parsed,
        var_default_port,
        var_changed_port,
        var_changed_scheme,
        var_old_parsed
    );


    // Release cached frame.
    if ( frame_67209afde685ce814bb66bfcc58e5269 == cache_frame_67209afde685ce814bb66bfcc58e5269 )
    {
        Py_DECREF( frame_67209afde685ce814bb66bfcc58e5269 );
    }
    cache_frame_67209afde685ce814bb66bfcc58e5269 = NULL;

    assertFrameObject( frame_67209afde685ce814bb66bfcc58e5269 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_should_strip_auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_new_parsed );
    Py_DECREF( var_new_parsed );
    var_new_parsed = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_new_url );
    Py_DECREF( par_new_url );
    par_new_url = NULL;

    CHECK_OBJECT( (PyObject *)par_old_url );
    Py_DECREF( par_old_url );
    par_old_url = NULL;

    Py_XDECREF( var_default_port );
    var_default_port = NULL;

    Py_XDECREF( var_changed_port );
    var_changed_port = NULL;

    Py_XDECREF( var_changed_scheme );
    var_changed_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_old_parsed );
    Py_DECREF( var_old_parsed );
    var_old_parsed = NULL;

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

    Py_XDECREF( var_new_parsed );
    var_new_parsed = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_new_url );
    Py_DECREF( par_new_url );
    par_new_url = NULL;

    CHECK_OBJECT( (PyObject *)par_old_url );
    Py_DECREF( par_old_url );
    par_old_url = NULL;

    Py_XDECREF( var_default_port );
    var_default_port = NULL;

    Py_XDECREF( var_changed_port );
    var_changed_port = NULL;

    Py_XDECREF( var_changed_scheme );
    var_changed_scheme = NULL;

    Py_XDECREF( var_old_parsed );
    var_old_parsed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_should_strip_auth );
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


static PyObject *impl_requests$sessions$$$function_5_resolve_redirects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_resp = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_req = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_CellObject *par_timeout = PyCell_NEW1( python_pars[ 4 ] );
    struct Nuitka_CellObject *par_verify = PyCell_NEW1( python_pars[ 5 ] );
    struct Nuitka_CellObject *par_cert = PyCell_NEW1( python_pars[ 6 ] );
    struct Nuitka_CellObject *par_proxies = PyCell_NEW1( python_pars[ 7 ] );
    struct Nuitka_CellObject *par_yield_requests = PyCell_NEW1( python_pars[ 8 ] );
    struct Nuitka_CellObject *par_adapter_kwargs = PyCell_NEW1( python_pars[ 9 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context,
        module_requests$sessions,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_a53bd476806289c76327c26a82fee9a8,
        10
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_adapter_kwargs;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_cert;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_proxies;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = par_req;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = par_resp;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] = par_timeout;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] = par_verify;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] = par_yield_requests;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] );
    assert( Py_SIZE( tmp_return_value ) >= 10 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_locals {
    PyObject *var_prepared_request
    PyObject *var_previous_fragment
    PyObject *var_header
    PyObject *var_url
    PyObject *var_parsed
    PyObject *var_hist
    PyObject *var_parsed_rurl
    PyObject *var_rewindable
    PyObject *var_purged_headers
    PyObject *var_headers
    PyObject *tmp_for_loop_1__for_iterator
    PyObject *tmp_for_loop_1__iter_value
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
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
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
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
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_prepared_request = NULL;
    PyObject *var_previous_fragment = NULL;
    PyObject *var_header = NULL;
    PyObject *var_url = NULL;
    PyObject *var_parsed = NULL;
    PyObject *var_hist = NULL;
    PyObject *var_parsed_rurl = NULL;
    PyObject *var_rewindable = NULL;
    PyObject *var_purged_headers = NULL;
    PyObject *var_headers = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
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
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
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
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_hist == NULL );
    var_hist = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_a53bd476806289c76327c26a82fee9a8, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_redirect_target );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[3] == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fragment );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_previous_fragment == NULL );
    var_previous_fragment = tmp_assign_source_3;

    loop_start_1:;
    tmp_cond_value_1 = var_url;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    if ( generator->m_closure[3] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;

        exception_lineno = 153;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 153;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_prepared_request;
        var_prepared_request = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_hist;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_3 = NULL;
    }
    else
    {
        tmp_args_element_name_3 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 157;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_hist;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_assattr_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_history, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 158;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    // Tried code:
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 161;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_2;
    }

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_content );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
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

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ChunkedEncodingError" );
        exception_tb = NULL;

        exception_lineno = 162;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ContentDecodingError" );
        exception_tb = NULL;

        exception_lineno = 162;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_RuntimeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 2, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 162;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_7 = NULL;
    }
    else
    {
        tmp_source_name_7 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_raw );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_read );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 );
    generator->m_frame->m_frame.f_lineno = 163;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 160;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccccccccccoooooooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_resolve_redirects$$$genobj_1_resolve_redirects );
    return;
    // End of try:
    try_end_1:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_history );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_9 = NULL;
    }
    else
    {
        tmp_source_name_9 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_max_redirects );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 165;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TooManyRedirects" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_10 = const_str_digest_b6f30b6068e11c9af3fe58415b3c68c7;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
    assert( tmp_called_name_6 != NULL );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_11 = NULL;
    }
    else
    {
        tmp_source_name_11 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_max_redirects );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_dict_value_1 = NULL;
    }
    else
    {
        tmp_dict_value_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_response;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 166;
    tmp_raise_type_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ccccccccccoooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 169;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = var_url;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;

        exception_lineno = 172;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 172;
    tmp_cond_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0 ) );

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 172;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_12 = NULL;
    }
    else
    {
        tmp_source_name_12 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_url );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parsed_rurl;
        var_parsed_rurl = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_13 = const_str_chr_58;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_6 = PyList_New( 2 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;

        exception_lineno = 174;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = var_parsed_rurl;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_scheme );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 174;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 174;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_6, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_url;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;

        exception_lineno = 174;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_6, 1, tmp_list_element_1 );
    generator->m_frame->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 177;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_url;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;

        exception_lineno = 177;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parsed;
        var_parsed = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_15 = var_parsed;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_fragment );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_str_empty;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 178;
        type_description_1 = "ccccccccccoooooooooo";
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
    tmp_and_right_value_1 = var_previous_fragment;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "previous_fragment" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 178;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_16 = var_parsed;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__replace );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_previous_fragment;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "previous_fragment" );
        exception_tb = NULL;

        exception_lineno = 179;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_fragment;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 179;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parsed;
        assert( old != NULL );
        var_parsed = tmp_assign_source_8;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_17 = var_parsed;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_fragment );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 180;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_18 = var_parsed;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_fragment );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_previous_fragment;
        var_previous_fragment = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    tmp_called_instance_4 = var_parsed;

    CHECK_OBJECT( tmp_called_instance_4 );
    generator->m_frame->m_frame.f_lineno = 182;
    tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_geturl );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_source_name_19 = var_parsed;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_netloc );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 187;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urljoin );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urljoin" );
        exception_tb = NULL;

        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_20 = NULL;
    }
    else
    {
        tmp_source_name_20 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_url );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "requote_uri" );
        exception_tb = NULL;

        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_url;

    CHECK_OBJECT( tmp_args_element_name_11 );
    generator->m_frame->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        assert( old != NULL );
        var_url = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "requote_uri" );
        exception_tb = NULL;

        exception_lineno = 190;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_url;

    CHECK_OBJECT( tmp_args_element_name_12 );
    generator->m_frame->m_frame.f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        assert( old != NULL );
        var_url = tmp_assign_source_12;
        Py_DECREF( old );
    }

    branch_end_7:;
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_url;

    CHECK_OBJECT( tmp_args_element_name_13 );
    generator->m_frame->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_prepared_request;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 192;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_21 = NULL;
    }
    else
    {
        tmp_source_name_21 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 194;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_rebuild_method );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = var_prepared_request;

    CHECK_OBJECT( tmp_args_element_name_14 );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_15 = NULL;
    }
    else
    {
        tmp_args_element_name_15 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 194;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_22 = NULL;
    }
    else
    {
        tmp_source_name_22 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_status_code );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = PyTuple_New( 2 );
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codes" );
        exception_tb = NULL;

        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_temporary_redirect );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 0, tmp_tuple_element_3 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codes" );
        exception_tb = NULL;

        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_permanent_redirect );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 197;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 1, tmp_tuple_element_3 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_13 = const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
    {
        PyObject *old = var_purged_headers;
        var_purged_headers = tmp_assign_source_13;
        Py_INCREF( var_purged_headers );
        Py_XDECREF( old );
    }

    tmp_iter_arg_1 = const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_14 != NULL );
    {
        PyObject *old = tmp_for_loop_1__for_iterator;
        tmp_for_loop_1__for_iterator = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ccccccccccoooooooooo";
        exception_lineno = 200;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_4 = exception_keeper_type_2;
    tmp_compare_right_4 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 200;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    goto loop_end_2;
    goto branch_end_9;
    branch_no_9:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    branch_end_9:;
    // End of try:
    try_end_2:;
    tmp_assign_source_16 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_header;
        var_header = tmp_assign_source_16;
        Py_INCREF( var_header );
        Py_XDECREF( old );
    }

    tmp_source_name_25 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_headers );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_16 = var_header;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = Py_None;
    generator->m_frame->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ccccccccccoooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = var_prepared_request;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_body, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_source_name_26 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_headers );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_headers;
        var_headers = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_called_instance_6 = var_headers;

    CHECK_OBJECT( tmp_called_instance_6 );
    generator->m_frame->m_frame.f_lineno = 205;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_Cookie_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;

        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__cookies );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[3] == NULL )
    {
        tmp_args_element_name_19 = NULL;
    }
    else
    {
        tmp_args_element_name_19 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;

        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_28 = NULL;
    }
    else
    {
        tmp_source_name_28 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_raw );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;

        exception_lineno = 211;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_29 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__cookies );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_30 = NULL;
    }
    else
    {
        tmp_source_name_30 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 211;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_cookies );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 211;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_prepare_cookies );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__cookies );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 212;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_33 = NULL;
    }
    else
    {
        tmp_source_name_33 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 215;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_rebuild_proxies );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = var_prepared_request;

    CHECK_OBJECT( tmp_args_element_name_24 );
    if ( generator->m_closure[2] == NULL )
    {
        tmp_args_element_name_25 = NULL;
    }
    else
    {
        tmp_args_element_name_25 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "proxies" );
        exception_tb = NULL;

        exception_lineno = 215;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( generator->m_closure[2] );
        PyCell_SET( generator->m_closure[2], tmp_assign_source_18 );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_34 = NULL;
    }
    else
    {
        tmp_source_name_34 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 216;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_rebuild_auth );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = var_prepared_request;

    CHECK_OBJECT( tmp_args_element_name_26 );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_27 = NULL;
    }
    else
    {
        tmp_args_element_name_27 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 216;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_35 = var_prepared_request;

    CHECK_OBJECT( tmp_source_name_35 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__body_position );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_3 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
    tmp_compexpr_right_3 = var_headers;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_4 = const_str_digest_2b15502c566d8238f4869c227793bd1a;
    tmp_compexpr_right_4 = var_headers;

    CHECK_OBJECT( tmp_compexpr_right_4 );
    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_right_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_19 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_assign_source_19 = tmp_and_left_value_2;
    and_end_2:;
    {
        PyObject *old = var_rewindable;
        var_rewindable = tmp_assign_source_19;
        Py_INCREF( var_rewindable );
        Py_XDECREF( old );
    }

    tmp_cond_value_6 = var_rewindable;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "rewind_body" );
        exception_tb = NULL;

        exception_lineno = 228;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = var_prepared_request;

    CHECK_OBJECT( tmp_args_element_name_28 );
    generator->m_frame->m_frame.f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_10:;
    tmp_assign_source_20 = var_prepared_request;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = PyCell_GET( generator->m_closure[3] );
        PyCell_SET( generator->m_closure[3], tmp_assign_source_20 );
        Py_INCREF( tmp_assign_source_20 );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[9] == NULL )
    {
        tmp_cond_value_7 = NULL;
    }
    else
    {
        tmp_cond_value_7 = PyCell_GET( generator->m_closure[9] );
    }

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "yield_requests" );
        exception_tb = NULL;

        exception_lineno = 233;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    if ( generator->m_closure[3] == NULL )
    {
        tmp_expression_name_1 = NULL;
    }
    else
    {
        tmp_expression_name_1 = PyCell_GET( generator->m_closure[3] );
    }

    CHECK_OBJECT( tmp_expression_name_1 );
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_11;
    branch_no_11:;
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_36 = NULL;
    }
    else
    {
        tmp_source_name_36 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 237;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    if ( generator->m_closure[3] == NULL )
    {
        tmp_tuple_element_4 = NULL;
    }
    else
    {
        tmp_tuple_element_4 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;

        exception_lineno = 238;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_4 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 6 );
    if ( generator->m_closure[6] == NULL )
    {
        tmp_dict_value_3 = NULL;
    }
    else
    {
        tmp_dict_value_3 = PyCell_GET( generator->m_closure[6] );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;

        exception_lineno = 239;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_stream;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[7] == NULL )
    {
        tmp_dict_value_4 = NULL;
    }
    else
    {
        tmp_dict_value_4 = PyCell_GET( generator->m_closure[7] );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timeout" );
        exception_tb = NULL;

        exception_lineno = 240;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_timeout;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[8] == NULL )
    {
        tmp_dict_value_5 = NULL;
    }
    else
    {
        tmp_dict_value_5 = PyCell_GET( generator->m_closure[8] );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verify" );
        exception_tb = NULL;

        exception_lineno = 241;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_verify;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[1] == NULL )
    {
        tmp_dict_value_6 = NULL;
    }
    else
    {
        tmp_dict_value_6 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cert" );
        exception_tb = NULL;

        exception_lineno = 242;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_cert;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[2] == NULL )
    {
        tmp_dict_value_7 = NULL;
    }
    else
    {
        tmp_dict_value_7 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "proxies" );
        exception_tb = NULL;

        exception_lineno = 243;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_proxies;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = Py_False;
    tmp_dict_key_8 = const_str_plain_allow_redirects;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[0] == NULL )
    {
        tmp_dircall_arg4_1 = NULL;
    }
    else
    {
        tmp_dircall_arg4_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "adapter_kwargs" );
        exception_tb = NULL;

        exception_lineno = 245;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_21 = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( generator->m_closure[4] );
        PyCell_SET( generator->m_closure[4], tmp_assign_source_21 );
        Py_XDECREF( old );
    }

    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;

        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_37 = NULL;
    }
    else
    {
        tmp_source_name_37 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_cookies );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = var_prepared_request;

    CHECK_OBJECT( tmp_args_element_name_30 );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_38 = NULL;
    }
    else
    {
        tmp_source_name_38 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_args_element_name_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_raw );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );

        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_39 = NULL;
    }
    else
    {
        tmp_source_name_39 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_get_redirect_target );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_32 = NULL;
    }
    else
    {
        tmp_args_element_name_32 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        assert( old != NULL );
        var_url = tmp_assign_source_22;
        Py_DECREF( old );
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_expression_name_2 = NULL;
    }
    else
    {
        tmp_expression_name_2 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_expression_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;

        exception_lineno = 252;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_expression_name_2 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ccccccccccoooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            generator->m_closure[5],
            generator->m_closure[4],
            generator->m_closure[3],
            generator->m_closure[6],
            generator->m_closure[7],
            generator->m_closure[8],
            generator->m_closure[1],
            generator->m_closure[2],
            generator->m_closure[9],
            generator->m_closure[0],
            var_prepared_request,
            var_previous_fragment,
            var_header,
            var_url,
            var_parsed,
            var_hist,
            var_parsed_rurl,
            var_rewindable,
            var_purged_headers,
            var_headers
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_prepared_request );
    var_prepared_request = NULL;

    Py_XDECREF( var_previous_fragment );
    var_previous_fragment = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    CHECK_OBJECT( (PyObject *)var_hist );
    Py_DECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_parsed_rurl );
    var_parsed_rurl = NULL;

    Py_XDECREF( var_rewindable );
    var_rewindable = NULL;

    Py_XDECREF( var_purged_headers );
    var_purged_headers = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( var_prepared_request );
    var_prepared_request = NULL;

    Py_XDECREF( var_previous_fragment );
    var_previous_fragment = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    CHECK_OBJECT( (PyObject *)var_hist );
    Py_DECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_parsed_rurl );
    var_parsed_rurl = NULL;

    Py_XDECREF( var_rewindable );
    var_rewindable = NULL;

    Py_XDECREF( var_purged_headers );
    var_purged_headers = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_requests$sessions$$$function_6_rebuild_auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_url = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_new_auth = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e118af105a2b1171517dd70954949588 = NULL;

    struct Nuitka_FrameObject *frame_e118af105a2b1171517dd70954949588;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e118af105a2b1171517dd70954949588, codeobj_e118af105a2b1171517dd70954949588, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e118af105a2b1171517dd70954949588 = cache_frame_e118af105a2b1171517dd70954949588;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e118af105a2b1171517dd70954949588 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e118af105a2b1171517dd70954949588 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    tmp_source_name_2 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_2;

    tmp_compexpr_left_1 = const_str_plain_Authorization;
    tmp_compexpr_right_1 = var_headers;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_should_strip_auth );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_response;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_request );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 262;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 262;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_url;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_e118af105a2b1171517dd70954949588->m_frame.f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 262;
        type_description_1 = "oooooo";
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
    tmp_delsubscr_target_1 = var_headers;

    CHECK_OBJECT( tmp_delsubscr_target_1 );
    tmp_delsubscr_subscript_1 = const_str_plain_Authorization;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_trust_env );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 268;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_netrc_auth" );
        exception_tb = NULL;

        exception_lineno = 268;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_e118af105a2b1171517dd70954949588->m_frame.f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_3 = Py_None;
    Py_INCREF( tmp_assign_source_3 );
    condexpr_end_1:;
    assert( var_new_auth == NULL );
    var_new_auth = tmp_assign_source_3;

    tmp_compare_left_1 = var_new_auth;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = par_prepared_request;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_4 = var_new_auth;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_e118af105a2b1171517dd70954949588->m_frame.f_lineno = 270;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_prepare_auth, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e118af105a2b1171517dd70954949588 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e118af105a2b1171517dd70954949588 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e118af105a2b1171517dd70954949588, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e118af105a2b1171517dd70954949588->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e118af105a2b1171517dd70954949588, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e118af105a2b1171517dd70954949588,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_url,
        var_headers,
        var_new_auth
    );


    // Release cached frame.
    if ( frame_e118af105a2b1171517dd70954949588 == cache_frame_e118af105a2b1171517dd70954949588 )
    {
        Py_DECREF( frame_e118af105a2b1171517dd70954949588 );
    }
    cache_frame_e118af105a2b1171517dd70954949588 = NULL;

    assertFrameObject( frame_e118af105a2b1171517dd70954949588 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    CHECK_OBJECT( (PyObject *)var_new_auth );
    Py_DECREF( var_new_auth );
    var_new_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_new_auth );
    var_new_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_auth );
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


static PyObject *impl_requests$sessions$$$function_7_rebuild_proxies( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_new_proxies = NULL;
    PyObject *var_password = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_url = NULL;
    PyObject *var_environ_proxies = NULL;
    PyObject *var_username = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_proxy = NULL;
    PyObject *var_bypass_proxy = NULL;
    PyObject *var_no_proxy = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_43cd56918363bee914fbc708d8519cc4 = NULL;

    struct Nuitka_FrameObject *frame_43cd56918363bee914fbc708d8519cc4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_proxies;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = par_proxies;

    CHECK_OBJECT( tmp_assign_source_1 );
    Py_INCREF( tmp_assign_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = PyDict_New();
    condexpr_end_1:;
    {
        PyObject *old = par_proxies;
        assert( old != NULL );
        par_proxies = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43cd56918363bee914fbc708d8519cc4, codeobj_43cd56918363bee914fbc708d8519cc4, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_43cd56918363bee914fbc708d8519cc4 = cache_frame_43cd56918363bee914fbc708d8519cc4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43cd56918363bee914fbc708d8519cc4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43cd56918363bee914fbc708d8519cc4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_2;

    tmp_source_name_2 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
        exception_tb = NULL;

        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_4;

    tmp_called_instance_1 = par_proxies;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 289;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_proxies == NULL );
    var_new_proxies = tmp_assign_source_5;

    tmp_called_instance_2 = par_proxies;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 290;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_no_proxy == NULL );
    var_no_proxy = tmp_assign_source_6;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "should_bypass_proxies" );
        exception_tb = NULL;

        exception_lineno = 292;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_no_proxy;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_no_proxy;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 292;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_bypass_proxy == NULL );
    var_bypass_proxy = tmp_assign_source_7;

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_trust_env );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 293;
        type_description_1 = "ooooooooooooo";
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
    tmp_operand_name_1 = var_bypass_proxy;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 293;
        type_description_1 = "ooooooooooooo";
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_environ_proxies" );
        exception_tb = NULL;

        exception_lineno = 294;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_url;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_no_proxy;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_no_proxy;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 294;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_environ_proxies == NULL );
    var_environ_proxies = tmp_assign_source_8;

    tmp_source_name_5 = var_environ_proxies;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_scheme;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_called_instance_3 = var_environ_proxies;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 296;
    tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_all_tuple, 0 ) );

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 296;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 296;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy == NULL );
    var_proxy = tmp_assign_source_9;

    tmp_cond_value_2 = var_proxy;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooo";
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
    tmp_called_instance_4 = var_new_proxies;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_4 = var_scheme;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = var_proxy;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_setdefault, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    branch_no_1:;
    tmp_compare_left_2 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_compare_right_2 = var_headers;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_delsubscr_target_1 = var_headers;

    CHECK_OBJECT( tmp_delsubscr_target_1 );
    tmp_delsubscr_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    // Tried code:
    // Tried code:
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_auth_from_url" );
        exception_tb = NULL;

        exception_lineno = 305;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_subscribed_name_1 = var_new_proxies;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_scheme;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 305;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_11 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 305;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_12 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 305;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;

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

                type_description_1 = "ooooooooooooo";
                exception_lineno = 305;
                goto try_except_handler_4;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooo";
        exception_lineno = 305;
        goto try_except_handler_4;
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_13 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_username = tmp_assign_source_13;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_14 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_password = tmp_assign_source_14;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_43cd56918363bee914fbc708d8519cc4 );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_43cd56918363bee914fbc708d8519cc4, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_43cd56918363bee914fbc708d8519cc4, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_iter_arg_2 = const_tuple_none_none_tuple;
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( tmp_assign_source_15 != NULL );
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 307;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 307;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_username = tmp_assign_source_18;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_password = tmp_assign_source_19;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 304;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_43cd56918363bee914fbc708d8519cc4->m_frame) frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_and_left_value_2 = var_username;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_and_right_value_2 = var_password;

    if ( tmp_and_right_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_basic_auth_str" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_username;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_password;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_43cd56918363bee914fbc708d8519cc4->m_frame.f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_headers;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_43cd56918363bee914fbc708d8519cc4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_43cd56918363bee914fbc708d8519cc4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43cd56918363bee914fbc708d8519cc4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43cd56918363bee914fbc708d8519cc4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43cd56918363bee914fbc708d8519cc4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43cd56918363bee914fbc708d8519cc4,
        type_description_1,
        par_self,
        par_prepared_request,
        par_proxies,
        var_new_proxies,
        var_password,
        var_scheme,
        var_url,
        var_environ_proxies,
        var_username,
        var_headers,
        var_proxy,
        var_bypass_proxy,
        var_no_proxy
    );


    // Release cached frame.
    if ( frame_43cd56918363bee914fbc708d8519cc4 == cache_frame_43cd56918363bee914fbc708d8519cc4 )
    {
        Py_DECREF( frame_43cd56918363bee914fbc708d8519cc4 );
    }
    cache_frame_43cd56918363bee914fbc708d8519cc4 = NULL;

    assertFrameObject( frame_43cd56918363bee914fbc708d8519cc4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_new_proxies;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_new_proxies );
    Py_DECREF( var_new_proxies );
    var_new_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    CHECK_OBJECT( (PyObject *)var_scheme );
    Py_DECREF( var_scheme );
    var_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)var_bypass_proxy );
    Py_DECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    CHECK_OBJECT( (PyObject *)var_no_proxy );
    Py_DECREF( var_no_proxy );
    var_no_proxy = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_new_proxies );
    var_new_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_proxies );
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


static PyObject *impl_requests$sessions$$$function_8_rebuild_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_method = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static struct Nuitka_FrameObject *cache_frame_9b10d3a7f6482093180f3a07ac9ba5ac = NULL;

    struct Nuitka_FrameObject *frame_9b10d3a7f6482093180f3a07ac9ba5ac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b10d3a7f6482093180f3a07ac9ba5ac, codeobj_9b10d3a7f6482093180f3a07ac9ba5ac, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b10d3a7f6482093180f3a07ac9ba5ac = cache_frame_9b10d3a7f6482093180f3a07ac9ba5ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b10d3a7f6482093180f3a07ac9ba5ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b10d3a7f6482093180f3a07ac9ba5ac ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_method == NULL );
    var_method = tmp_assign_source_1;

    tmp_source_name_2 = par_response;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_code );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codes" );
        exception_tb = NULL;

        exception_lineno = 321;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_see_other );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 321;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 321;
        type_description_1 = "oooo";
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
    tmp_compexpr_left_2 = var_method;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_str_plain_HEAD;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooo";
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 321;
        type_description_1 = "oooo";
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
    tmp_assign_source_2 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        assert( old != NULL );
        var_method = tmp_assign_source_2;
        Py_INCREF( var_method );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_response;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_status_code );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codes" );
        exception_tb = NULL;

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_found );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_compexpr_left_4 = var_method;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_str_plain_HEAD;
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        assert( old != NULL );
        var_method = tmp_assign_source_3;
        Py_INCREF( var_method );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_6 = par_response;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status_code );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "codes" );
        exception_tb = NULL;

        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_moved );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_5 );

        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_compexpr_left_6 = var_method;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;

        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_6 = const_str_plain_POST;
    tmp_and_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 331;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_4 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        var_method = tmp_assign_source_4;
        Py_INCREF( var_method );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_assattr_name_1 = var_method;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_prepared_request;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_method, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b10d3a7f6482093180f3a07ac9ba5ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b10d3a7f6482093180f3a07ac9ba5ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b10d3a7f6482093180f3a07ac9ba5ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b10d3a7f6482093180f3a07ac9ba5ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b10d3a7f6482093180f3a07ac9ba5ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b10d3a7f6482093180f3a07ac9ba5ac,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_method
    );


    // Release cached frame.
    if ( frame_9b10d3a7f6482093180f3a07ac9ba5ac == cache_frame_9b10d3a7f6482093180f3a07ac9ba5ac )
    {
        Py_DECREF( frame_9b10d3a7f6482093180f3a07ac9ba5ac );
    }
    cache_frame_9b10d3a7f6482093180f3a07ac9ba5ac = NULL;

    assertFrameObject( frame_9b10d3a7f6482093180f3a07ac9ba5ac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8_rebuild_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

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

    CHECK_OBJECT( (PyObject *)par_prepared_request );
    Py_DECREF( par_prepared_request );
    par_prepared_request = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8_rebuild_method );
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


static PyObject *impl_requests$sessions$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_58fbde5f52c09d5f95b0f9b7385d749e = NULL;

    struct Nuitka_FrameObject *frame_58fbde5f52c09d5f95b0f9b7385d749e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58fbde5f52c09d5f95b0f9b7385d749e, codeobj_58fbde5f52c09d5f95b0f9b7385d749e, module_requests$sessions, sizeof(void *) );
    frame_58fbde5f52c09d5f95b0f9b7385d749e = cache_frame_58fbde5f52c09d5f95b0f9b7385d749e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58fbde5f52c09d5f95b0f9b7385d749e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58fbde5f52c09d5f95b0f9b7385d749e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_headers );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "default_headers" );
        exception_tb = NULL;

        exception_lineno = 367;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 367;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 367;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auth, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = PyDict_New();
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_proxies, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 376;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_hooks );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "default_hooks" );
        exception_tb = NULL;

        exception_lineno = 379;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 379;
    tmp_assattr_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_hooks, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 379;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assattr_name_5 = PyDict_New();
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_params, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 384;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = Py_False;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_stream, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_True;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_verify, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_cert, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_REDIRECT_LIMIT" );
        exception_tb = NULL;

        exception_lineno = 407;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_max_redirects, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_True;
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_trust_env, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookiejar_from_dict" );
        exception_tb = NULL;

        exception_lineno = 417;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = PyDict_New();
    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 417;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_cookies, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 417;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;

        exception_lineno = 420;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 420;
    tmp_assattr_name_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_adapters, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 420;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mount );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_504b77692b694460b8c25198a52c83ba;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPAdapter" );
        exception_tb = NULL;

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 421;
    tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mount );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPAdapter" );
        exception_tb = NULL;

        exception_lineno = 422;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 422;
    tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 422;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame.f_lineno = 422;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fbde5f52c09d5f95b0f9b7385d749e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fbde5f52c09d5f95b0f9b7385d749e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58fbde5f52c09d5f95b0f9b7385d749e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58fbde5f52c09d5f95b0f9b7385d749e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58fbde5f52c09d5f95b0f9b7385d749e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58fbde5f52c09d5f95b0f9b7385d749e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_58fbde5f52c09d5f95b0f9b7385d749e == cache_frame_58fbde5f52c09d5f95b0f9b7385d749e )
    {
        Py_DECREF( frame_58fbde5f52c09d5f95b0f9b7385d749e );
    }
    cache_frame_58fbde5f52c09d5f95b0f9b7385d749e = NULL;

    assertFrameObject( frame_58fbde5f52c09d5f95b0f9b7385d749e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___init__ );
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___init__ );
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


static PyObject *impl_requests$sessions$$$function_10___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___enter__ );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_requests$sessions$$$function_11___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f364db0fd7645476044828c340eb9110 = NULL;

    struct Nuitka_FrameObject *frame_f364db0fd7645476044828c340eb9110;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f364db0fd7645476044828c340eb9110, codeobj_f364db0fd7645476044828c340eb9110, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_f364db0fd7645476044828c340eb9110 = cache_frame_f364db0fd7645476044828c340eb9110;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f364db0fd7645476044828c340eb9110 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f364db0fd7645476044828c340eb9110 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f364db0fd7645476044828c340eb9110->m_frame.f_lineno = 428;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f364db0fd7645476044828c340eb9110 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f364db0fd7645476044828c340eb9110 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f364db0fd7645476044828c340eb9110, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f364db0fd7645476044828c340eb9110->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f364db0fd7645476044828c340eb9110, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f364db0fd7645476044828c340eb9110,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_f364db0fd7645476044828c340eb9110 == cache_frame_f364db0fd7645476044828c340eb9110 )
    {
        Py_DECREF( frame_f364db0fd7645476044828c340eb9110 );
    }
    cache_frame_f364db0fd7645476044828c340eb9110 = NULL;

    assertFrameObject( frame_f364db0fd7645476044828c340eb9110 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11___exit__ );
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


static PyObject *impl_requests$sessions$$$function_12_prepare_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_cookies = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_p = NULL;
    PyObject *var_merged_cookies = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d05e57294edb17cdfe3ba579a70dc77c = NULL;

    struct Nuitka_FrameObject *frame_d05e57294edb17cdfe3ba579a70dc77c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d05e57294edb17cdfe3ba579a70dc77c, codeobj_d05e57294edb17cdfe3ba579a70dc77c, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d05e57294edb17cdfe3ba579a70dc77c = cache_frame_d05e57294edb17cdfe3ba579a70dc77c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d05e57294edb17cdfe3ba579a70dc77c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d05e57294edb17cdfe3ba579a70dc77c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cookies );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 440;
        type_description_1 = "oooooo";
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_or_right_value_1 = PyDict_New();
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_cookies == NULL );
    var_cookies = tmp_assign_source_1;

    tmp_isinstance_inst_1 = var_cookies;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookielib" );
        exception_tb = NULL;

        exception_lineno = 443;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CookieJar );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cookiejar_from_dict" );
        exception_tb = NULL;

        exception_lineno = 444;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_cookies;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cookies;
        assert( old != NULL );
        var_cookies = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;

        exception_lineno = 447;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;

        exception_lineno = 448;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestsCookieJar" );
        exception_tb = NULL;

        exception_lineno = 448;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 448;
    tmp_args_element_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cookies );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 448;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 448;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_cookies;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_5 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_merged_cookies == NULL );
    var_merged_cookies = tmp_assign_source_3;

    tmp_source_name_4 = par_request;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_auth );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_auth == NULL );
    var_auth = tmp_assign_source_4;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_trust_env );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 452;
        type_description_1 = "oooooo";
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
    tmp_operand_name_1 = var_auth;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_auth );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    Py_INCREF( tmp_and_right_value_1 );
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_netrc_auth" );
        exception_tb = NULL;

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_request;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_url );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 453;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_auth;
        assert( old != NULL );
        var_auth = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PreparedRequest );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PreparedRequest" );
        exception_tb = NULL;

        exception_lineno = 455;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 455;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p == NULL );
    var_p = tmp_assign_source_6;

    tmp_source_name_8 = var_p;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prepare );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 10 );
    tmp_source_name_9 = par_request;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_method );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 457;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_method;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_10 = par_request;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_url );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_url;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_11 = par_request;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_files );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 459;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_files;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_12 = par_request;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_data );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_source_name_13 = par_request;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_json );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_json;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 462;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_14 = par_request;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_headers );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 462;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_headers );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 462;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "CaseInsensitiveDict" );
        exception_tb = NULL;

        exception_lineno = 462;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_dict_class;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 462;
    tmp_dict_value_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 462;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_headers;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = par_request;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_params );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_params );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 463;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_params;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_auth;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_auth );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 464;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_dict_value_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_auth;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = var_merged_cookies;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_cookies;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_hooks );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_hooks" );
        exception_tb = NULL;

        exception_lineno = 466;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = par_request;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_hooks );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 466;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_hooks );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 466;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 466;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 466;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_hooks;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame.f_lineno = 456;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d05e57294edb17cdfe3ba579a70dc77c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d05e57294edb17cdfe3ba579a70dc77c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d05e57294edb17cdfe3ba579a70dc77c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d05e57294edb17cdfe3ba579a70dc77c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d05e57294edb17cdfe3ba579a70dc77c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d05e57294edb17cdfe3ba579a70dc77c,
        type_description_1,
        par_self,
        par_request,
        var_cookies,
        var_auth,
        var_p,
        var_merged_cookies
    );


    // Release cached frame.
    if ( frame_d05e57294edb17cdfe3ba579a70dc77c == cache_frame_d05e57294edb17cdfe3ba579a70dc77c )
    {
        Py_DECREF( frame_d05e57294edb17cdfe3ba579a70dc77c );
    }
    cache_frame_d05e57294edb17cdfe3ba579a70dc77c = NULL;

    assertFrameObject( frame_d05e57294edb17cdfe3ba579a70dc77c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_p;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_prepare_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_cookies );
    Py_DECREF( var_cookies );
    var_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)var_auth );
    Py_DECREF( var_auth );
    var_auth = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_merged_cookies );
    Py_DECREF( var_merged_cookies );
    var_merged_cookies = NULL;

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

    Py_XDECREF( var_cookies );
    var_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_merged_cookies );
    var_merged_cookies = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_prepare_request );
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


static PyObject *impl_requests$sessions$$$function_13_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_params = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_cookies = python_pars[ 6 ];
    PyObject *par_files = python_pars[ 7 ];
    PyObject *par_auth = python_pars[ 8 ];
    PyObject *par_timeout = python_pars[ 9 ];
    PyObject *par_allow_redirects = python_pars[ 10 ];
    PyObject *par_proxies = python_pars[ 11 ];
    PyObject *par_hooks = python_pars[ 12 ];
    PyObject *par_stream = python_pars[ 13 ];
    PyObject *par_verify = python_pars[ 14 ];
    PyObject *par_cert = python_pars[ 15 ];
    PyObject *par_json = python_pars[ 16 ];
    PyObject *var_resp = NULL;
    PyObject *var_req = NULL;
    PyObject *var_send_kwargs = NULL;
    PyObject *var_prep = NULL;
    PyObject *var_settings = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e49fdcf5d8a56b475b147f2b8155a1a7 = NULL;

    struct Nuitka_FrameObject *frame_e49fdcf5d8a56b475b147f2b8155a1a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e49fdcf5d8a56b475b147f2b8155a1a7, codeobj_e49fdcf5d8a56b475b147f2b8155a1a7, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7 = cache_frame_e49fdcf5d8a56b475b147f2b8155a1a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e49fdcf5d8a56b475b147f2b8155a1a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e49fdcf5d8a56b475b147f2b8155a1a7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Request" );
        exception_tb = NULL;

        exception_lineno = 516;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 10 );
    tmp_called_instance_1 = par_method;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame.f_lineno = 517;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 517;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_method;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_url;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_url;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_headers;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_headers;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_files;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_files;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_or_left_value_1 = par_data;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 521;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_or_right_value_1 = PyDict_New();
    tmp_dict_value_5 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_dict_value_5 = tmp_or_left_value_1;
    or_end_1:;
    tmp_dict_key_5 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_json;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_json;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_or_left_value_2 = par_params;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 523;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_or_right_value_2 = PyDict_New();
    tmp_dict_value_7 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_dict_value_7 = tmp_or_left_value_2;
    or_end_2:;
    tmp_dict_key_7 = const_str_plain_params;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = par_auth;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_auth;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = par_cookies;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_cookies;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = par_hooks;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_hooks;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame.f_lineno = 516;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_req == NULL );
    var_req = tmp_assign_source_1;

    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = var_req;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame.f_lineno = 528;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_prepare_request, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 528;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_prep == NULL );
    var_prep = tmp_assign_source_2;

    tmp_or_left_value_3 = par_proxies;

    CHECK_OBJECT( tmp_or_left_value_3 );
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    tmp_or_right_value_3 = PyDict_New();
    tmp_assign_source_3 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    Py_INCREF( tmp_or_left_value_3 );
    tmp_assign_source_3 = tmp_or_left_value_3;
    or_end_3:;
    {
        PyObject *old = par_proxies;
        assert( old != NULL );
        par_proxies = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_merge_environment_settings );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = var_prep;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 533;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_proxies;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_verify;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame.f_lineno = 532;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_settings == NULL );
    var_settings = tmp_assign_source_4;

    tmp_assign_source_5 = _PyDict_NewPresized( 2 );
    tmp_dict_value_11 = par_timeout;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_timeout;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = par_allow_redirects;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_allow_redirects;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    assert( var_send_kwargs == NULL );
    var_send_kwargs = tmp_assign_source_5;

    tmp_called_instance_3 = var_send_kwargs;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_7 = var_settings;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame.f_lineno = 541;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_update, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_prep;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_send_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_resp == NULL );
    var_resp = tmp_assign_source_6;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e49fdcf5d8a56b475b147f2b8155a1a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e49fdcf5d8a56b475b147f2b8155a1a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e49fdcf5d8a56b475b147f2b8155a1a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e49fdcf5d8a56b475b147f2b8155a1a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e49fdcf5d8a56b475b147f2b8155a1a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e49fdcf5d8a56b475b147f2b8155a1a7,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_params,
        par_data,
        par_headers,
        par_cookies,
        par_files,
        par_auth,
        par_timeout,
        par_allow_redirects,
        par_proxies,
        par_hooks,
        par_stream,
        par_verify,
        par_cert,
        par_json,
        var_resp,
        var_req,
        var_send_kwargs,
        var_prep,
        var_settings
    );


    // Release cached frame.
    if ( frame_e49fdcf5d8a56b475b147f2b8155a1a7 == cache_frame_e49fdcf5d8a56b475b147f2b8155a1a7 )
    {
        Py_DECREF( frame_e49fdcf5d8a56b475b147f2b8155a1a7 );
    }
    cache_frame_e49fdcf5d8a56b475b147f2b8155a1a7 = NULL;

    assertFrameObject( frame_e49fdcf5d8a56b475b147f2b8155a1a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_resp;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_hooks );
    Py_DECREF( par_hooks );
    par_hooks = NULL;

    CHECK_OBJECT( (PyObject *)var_resp );
    Py_DECREF( var_resp );
    var_resp = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_req );
    Py_DECREF( var_req );
    var_req = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)var_send_kwargs );
    Py_DECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_prep );
    Py_DECREF( var_prep );
    var_prep = NULL;

    CHECK_OBJECT( (PyObject *)par_files );
    Py_DECREF( par_files );
    par_files = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_settings );
    Py_DECREF( var_settings );
    var_settings = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_redirects );
    Py_DECREF( par_allow_redirects );
    par_allow_redirects = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cookies );
    Py_DECREF( par_cookies );
    par_cookies = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_hooks );
    Py_DECREF( par_hooks );
    par_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    Py_XDECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    CHECK_OBJECT( (PyObject *)par_files );
    Py_DECREF( par_files );
    par_files = NULL;

    CHECK_OBJECT( (PyObject *)par_auth );
    Py_DECREF( par_auth );
    par_auth = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_redirects );
    Py_DECREF( par_allow_redirects );
    par_allow_redirects = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_request );
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


static PyObject *impl_requests$sessions$$$function_14_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ab48f331e4c556d9601aadd3982dd1ed = NULL;

    struct Nuitka_FrameObject *frame_ab48f331e4c556d9601aadd3982dd1ed;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab48f331e4c556d9601aadd3982dd1ed, codeobj_ab48f331e4c556d9601aadd3982dd1ed, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ab48f331e4c556d9601aadd3982dd1ed = cache_frame_ab48f331e4c556d9601aadd3982dd1ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab48f331e4c556d9601aadd3982dd1ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab48f331e4c556d9601aadd3982dd1ed ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ab48f331e4c556d9601aadd3982dd1ed->m_frame.f_lineno = 554;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_GET;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab48f331e4c556d9601aadd3982dd1ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab48f331e4c556d9601aadd3982dd1ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab48f331e4c556d9601aadd3982dd1ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab48f331e4c556d9601aadd3982dd1ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab48f331e4c556d9601aadd3982dd1ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab48f331e4c556d9601aadd3982dd1ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab48f331e4c556d9601aadd3982dd1ed,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_ab48f331e4c556d9601aadd3982dd1ed == cache_frame_ab48f331e4c556d9601aadd3982dd1ed )
    {
        Py_DECREF( frame_ab48f331e4c556d9601aadd3982dd1ed );
    }
    cache_frame_ab48f331e4c556d9601aadd3982dd1ed = NULL;

    assertFrameObject( frame_ab48f331e4c556d9601aadd3982dd1ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_get );
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


static PyObject *impl_requests$sessions$$$function_15_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ec6a20f3563584f22a81ec09b8e88e4f = NULL;

    struct Nuitka_FrameObject *frame_ec6a20f3563584f22a81ec09b8e88e4f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec6a20f3563584f22a81ec09b8e88e4f, codeobj_ec6a20f3563584f22a81ec09b8e88e4f, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ec6a20f3563584f22a81ec09b8e88e4f = cache_frame_ec6a20f3563584f22a81ec09b8e88e4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec6a20f3563584f22a81ec09b8e88e4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec6a20f3563584f22a81ec09b8e88e4f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ec6a20f3563584f22a81ec09b8e88e4f->m_frame.f_lineno = 565;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 565;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_OPTIONS;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec6a20f3563584f22a81ec09b8e88e4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec6a20f3563584f22a81ec09b8e88e4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec6a20f3563584f22a81ec09b8e88e4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec6a20f3563584f22a81ec09b8e88e4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec6a20f3563584f22a81ec09b8e88e4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec6a20f3563584f22a81ec09b8e88e4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec6a20f3563584f22a81ec09b8e88e4f,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_ec6a20f3563584f22a81ec09b8e88e4f == cache_frame_ec6a20f3563584f22a81ec09b8e88e4f )
    {
        Py_DECREF( frame_ec6a20f3563584f22a81ec09b8e88e4f );
    }
    cache_frame_ec6a20f3563584f22a81ec09b8e88e4f = NULL;

    assertFrameObject( frame_ec6a20f3563584f22a81ec09b8e88e4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_options );
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


static PyObject *impl_requests$sessions$$$function_16_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_95e24830b853c5ddde3016e25b55cf6d = NULL;

    struct Nuitka_FrameObject *frame_95e24830b853c5ddde3016e25b55cf6d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95e24830b853c5ddde3016e25b55cf6d, codeobj_95e24830b853c5ddde3016e25b55cf6d, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_95e24830b853c5ddde3016e25b55cf6d = cache_frame_95e24830b853c5ddde3016e25b55cf6d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95e24830b853c5ddde3016e25b55cf6d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95e24830b853c5ddde3016e25b55cf6d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_95e24830b853c5ddde3016e25b55cf6d->m_frame.f_lineno = 576;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_false_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_HEAD;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95e24830b853c5ddde3016e25b55cf6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95e24830b853c5ddde3016e25b55cf6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95e24830b853c5ddde3016e25b55cf6d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95e24830b853c5ddde3016e25b55cf6d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95e24830b853c5ddde3016e25b55cf6d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95e24830b853c5ddde3016e25b55cf6d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95e24830b853c5ddde3016e25b55cf6d,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_95e24830b853c5ddde3016e25b55cf6d == cache_frame_95e24830b853c5ddde3016e25b55cf6d )
    {
        Py_DECREF( frame_95e24830b853c5ddde3016e25b55cf6d );
    }
    cache_frame_95e24830b853c5ddde3016e25b55cf6d = NULL;

    assertFrameObject( frame_95e24830b853c5ddde3016e25b55cf6d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_head );
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


static PyObject *impl_requests$sessions$$$function_17_post( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_json = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_05a2b7d73059c9a7a3f7d026e8a46dd2 = NULL;

    struct Nuitka_FrameObject *frame_05a2b7d73059c9a7a3f7d026e8a46dd2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05a2b7d73059c9a7a3f7d026e8a46dd2, codeobj_05a2b7d73059c9a7a3f7d026e8a46dd2, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_05a2b7d73059c9a7a3f7d026e8a46dd2 = cache_frame_05a2b7d73059c9a7a3f7d026e8a46dd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_POST;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_json;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_json;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05a2b7d73059c9a7a3f7d026e8a46dd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05a2b7d73059c9a7a3f7d026e8a46dd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05a2b7d73059c9a7a3f7d026e8a46dd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05a2b7d73059c9a7a3f7d026e8a46dd2,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_json,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 == cache_frame_05a2b7d73059c9a7a3f7d026e8a46dd2 )
    {
        Py_DECREF( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );
    }
    cache_frame_05a2b7d73059c9a7a3f7d026e8a46dd2 = NULL;

    assertFrameObject( frame_05a2b7d73059c9a7a3f7d026e8a46dd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_post );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_json );
    Py_DECREF( par_json );
    par_json = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_post );
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


static PyObject *impl_requests$sessions$$$function_18_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b3fad0de3d2fab85695694d43f59dd04 = NULL;

    struct Nuitka_FrameObject *frame_b3fad0de3d2fab85695694d43f59dd04;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3fad0de3d2fab85695694d43f59dd04, codeobj_b3fad0de3d2fab85695694d43f59dd04, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3fad0de3d2fab85695694d43f59dd04 = cache_frame_b3fad0de3d2fab85695694d43f59dd04;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3fad0de3d2fab85695694d43f59dd04 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3fad0de3d2fab85695694d43f59dd04 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_PUT;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3fad0de3d2fab85695694d43f59dd04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3fad0de3d2fab85695694d43f59dd04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3fad0de3d2fab85695694d43f59dd04 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3fad0de3d2fab85695694d43f59dd04, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3fad0de3d2fab85695694d43f59dd04->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3fad0de3d2fab85695694d43f59dd04, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3fad0de3d2fab85695694d43f59dd04,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_b3fad0de3d2fab85695694d43f59dd04 == cache_frame_b3fad0de3d2fab85695694d43f59dd04 )
    {
        Py_DECREF( frame_b3fad0de3d2fab85695694d43f59dd04 );
    }
    cache_frame_b3fad0de3d2fab85695694d43f59dd04 = NULL;

    assertFrameObject( frame_b3fad0de3d2fab85695694d43f59dd04 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_put );
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


static PyObject *impl_requests$sessions$$$function_19_patch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_268ad4bcde567788f3612f7926981f98 = NULL;

    struct Nuitka_FrameObject *frame_268ad4bcde567788f3612f7926981f98;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_268ad4bcde567788f3612f7926981f98, codeobj_268ad4bcde567788f3612f7926981f98, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_268ad4bcde567788f3612f7926981f98 = cache_frame_268ad4bcde567788f3612f7926981f98;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_268ad4bcde567788f3612f7926981f98 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_268ad4bcde567788f3612f7926981f98 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_PATCH;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_268ad4bcde567788f3612f7926981f98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_268ad4bcde567788f3612f7926981f98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_268ad4bcde567788f3612f7926981f98 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_268ad4bcde567788f3612f7926981f98, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_268ad4bcde567788f3612f7926981f98->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_268ad4bcde567788f3612f7926981f98, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_268ad4bcde567788f3612f7926981f98,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_268ad4bcde567788f3612f7926981f98 == cache_frame_268ad4bcde567788f3612f7926981f98 )
    {
        Py_DECREF( frame_268ad4bcde567788f3612f7926981f98 );
    }
    cache_frame_268ad4bcde567788f3612f7926981f98 = NULL;

    assertFrameObject( frame_268ad4bcde567788f3612f7926981f98 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_patch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_patch );
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


static PyObject *impl_requests$sessions$$$function_20_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bd1437daabd3aaf03f38a1297715cc00 = NULL;

    struct Nuitka_FrameObject *frame_bd1437daabd3aaf03f38a1297715cc00;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd1437daabd3aaf03f38a1297715cc00, codeobj_bd1437daabd3aaf03f38a1297715cc00, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bd1437daabd3aaf03f38a1297715cc00 = cache_frame_bd1437daabd3aaf03f38a1297715cc00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd1437daabd3aaf03f38a1297715cc00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd1437daabd3aaf03f38a1297715cc00 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_DELETE;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd1437daabd3aaf03f38a1297715cc00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd1437daabd3aaf03f38a1297715cc00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd1437daabd3aaf03f38a1297715cc00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd1437daabd3aaf03f38a1297715cc00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd1437daabd3aaf03f38a1297715cc00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd1437daabd3aaf03f38a1297715cc00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd1437daabd3aaf03f38a1297715cc00,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_bd1437daabd3aaf03f38a1297715cc00 == cache_frame_bd1437daabd3aaf03f38a1297715cc00 )
    {
        Py_DECREF( frame_bd1437daabd3aaf03f38a1297715cc00 );
    }
    cache_frame_bd1437daabd3aaf03f38a1297715cc00 = NULL;

    assertFrameObject( frame_bd1437daabd3aaf03f38a1297715cc00 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_delete );
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


static PyObject *impl_requests$sessions$$$function_21_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_resp = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_hooks = NULL;
    PyObject *var_gen = NULL;
    PyObject *var_elapsed = NULL;
    PyObject *var_start = NULL;
    PyObject *var_r = NULL;
    PyObject *var_allow_redirects = NULL;
    PyObject *var_adapter = NULL;
    PyObject *var_history = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg2_4;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    PyObject *tmp_dircall_arg3_4;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    static struct Nuitka_FrameObject *cache_frame_957ea430b49263a9612c15f576e35b03 = NULL;

    struct Nuitka_FrameObject *frame_957ea430b49263a9612c15f576e35b03;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_957ea430b49263a9612c15f576e35b03, codeobj_957ea430b49263a9612c15f576e35b03, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_957ea430b49263a9612c15f576e35b03 = cache_frame_957ea430b49263a9612c15f576e35b03;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_957ea430b49263a9612c15f576e35b03 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_957ea430b49263a9612c15f576e35b03 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_kwargs;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setdefault );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_stream;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 633;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 633;
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


        exception_lineno = 633;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_kwargs;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_verify;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_verify );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 634;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_kwargs;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setdefault );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_cert;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cert );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 635;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 635;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_kwargs;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setdefault );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_proxies;
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_proxies );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 636;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 636;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_request;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Request" );
        exception_tb = NULL;

        exception_lineno = 640;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 641;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 641;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 644;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 644;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_allow_redirects == NULL );
    var_allow_redirects = tmp_assign_source_1;

    tmp_called_instance_2 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 645;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_stream_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stream == NULL );
    var_stream = tmp_assign_source_2;

    tmp_source_name_9 = par_request;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hooks );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 646;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hooks == NULL );
    var_hooks = tmp_assign_source_3;

    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_adapter );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_11 = par_request;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_url );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 649;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_url;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 649;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_adapter == NULL );
    var_adapter = tmp_assign_source_4;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "preferred_clock" );
        exception_tb = NULL;

        exception_lineno = 652;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 652;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_start == NULL );
    var_start = tmp_assign_source_5;

    tmp_source_name_12 = var_adapter;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_request;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_6;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "preferred_clock" );
        exception_tb = NULL;

        exception_lineno = 658;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 658;
    tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 658;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = var_start;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 658;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_elapsed == NULL );
    var_elapsed = tmp_assign_source_7;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "timedelta" );
        exception_tb = NULL;

        exception_lineno = 659;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_elapsed;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_seconds;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 659;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 659;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_r;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_elapsed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 659;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dispatch_hook );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "dispatch_hook" );
        exception_tb = NULL;

        exception_lineno = 662;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_response;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_hooks;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_r;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_2 );
    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_assign_source_8 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        assert( old != NULL );
        var_r = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_13 = var_r;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_history );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 665;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_14 = var_r;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_history );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 668;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
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

        exception_lineno = 668;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_resp;
        var_resp = tmp_assign_source_11;
        Py_INCREF( var_resp );
        Py_XDECREF( old );
    }

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;

        exception_lineno = 669;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_cookies );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_16 = var_resp;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_request );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 669;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_17 = var_resp;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_raw );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 669;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 669;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;
        type_description_1 = "ooooooooooooo";
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

    branch_no_2:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;

        exception_lineno = 671;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_cookies );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = par_request;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_source_name_19 = var_r;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_raw );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 671;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 671;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_2 = var_allow_redirects;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_resolve_redirects );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_r;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_request;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_3 );
    tmp_dircall_arg3_3 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_3 );
    Py_INCREF( tmp_dircall_arg3_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
        tmp_assign_source_12 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_gen == NULL );
    var_gen = tmp_assign_source_12;

    // Tried code:
    tmp_iter_arg_2 = var_gen;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_14;

    tmp_assign_source_15 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_15;

    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_16 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 677;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_16;
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

    tmp_compare_left_2 = exception_keeper_type_3;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 677;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_2;
    goto branch_end_5;
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    branch_end_5:;
    // End of try:
    try_end_3:;
    tmp_assign_source_17 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = var_resp;
        var_resp = tmp_assign_source_17;
        Py_INCREF( var_resp );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = var_resp;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
    return NULL;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    assert( var_history == NULL );
    var_history = tmp_assign_source_13;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_18 = PyList_New( 0 );
    assert( var_history == NULL );
    var_history = tmp_assign_source_18;

    branch_end_4:;
    tmp_cond_value_3 = var_history;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_3 = var_history;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_15 = const_int_0;
    tmp_args_element_name_16 = var_r;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 684;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_insert, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = var_history;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = 686;
    tmp_assign_source_19 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_pop );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        assert( old != NULL );
        var_r = tmp_assign_source_19;
        Py_DECREF( old );
    }

    tmp_assattr_name_2 = var_history;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = var_r;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_history, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 687;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_cond_value_4 = var_allow_redirects;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    // Tried code:
    tmp_source_name_21 = par_self;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_resolve_redirects );
    if ( tmp_dircall_arg1_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_dircall_arg2_4 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_r;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_request;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_4 );
    tmp_dircall_arg3_4 = PyDict_Copy( const_dict_5a980a96e502e21a57174819267c7344 );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_1};
        tmp_value_name_3 = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_value_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_assattr_name_3 = ITERATOR_NEXT( tmp_value_name_3 );
    Py_DECREF( tmp_value_name_3 );
    if ( tmp_assattr_name_3 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 692;
        goto try_except_handler_6;
    }
    tmp_assattr_target_3 = var_r;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__next, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 692;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_assattr_name_3 );
    goto try_end_4;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_957ea430b49263a9612c15f576e35b03 );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_957ea430b49263a9612c15f576e35b03, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_957ea430b49263a9612c15f576e35b03, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 693;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 691;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_957ea430b49263a9612c15f576e35b03->m_frame) frame_957ea430b49263a9612c15f576e35b03->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
    return NULL;
    // End of try:
    try_end_4:;
    branch_no_7:;
    tmp_cond_value_5 = var_stream;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 696;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_source_name_22 = var_r;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_content );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_957ea430b49263a9612c15f576e35b03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_957ea430b49263a9612c15f576e35b03 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_957ea430b49263a9612c15f576e35b03, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_957ea430b49263a9612c15f576e35b03->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_957ea430b49263a9612c15f576e35b03, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_957ea430b49263a9612c15f576e35b03,
        type_description_1,
        par_self,
        par_request,
        par_kwargs,
        var_resp,
        var_stream,
        var_hooks,
        var_gen,
        var_elapsed,
        var_start,
        var_r,
        var_allow_redirects,
        var_adapter,
        var_history
    );


    // Release cached frame.
    if ( frame_957ea430b49263a9612c15f576e35b03 == cache_frame_957ea430b49263a9612c15f576e35b03 )
    {
        Py_DECREF( frame_957ea430b49263a9612c15f576e35b03 );
    }
    cache_frame_957ea430b49263a9612c15f576e35b03 = NULL;

    assertFrameObject( frame_957ea430b49263a9612c15f576e35b03 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_r;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_resp );
    var_resp = NULL;

    CHECK_OBJECT( (PyObject *)var_stream );
    Py_DECREF( var_stream );
    var_stream = NULL;

    CHECK_OBJECT( (PyObject *)var_hooks );
    Py_DECREF( var_hooks );
    var_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    CHECK_OBJECT( (PyObject *)var_elapsed );
    Py_DECREF( var_elapsed );
    var_elapsed = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_allow_redirects );
    Py_DECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    CHECK_OBJECT( (PyObject *)var_adapter );
    Py_DECREF( var_adapter );
    var_adapter = NULL;

    CHECK_OBJECT( (PyObject *)var_history );
    Py_DECREF( var_history );
    var_history = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    Py_XDECREF( var_hooks );
    var_hooks = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_elapsed );
    var_elapsed = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_send );
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


static PyObject *impl_requests$sessions$$$function_22_merge_environment_settings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *par_stream = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *var_v = NULL;
    PyObject *var_no_proxy = NULL;
    PyObject *var_env_proxies = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_747c59d3c52723c34f114a914f50e04d = NULL;

    struct Nuitka_FrameObject *frame_747c59d3c52723c34f114a914f50e04d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_747c59d3c52723c34f114a914f50e04d, codeobj_747c59d3c52723c34f114a914f50e04d, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_747c59d3c52723c34f114a914f50e04d = cache_frame_747c59d3c52723c34f114a914f50e04d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_747c59d3c52723c34f114a914f50e04d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_747c59d3c52723c34f114a914f50e04d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trust_env );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 708;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 708;
        type_description_1 = "oooooooooo";
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
    tmp_compare_left_1 = par_proxies;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_instance_1 = par_proxies;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 710;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 710;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = Py_None;
    Py_INCREF( tmp_assign_source_1 );
    condexpr_end_1:;
    assert( var_no_proxy == NULL );
    var_no_proxy = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_environ_proxies" );
        exception_tb = NULL;

        exception_lineno = 711;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_no_proxy;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_no_proxy;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 711;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 711;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_env_proxies == NULL );
    var_env_proxies = tmp_assign_source_2;

    tmp_called_instance_2 = var_env_proxies;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 712;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_4 == NULL )
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
        exception_lineno = 712;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
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

    tmp_compare_left_2 = exception_keeper_type_1;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 712;
        type_description_1 = "oooooooooo";
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
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
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
        exception_lineno = 712;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
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
        exception_lineno = 712;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

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
                exception_lineno = 712;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 712;
        goto try_except_handler_5;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_9;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_3 = par_proxies;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_1 = var_k;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 713;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_setdefault, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 713;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compexpr_left_1 = par_verify;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_True;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = par_verify;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_None;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 718;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 718;
    tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 719;
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
    Py_DECREF( tmp_or_left_value_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 719;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_environ );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 719;
    tmp_or_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_10 = tmp_or_left_value_2;
    or_end_2:;
    {
        PyObject *old = par_verify;
        assert( old != NULL );
        par_verify = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_3:;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 722;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_proxies;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_proxies );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 722;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_proxies;
        assert( old != NULL );
        par_proxies = tmp_assign_source_11;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 723;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stream );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 723;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 723;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 723;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        assert( old != NULL );
        par_stream = tmp_assign_source_12;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 724;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_verify;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;

        exception_lineno = 724;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_verify );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 724;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_verify;
        par_verify = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;

        exception_lineno = 725;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cert );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 725;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_747c59d3c52723c34f114a914f50e04d->m_frame.f_lineno = 725;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 725;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cert;
        assert( old != NULL );
        par_cert = tmp_assign_source_14;
        Py_DECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_747c59d3c52723c34f114a914f50e04d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_747c59d3c52723c34f114a914f50e04d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_747c59d3c52723c34f114a914f50e04d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_747c59d3c52723c34f114a914f50e04d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_747c59d3c52723c34f114a914f50e04d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_747c59d3c52723c34f114a914f50e04d,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        par_stream,
        par_verify,
        par_cert,
        var_v,
        var_no_proxy,
        var_env_proxies,
        var_k
    );


    // Release cached frame.
    if ( frame_747c59d3c52723c34f114a914f50e04d == cache_frame_747c59d3c52723c34f114a914f50e04d )
    {
        Py_DECREF( frame_747c59d3c52723c34f114a914f50e04d );
    }
    cache_frame_747c59d3c52723c34f114a914f50e04d = NULL;

    assertFrameObject( frame_747c59d3c52723c34f114a914f50e04d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = _PyDict_NewPresized( 4 );
    tmp_dict_value_2 = par_verify;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_verify;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_proxies;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_proxies;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_stream;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_stream;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_cert;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_cert;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_merge_environment_settings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_merge_environment_settings );
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


static PyObject *impl_requests$sessions$$$function_23_get_adapter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *var_adapter = NULL;
    PyObject *var_prefix = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_bd34d8a583fc23da776fb361ead16bb3 = NULL;

    struct Nuitka_FrameObject *frame_bd34d8a583fc23da776fb361ead16bb3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd34d8a583fc23da776fb361ead16bb3, codeobj_bd34d8a583fc23da776fb361ead16bb3, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bd34d8a583fc23da776fb361ead16bb3 = cache_frame_bd34d8a583fc23da776fb361ead16bb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd34d8a583fc23da776fb361ead16bb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd34d8a583fc23da776fb361ead16bb3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 736;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
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


        type_description_1 = "oooo";
        exception_lineno = 736;
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

        exception_lineno = 736;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 736;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "oooo";
        exception_lineno = 736;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooo";
                exception_lineno = 736;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 736;
        goto try_except_handler_5;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_prefix;
        var_prefix = tmp_assign_source_6;
        Py_INCREF( var_prefix );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_adapter;
        var_adapter = tmp_assign_source_7;
        Py_INCREF( var_adapter );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_2 = par_url;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 738;
    tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_instance_3 = var_prefix;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 738;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 738;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 738;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 738;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = var_adapter;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidSchema" );
        exception_tb = NULL;

        exception_lineno = 742;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = const_str_digest_e5c47cda55c76ea732e8b1b107ec7f3e;
    tmp_args_element_name_3 = par_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 742;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bd34d8a583fc23da776fb361ead16bb3->m_frame.f_lineno = 742;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 742;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd34d8a583fc23da776fb361ead16bb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd34d8a583fc23da776fb361ead16bb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd34d8a583fc23da776fb361ead16bb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd34d8a583fc23da776fb361ead16bb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd34d8a583fc23da776fb361ead16bb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd34d8a583fc23da776fb361ead16bb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd34d8a583fc23da776fb361ead16bb3,
        type_description_1,
        par_self,
        par_url,
        var_adapter,
        var_prefix
    );


    // Release cached frame.
    if ( frame_bd34d8a583fc23da776fb361ead16bb3 == cache_frame_bd34d8a583fc23da776fb361ead16bb3 )
    {
        Py_DECREF( frame_bd34d8a583fc23da776fb361ead16bb3 );
    }
    cache_frame_bd34d8a583fc23da776fb361ead16bb3 = NULL;

    assertFrameObject( frame_bd34d8a583fc23da776fb361ead16bb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_get_adapter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_adapter );
    Py_DECREF( var_adapter );
    var_adapter = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_prefix );
    Py_DECREF( var_prefix );
    var_prefix = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_get_adapter );
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


static PyObject *impl_requests$sessions$$$function_24_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_v = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_b868af187788df8df15a296201f5a11f = NULL;

    struct Nuitka_FrameObject *frame_b868af187788df8df15a296201f5a11f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b868af187788df8df15a296201f5a11f, codeobj_b868af187788df8df15a296201f5a11f, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_b868af187788df8df15a296201f5a11f = cache_frame_b868af187788df8df15a296201f5a11f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b868af187788df8df15a296201f5a11f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b868af187788df8df15a296201f5a11f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 746;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b868af187788df8df15a296201f5a11f->m_frame.f_lineno = 746;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 746;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 746;
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
        exception_lineno = 746;
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

        exception_lineno = 746;
        type_description_1 = "oo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_3;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_v;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_b868af187788df8df15a296201f5a11f->m_frame.f_lineno = 747;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 747;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 746;
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
    RESTORE_FRAME_EXCEPTION( frame_b868af187788df8df15a296201f5a11f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b868af187788df8df15a296201f5a11f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b868af187788df8df15a296201f5a11f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b868af187788df8df15a296201f5a11f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b868af187788df8df15a296201f5a11f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b868af187788df8df15a296201f5a11f,
        type_description_1,
        par_self,
        var_v
    );


    // Release cached frame.
    if ( frame_b868af187788df8df15a296201f5a11f == cache_frame_b868af187788df8df15a296201f5a11f )
    {
        Py_DECREF( frame_b868af187788df8df15a296201f5a11f );
    }
    cache_frame_b868af187788df8df15a296201f5a11f = NULL;

    assertFrameObject( frame_b868af187788df8df15a296201f5a11f );

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_close );
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


static PyObject *impl_requests$sessions$$$function_25_mount( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *par_adapter = python_pars[ 2 ];
    PyObject *var_keys_to_move = NULL;
    PyObject *var_key = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_f7f1b78c242d68948f6ac7c6d2cd14e3 = NULL;

    struct Nuitka_FrameObject *frame_f7f1b78c242d68948f6ac7c6d2cd14e3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7f1b78c242d68948f6ac7c6d2cd14e3, codeobj_f7f1b78c242d68948f6ac7c6d2cd14e3, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f7f1b78c242d68948f6ac7c6d2cd14e3 = cache_frame_f7f1b78c242d68948f6ac7c6d2cd14e3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_ass_subvalue_1 = par_adapter;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 754;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = par_prefix;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 754;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_adapters );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooooo";
        exception_lineno = 755;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
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

        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_5;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_k;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_len_arg_2 = par_prefix;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_right_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = var_k;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 755;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_keys_to_move == NULL );
    var_keys_to_move = tmp_assign_source_1;

    tmp_iter_arg_2 = var_keys_to_move;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 757;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto try_end_2;
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

    tmp_compare_left_3 = exception_keeper_type_3;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 757;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_2;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    branch_end_3:;
    // End of try:
    try_end_2:;
    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_8;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_adapters );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 758;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_key;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f7f1b78c242d68948f6ac7c6d2cd14e3->m_frame.f_lineno = 758;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 758;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_adapters );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_2 );

        exception_lineno = 758;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_2 = var_key;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 758;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7f1b78c242d68948f6ac7c6d2cd14e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7f1b78c242d68948f6ac7c6d2cd14e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7f1b78c242d68948f6ac7c6d2cd14e3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7f1b78c242d68948f6ac7c6d2cd14e3,
        type_description_1,
        par_self,
        par_prefix,
        par_adapter,
        var_keys_to_move,
        var_key,
        var_k
    );


    // Release cached frame.
    if ( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 == cache_frame_f7f1b78c242d68948f6ac7c6d2cd14e3 )
    {
        Py_DECREF( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 );
    }
    cache_frame_f7f1b78c242d68948f6ac7c6d2cd14e3 = NULL;

    assertFrameObject( frame_f7f1b78c242d68948f6ac7c6d2cd14e3 );

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_keys_to_move );
    Py_DECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter );
    Py_DECREF( par_adapter );
    par_adapter = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter );
    Py_DECREF( par_adapter );
    par_adapter = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25_mount );
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


static PyObject *impl_requests$sessions$$$function_26___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_state = NULL;
    PyObject *outline_0_var_attr = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_471450d6e6875e6754cac73575d2dcf4 = NULL;

    struct Nuitka_FrameObject *frame_471450d6e6875e6754cac73575d2dcf4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_471450d6e6875e6754cac73575d2dcf4, codeobj_471450d6e6875e6754cac73575d2dcf4, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_471450d6e6875e6754cac73575d2dcf4 = cache_frame_471450d6e6875e6754cac73575d2dcf4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_471450d6e6875e6754cac73575d2dcf4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_471450d6e6875e6754cac73575d2dcf4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___attrs__ );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_dictcontraction_1__$0 == NULL );
    tmp_dictcontraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyDict_New();
    assert( tmp_dictcontraction_1__contraction == NULL );
    tmp_dictcontraction_1__contraction = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_dictcontraction_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_4 == NULL )
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
        exception_lineno = 761;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_dictcontraction_1__iter_value_0;
        tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    goto try_end_1;
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

        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_3;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_dictcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = outline_0_var_attr;
        outline_0_var_attr = tmp_assign_source_5;
        Py_INCREF( outline_0_var_attr );
        Py_XDECREF( old );
    }

    tmp_getattr_target_1 = par_self;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = outline_0_var_attr;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_dictset_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    tmp_dictset_dict = tmp_dictcontraction_1__contraction;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_attr;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_dictcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

    goto try_return_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_attr );
    outline_0_var_attr = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_attr );
    outline_0_var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
    return NULL;
    outline_exception_1:;
    exception_lineno = 761;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_state == NULL );
    var_state = tmp_assign_source_1;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_471450d6e6875e6754cac73575d2dcf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_471450d6e6875e6754cac73575d2dcf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_471450d6e6875e6754cac73575d2dcf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_471450d6e6875e6754cac73575d2dcf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_471450d6e6875e6754cac73575d2dcf4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_471450d6e6875e6754cac73575d2dcf4,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if ( frame_471450d6e6875e6754cac73575d2dcf4 == cache_frame_471450d6e6875e6754cac73575d2dcf4 )
    {
        Py_DECREF( frame_471450d6e6875e6754cac73575d2dcf4 );
    }
    cache_frame_471450d6e6875e6754cac73575d2dcf4 = NULL;

    assertFrameObject( frame_471450d6e6875e6754cac73575d2dcf4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_state;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_state );
    Py_DECREF( var_state );
    var_state = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___getstate__ );
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


static PyObject *impl_requests$sessions$$$function_27___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_value = NULL;
    PyObject *var_attr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_0e397d7e6480d1d9cc7a8ef11ffbb605 = NULL;

    struct Nuitka_FrameObject *frame_0e397d7e6480d1d9cc7a8ef11ffbb605;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e397d7e6480d1d9cc7a8ef11ffbb605, codeobj_0e397d7e6480d1d9cc7a8ef11ffbb605, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0e397d7e6480d1d9cc7a8ef11ffbb605 = cache_frame_0e397d7e6480d1d9cc7a8ef11ffbb605;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_state;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0e397d7e6480d1d9cc7a8ef11ffbb605->m_frame.f_lineno = 765;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 765;
        type_description_1 = "oooo";
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


        type_description_1 = "oooo";
        exception_lineno = 765;
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

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 765;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 765;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "oooo";
        exception_lineno = 765;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooo";
                exception_lineno = 765;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 765;
        goto try_except_handler_5;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_attr;
        var_attr = tmp_assign_source_6;
        Py_INCREF( var_attr );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_7;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_setattr_target_1 = par_self;

    CHECK_OBJECT( tmp_setattr_target_1 );
    tmp_setattr_attr_1 = var_attr;

    CHECK_OBJECT( tmp_setattr_attr_1 );
    tmp_setattr_value_1 = var_value;

    CHECK_OBJECT( tmp_setattr_value_1 );
    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 766;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 765;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e397d7e6480d1d9cc7a8ef11ffbb605, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e397d7e6480d1d9cc7a8ef11ffbb605->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e397d7e6480d1d9cc7a8ef11ffbb605, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e397d7e6480d1d9cc7a8ef11ffbb605,
        type_description_1,
        par_self,
        par_state,
        var_value,
        var_attr
    );


    // Release cached frame.
    if ( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 == cache_frame_0e397d7e6480d1d9cc7a8ef11ffbb605 )
    {
        Py_DECREF( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 );
    }
    cache_frame_0e397d7e6480d1d9cc7a8ef11ffbb605 = NULL;

    assertFrameObject( frame_0e397d7e6480d1d9cc7a8ef11ffbb605 );

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_27___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_27___setstate__ );
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


static PyObject *impl_requests$sessions$$$function_28_session( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c51799fb6a70791e326c5d4a2cbc170f = NULL;

    struct Nuitka_FrameObject *frame_c51799fb6a70791e326c5d4a2cbc170f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_c51799fb6a70791e326c5d4a2cbc170f, codeobj_c51799fb6a70791e326c5d4a2cbc170f, module_requests$sessions, 0 );
    frame_c51799fb6a70791e326c5d4a2cbc170f = cache_frame_c51799fb6a70791e326c5d4a2cbc170f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c51799fb6a70791e326c5d4a2cbc170f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c51799fb6a70791e326c5d4a2cbc170f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Session );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Session" );
        exception_tb = NULL;

        exception_lineno = 781;

        goto frame_exception_exit_1;
    }

    frame_c51799fb6a70791e326c5d4a2cbc170f->m_frame.f_lineno = 781;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 781;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51799fb6a70791e326c5d4a2cbc170f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51799fb6a70791e326c5d4a2cbc170f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51799fb6a70791e326c5d4a2cbc170f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c51799fb6a70791e326c5d4a2cbc170f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c51799fb6a70791e326c5d4a2cbc170f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c51799fb6a70791e326c5d4a2cbc170f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c51799fb6a70791e326c5d4a2cbc170f,
        type_description_1
    );


    // Release cached frame.
    if ( frame_c51799fb6a70791e326c5d4a2cbc170f == cache_frame_c51799fb6a70791e326c5d4a2cbc170f )
    {
        Py_DECREF( frame_c51799fb6a70791e326c5d4a2cbc170f );
    }
    cache_frame_c51799fb6a70791e326c5d4a2cbc170f = NULL;

    assertFrameObject( frame_c51799fb6a70791e326c5d4a2cbc170f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_28_session );
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



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_10___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_181911aaa7b425454401c0168d356ce3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_11___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f364db0fd7645476044828c340eb9110,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_12_prepare_request,
        const_str_plain_prepare_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d05e57294edb17cdfe3ba579a70dc77c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_bb0c986a4d44a65e09f2da3af698fc66,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_13_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e49fdcf5d8a56b475b147f2b8155a1a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_7a75f5a047e8ecb4a204038c360e59fa,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_14_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab48f331e4c556d9601aadd3982dd1ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_28eb6d6e3c84195b87f5eda206592417,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_15_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ec6a20f3563584f22a81ec09b8e88e4f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_3773766f3922dc10926506cd67493626,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_16_head,
        const_str_plain_head,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_95e24830b853c5ddde3016e25b55cf6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_post( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_17_post,
        const_str_plain_post,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05a2b7d73059c9a7a3f7d026e8a46dd2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_df29e6ce65bab6565825f33ca253f321,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_18_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3fad0de3d2fab85695694d43f59dd04,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_5a03fab32d979e313c02d1eea965ab54,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_patch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_19_patch,
        const_str_plain_patch,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_268ad4bcde567788f3612f7926981f98,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_5f2af7e954563f0f1b8598cb903357ce,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_1_merge_setting,
        const_str_plain_merge_setting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_871c4f66988e7a26d52e776d4144def1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_67055a59082a8581b7a2c86a2d1c1f83,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_20_delete,
        const_str_plain_delete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd1437daabd3aaf03f38a1297715cc00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_489820f4fee1c95447c20d7aee4bc394,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_send(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_21_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_957ea430b49263a9612c15f576e35b03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_48d563b3d6be908aabde89b2dd46bb34,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_22_merge_environment_settings,
        const_str_plain_merge_environment_settings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_747c59d3c52723c34f114a914f50e04d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_23_get_adapter,
        const_str_plain_get_adapter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd34d8a583fc23da776fb361ead16bb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_24_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b868af187788df8df15a296201f5a11f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_7e68f1bdd87458491c575c9c8a14f24c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25_mount(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_25_mount,
        const_str_plain_mount,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f7f1b78c242d68948f6ac7c6d2cd14e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_26___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_471450d6e6875e6754cac73575d2dcf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_27___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e397d7e6480d1d9cc7a8ef11ffbb605,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_28_session(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_28_session,
        const_str_plain_session,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c51799fb6a70791e326c5d4a2cbc170f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_73d6d8215c67828c30ea5a0548aac597,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_2_merge_hooks,
        const_str_plain_merge_hooks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b0d5a00aafd3340b2ced07dc7e18a246,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_3_get_redirect_target,
        const_str_plain_get_redirect_target,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9a5bb2e4536734a06b527f3e141cbe9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_4_should_strip_auth,
        const_str_plain_should_strip_auth,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_67209afde685ce814bb66bfcc58e5269,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_0186b0786c0e31948d9081496849d709,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_5_resolve_redirects,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a53bd476806289c76327c26a82fee9a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_83853292c48098773b03eae760dcfe38,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_6_rebuild_auth,
        const_str_plain_rebuild_auth,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e118af105a2b1171517dd70954949588,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_1c229bac7f81999111a1bfbc0984644e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_7_rebuild_proxies,
        const_str_plain_rebuild_proxies,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_43cd56918363bee914fbc708d8519cc4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_131435ff30698deac2d874478938fdd4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_8_rebuild_method,
        const_str_plain_rebuild_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9b10d3a7f6482093180f3a07ac9ba5ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_8b3e93dde92996b29edc87dca601bdd4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58fbde5f52c09d5f95b0f9b7385d749e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$sessions =
{
    PyModuleDef_HEAD_INIT,
    "requests.sessions",   /* m_name */
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

MOD_INIT_DECL( requests$sessions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$sessions );
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
    puts("requests.sessions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.sessions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.sessions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$sessions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$sessions = Py_InitModule4(
        "requests.sessions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$sessions = PyModule_Create( &mdef_requests$sessions );
#endif

    moduledict_requests$sessions = MODULE_DICT( module_requests$sessions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$sessions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_requests$sessions,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$sessions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_147a008155143b0e10b18dcd3be84fb5, module_requests$sessions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
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
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_13dfae501303bd529d9e321c6709f042;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    PyObject *locals_SessionRedirectMixin_96 = NULL;
    PyObject *locals_Session_337 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_38880064d8a718ac4fe097a5f0516329;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_13dfae501303bd529d9e321c6709f042 = MAKE_MODULE_FRAME( codeobj_13dfae501303bd529d9e321c6709f042, module_requests$sessions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_13dfae501303bd529d9e321c6709f042 );
    assert( Py_REFCNT( frame_13dfae501303bd529d9e321c6709f042 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 10;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_sys;
    tmp_globals_name_2 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 11;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_time;
    tmp_globals_name_3 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 12;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_plain_datetime;
    tmp_globals_name_4 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_timedelta_tuple;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_timedelta );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_6 );
    tmp_name_name_5 = const_str_plain_collections;
    tmp_globals_name_5 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_OrderedDict_tuple;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 14;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_OrderedDict );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_7 );
    tmp_name_name_6 = const_str_plain_auth;
    tmp_globals_name_6 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain__basic_auth_str_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__basic_auth_str );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_8 );
    tmp_name_name_7 = const_str_plain_compat;
    tmp_globals_name_7 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_153dcf20c10bdd54f82262576a731803_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 17;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_cookielib );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_is_py3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_urljoin );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_urlparse );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Mapping );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping, tmp_assign_source_14 );
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

    tmp_name_name_8 = const_str_plain_cookies;
    tmp_globals_name_8 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 18;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_cookiejar_from_dict );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_16 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_extract_cookies_to_jar );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_17 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RequestsCookieJar );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_18 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_merge_cookies );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_19 );
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

    tmp_name_name_9 = const_str_plain_models;
    tmp_globals_name_9 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 20;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Request );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request, tmp_assign_source_21 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_PreparedRequest );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest, tmp_assign_source_22 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_DEFAULT_REDIRECT_LIMIT );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT, tmp_assign_source_23 );
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

    tmp_name_name_10 = const_str_plain_hooks;
    tmp_globals_name_10 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 21;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_default_hooks );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks, tmp_assign_source_25 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_dispatch_hook );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook, tmp_assign_source_26 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_11 = const_str_plain__internal_utils;
    tmp_globals_name_11 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_to_native_string_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 22;
    tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_to_native_string );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_27 );
    tmp_name_name_12 = const_str_plain_utils;
    tmp_globals_name_12 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_cc65bfcb889275d4618cf0078e40b354_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 23;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_28;

    // Tried code:
    tmp_import_name_from_19 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_to_key_val_list );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list, tmp_assign_source_29 );
    tmp_import_name_from_20 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_default_headers );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers, tmp_assign_source_30 );
    tmp_import_name_from_21 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_DEFAULT_PORTS );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_PORTS, tmp_assign_source_31 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_13 = const_str_plain_exceptions;
    tmp_globals_name_13 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 24;
    tmp_assign_source_32 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_32;

    // Tried code:
    tmp_import_name_from_22 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_TooManyRedirects );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_33 );
    tmp_import_name_from_23 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_InvalidSchema );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_34 );
    tmp_import_name_from_24 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ChunkedEncodingError );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_35 );
    tmp_import_name_from_25 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_ContentDecodingError );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_36 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_14 = const_str_plain_structures;
    tmp_globals_name_14 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 27;
    tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_CaseInsensitiveDict );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_37 );
    tmp_name_name_15 = const_str_plain_adapters;
    tmp_globals_name_15 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_HTTPAdapter_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 28;
    tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_HTTPAdapter );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_38 );
    tmp_name_name_16 = const_str_plain_utils;
    tmp_globals_name_16 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 30;
    tmp_assign_source_39 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_39;

    // Tried code:
    tmp_import_name_from_28 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_requote_uri );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri, tmp_assign_source_40 );
    tmp_import_name_from_29 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_get_environ_proxies );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies, tmp_assign_source_41 );
    tmp_import_name_from_30 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_get_netrc_auth );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth, tmp_assign_source_42 );
    tmp_import_name_from_31 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_should_bypass_proxies );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies, tmp_assign_source_43 );
    tmp_import_name_from_32 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_get_auth_from_url );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_44 );
    tmp_import_name_from_33 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_rewind_body );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_45 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    tmp_name_name_17 = const_str_plain_status_codes;
    tmp_globals_name_17 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_codes_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 35;
    tmp_import_name_from_34 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_codes );
    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_46 );
    tmp_name_name_18 = const_str_plain_models;
    tmp_globals_name_18 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_REDIRECT_STATI_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 38;
    tmp_import_name_from_35 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_REDIRECT_STATI );
    Py_DECREF( tmp_import_name_from_35 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_REDIRECT_STATI, tmp_assign_source_47 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_win32;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto try_except_handler_8;
    }

    tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_perf_counter );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_48 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_13dfae501303bd529d9e321c6709f042 );
    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_13dfae501303bd529d9e321c6709f042, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_13dfae501303bd529d9e321c6709f042, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_clock );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_49 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 42;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_13dfae501303bd529d9e321c6709f042->m_frame) frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_8:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_time );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_50 );
    branch_end_1:;
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_51 = MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting, tmp_assign_source_51 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_52 = MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks, tmp_assign_source_52 );
    tmp_set_locals = PyDict_New();
    locals_SessionRedirectMixin_96 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_get_redirect_target, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_4_should_strip_auth(  );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_should_strip_auth, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_3 = const_tuple_false_none_true_none_none_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_5_resolve_redirects( tmp_defaults_3 );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_resolve_redirects, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_auth(  );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_rebuild_auth, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_proxies(  );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_rebuild_proxies, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_8_rebuild_method(  );
    tmp_res = PyDict_SetItem( locals_SessionRedirectMixin_96, const_str_plain_rebuild_method, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_SessionRedirectMixin_96;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_SessionRedirectMixin_96 );
    locals_SessionRedirectMixin_96 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_53 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_53;

    // Tried code:
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_54 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_54 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_54;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_SessionRedirectMixin;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_55;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_56 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_56 );
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin, tmp_assign_source_56 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_assign_source_57 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SessionRedirectMixin" );
        exception_tb = NULL;

        exception_lineno = 337;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_57;

    tmp_set_locals = PyDict_New();
    locals_Session_337 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_4ad3bc46c34d1c60c4164b799a04b3cc;
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = LIST_COPY( const_list_9207dd8b2644bfb46948b5120a9f9f49_list );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___attrs__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_9___init__(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_10___enter__(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___enter__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_11___exit__(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___exit__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_12_prepare_request(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_prepare_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_4 = const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_13_request( tmp_defaults_4 );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_14_get(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_get, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_15_options(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_options, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_16_head(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_head, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_5 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_17_post( tmp_defaults_5 );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_post, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_6 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_18_put( tmp_defaults_6 );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_put, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_7 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_19_patch( tmp_defaults_7 );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_patch, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_20_delete(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_delete, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_21_send(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_send, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_22_merge_environment_settings(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_merge_environment_settings, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_23_get_adapter(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_get_adapter, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_24_close(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_25_mount(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain_mount, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_26___getstate__(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___getstate__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$sessions$$$function_27___setstate__(  );
    tmp_res = PyDict_SetItem( locals_Session_337, const_str_plain___setstate__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_2 = locals_Session_337;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_Session_337 );
    locals_Session_337 = NULL;
    goto outline_result_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_58 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_58;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_assign_source_59 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;

        goto try_except_handler_11;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_1 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_60 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;

        goto try_except_handler_11;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_60;

    // Tried code:
    // Tried code:
    tmp_source_name_5 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_outline_return_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_outline_return_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;

        goto try_except_handler_14;
    }
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_10 );
    Py_XDECREF( exception_keeper_value_10 );
    Py_XDECREF( exception_keeper_tb_10 );
    tmp_type_arg_1 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_3 != NULL );
    goto try_return_handler_13;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_59 = tmp_outline_return_value_3;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_59;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_Session;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_13dfae501303bd529d9e321c6709f042->m_frame.f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_61;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_13dfae501303bd529d9e321c6709f042 );
#endif
    popFrameStack();

    assertFrameObject( frame_13dfae501303bd529d9e321c6709f042 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_13dfae501303bd529d9e321c6709f042 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13dfae501303bd529d9e321c6709f042, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13dfae501303bd529d9e321c6709f042->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13dfae501303bd529d9e321c6709f042, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_62 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_62 );
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session, tmp_assign_source_62 );
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

    tmp_assign_source_63 = MAKE_FUNCTION_requests$sessions$$$function_28_session(  );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_session, tmp_assign_source_63 );

    return MOD_RETURN_VALUE( module_requests$sessions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
