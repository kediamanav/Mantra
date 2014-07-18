/*
 * Class HASH_TABLE_CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_128 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_128 [] = {0xFF11,230,0xFF12,127,0xFFFF};
static EIF_TYPE_INDEX gen_type2_128 [] = {0xFF11,127,0xFFFF};
static EIF_TYPE_INDEX gen_type3_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_128 [] = {0xFF11,127,0xFFFF};
static EIF_TYPE_INDEX gen_type6_128 [] = {0xFF11,127,0xFFFF};
static EIF_TYPE_INDEX gen_type7_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_128 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_128 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_128 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_128 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_128 [] = {0xFF11,127,0xFFFF};


static struct desc_info desc_128[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_128},
	{1, (BODY_INDEX)-1, 230, gen_type1_128},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 127, gen_type2_128},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_128},
	{14, (BODY_INDEX)-1, 0, gen_type4_128},
	{15, (BODY_INDEX)-1, 127, gen_type5_128},
	{16, (BODY_INDEX)-1, 127, gen_type6_128},
	{17, (BODY_INDEX)-1, 0, gen_type7_128},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_128},
	{21, (BODY_INDEX)-1, 218, gen_type9_128},
	{22, (BODY_INDEX)-1, 218, gen_type10_128},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_128},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 127, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 127, gen_type12_128},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2313, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2314, 0, 169, NULL},
};

extern void Init128(void);
void Init128(void)
{
	IDSC(desc_128, 0, 127);
	IDSC(desc_128 + 1, 2, 127);
	IDSC(desc_128 + 34, 174, 127);
}


#ifdef __cplusplus
}
#endif
