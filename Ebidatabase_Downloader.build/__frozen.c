// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "base64", 8013615, 11955 },
        { "codecs", 8025570, 40294 },
        { "copy_reg", 8065864, 5566 },
        { "encodings", 8071430, -4518 },
        { "encodings.aliases", 8075948, 8799 },
        { "encodings.ascii", 8084747, 2643 },
        { "encodings.base64_codec", 8087390, 4336 },
        { "encodings.big5", 8091726, 2021 },
        { "encodings.big5hkscs", 8093747, 2061 },
        { "encodings.bz2_codec", 8095808, 5384 },
        { "encodings.charmap", 8101192, 4050 },
        { "encodings.cp037", 8105242, 3258 },
        { "encodings.cp1006", 8108500, 3344 },
        { "encodings.cp1026", 8111844, 3272 },
        { "encodings.cp1140", 8115116, 3258 },
        { "encodings.cp1250", 8118374, 3295 },
        { "encodings.cp1251", 8121669, 3292 },
        { "encodings.cp1252", 8124961, 3295 },
        { "encodings.cp1253", 8128256, 3308 },
        { "encodings.cp1254", 8131564, 3297 },
        { "encodings.cp1255", 8134861, 3316 },
        { "encodings.cp1256", 8138177, 3294 },
        { "encodings.cp1257", 8141471, 3302 },
        { "encodings.cp1258", 8144773, 3300 },
        { "encodings.cp424", 8148073, 3288 },
        { "encodings.cp437", 8151361, 8493 },
        { "encodings.cp500", 8159854, 3258 },
        { "encodings.cp720", 8163112, 3355 },
        { "encodings.cp737", 8166467, 8721 },
        { "encodings.cp775", 8175188, 8507 },
        { "encodings.cp850", 8183695, 8240 },
        { "encodings.cp852", 8191935, 8509 },
        { "encodings.cp855", 8200444, 8690 },
        { "encodings.cp856", 8209134, 3320 },
        { "encodings.cp857", 8212454, 8230 },
        { "encodings.cp858", 8220684, 8210 },
        { "encodings.cp860", 8228894, 8476 },
        { "encodings.cp861", 8237370, 8487 },
        { "encodings.cp862", 8245857, 8622 },
        { "encodings.cp863", 8254479, 8487 },
        { "encodings.cp864", 8262966, 8618 },
        { "encodings.cp865", 8271584, 8487 },
        { "encodings.cp866", 8280071, 8722 },
        { "encodings.cp869", 8288793, 8534 },
        { "encodings.cp874", 8297327, 3386 },
        { "encodings.cp875", 8300713, 3255 },
        { "encodings.cp932", 8303968, 2029 },
        { "encodings.cp949", 8305997, 2029 },
        { "encodings.cp950", 8308026, 2029 },
        { "encodings.euc_jis_2004", 8310055, 2085 },
        { "encodings.euc_jisx0213", 8312140, 2085 },
        { "encodings.euc_jp", 8314225, 2037 },
        { "encodings.euc_kr", 8316262, 2037 },
        { "encodings.gb18030", 8318299, 2045 },
        { "encodings.gb2312", 8320344, 2037 },
        { "encodings.gbk", 8322381, 2013 },
        { "encodings.hex_codec", 8324394, 4288 },
        { "encodings.hp_roman8", 8328682, 4541 },
        { "encodings.hz", 8333223, 2005 },
        { "encodings.idna", 8335228, 6914 },
        { "encodings.iso2022_jp", 8342142, 2074 },
        { "encodings.iso2022_jp_1", 8344216, 2090 },
        { "encodings.iso2022_jp_2", 8346306, 2090 },
        { "encodings.iso2022_jp_2004", 8348396, 2114 },
        { "encodings.iso2022_jp_3", 8350510, 2090 },
        { "encodings.iso2022_jp_ext", 8352600, 2106 },
        { "encodings.iso2022_kr", 8354706, 2074 },
        { "encodings.iso8859_1", 8356780, 3297 },
        { "encodings.iso8859_10", 8360077, 3312 },
        { "encodings.iso8859_11", 8363389, 3406 },
        { "encodings.iso8859_13", 8366795, 3315 },
        { "encodings.iso8859_14", 8370110, 3333 },
        { "encodings.iso8859_15", 8373443, 3312 },
        { "encodings.iso8859_16", 8376755, 3314 },
        { "encodings.iso8859_2", 8380069, 3297 },
        { "encodings.iso8859_3", 8383366, 3304 },
        { "encodings.iso8859_4", 8386670, 3297 },
        { "encodings.iso8859_5", 8389967, 3298 },
        { "encodings.iso8859_6", 8393265, 3342 },
        { "encodings.iso8859_7", 8396607, 3305 },
        { "encodings.iso8859_8", 8399912, 3336 },
        { "encodings.iso8859_9", 8403248, 3297 },
        { "encodings.johab", 8406545, 2029 },
        { "encodings.koi8_r", 8408574, 3319 },
        { "encodings.koi8_u", 8411893, 3305 },
        { "encodings.latin_1", 8415198, 2673 },
        { "encodings.mac_arabic", 8417871, 8443 },
        { "encodings.mac_centeuro", 8426314, 3366 },
        { "encodings.mac_croatian", 8429680, 3374 },
        { "encodings.mac_cyrillic", 8433054, 3364 },
        { "encodings.mac_farsi", 8436418, 3278 },
        { "encodings.mac_greek", 8439696, 3318 },
        { "encodings.mac_iceland", 8443014, 3357 },
        { "encodings.mac_latin2", 8446371, 5336 },
        { "encodings.mac_roman", 8451707, 3335 },
        { "encodings.mac_romanian", 8455042, 3375 },
        { "encodings.mac_turkish", 8458417, 3358 },
        { "encodings.palmos", 8461775, 3495 },
        { "encodings.ptcp154", 8465270, 5319 },
        { "encodings.punycode", 8470589, 8839 },
        { "encodings.quopri_codec", 8479428, 4154 },
        { "encodings.raw_unicode_escape", 8483582, 2553 },
        { "encodings.rot_13", 8486135, 4124 },
        { "encodings.shift_jis", 8490259, 2061 },
        { "encodings.shift_jis_2004", 8492320, 2101 },
        { "encodings.shift_jisx0213", 8494421, 2101 },
        { "encodings.string_escape", 8496522, 2412 },
        { "encodings.tis_620", 8498934, 3367 },
        { "encodings.undefined", 8502301, 3018 },
        { "encodings.unicode_escape", 8505319, 2501 },
        { "encodings.unicode_internal", 8507820, 2527 },
        { "encodings.utf_16", 8510347, 5940 },
        { "encodings.utf_16_be", 8516287, 2302 },
        { "encodings.utf_16_le", 8518589, 2302 },
        { "encodings.utf_32", 8520891, 6582 },
        { "encodings.utf_32_be", 8527473, 2195 },
        { "encodings.utf_32_le", 8529668, 2195 },
        { "encodings.utf_7", 8531863, 2195 },
        { "encodings.utf_8", 8534058, 2254 },
        { "encodings.utf_8_sig", 8536312, 5757 },
        { "encodings.uu_codec", 8542069, 5494 },
        { "encodings.zlib_codec", 8547563, 5304 },
        { "functools", 8552867, 7731 },
        { "locale", 8560598, 57786 },
        { "quopri", 8618384, 6973 },
        { "re", 8625357, 14182 },
        { "sre_compile", 8639539, 13107 },
        { "sre_constants", 8652646, 6372 },
        { "sre_parse", 8659018, 22480 },
        { "string", 8681498, 22338 },
        { "stringprep", 8703836, 15219 },
        { "struct", 8719055, 268 },
        { "types", 8719323, 2976 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
