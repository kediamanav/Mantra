/*
 * Class TO_SPECIAL [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_384 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_384 [] = {0xFF11,230,0xFF12,383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type2_384 [] = {0xFF11,383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type3_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_384 [] = {0xFF11,383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type6_384 [] = {0xFF11,383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type7_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_384 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_384 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_384 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_384 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_384 [] = {383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type13_384 [] = {0xFF11,383,169,0xFFFF};
static EIF_TYPE_INDEX gen_type14_384 [] = {0xFF11,384,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_384 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_384[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_384},
	{1, (BODY_INDEX)-1, 230, gen_type1_384},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 383, gen_type2_384},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_384},
	{14, (BODY_INDEX)-1, 0, gen_type4_384},
	{15, (BODY_INDEX)-1, 383, gen_type5_384},
	{16, (BODY_INDEX)-1, 383, gen_type6_384},
	{17, (BODY_INDEX)-1, 0, gen_type7_384},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_384},
	{21, (BODY_INDEX)-1, 218, gen_type9_384},
	{22, (BODY_INDEX)-1, 218, gen_type10_384},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_384},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 383, gen_type12_384},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 383, gen_type13_384},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3235, 0, 384, gen_type14_384},
	{3236, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3237, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3238, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_384},
	{3239, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_384},
	{3240, (BODY_INDEX)-1, 202, NULL},
	{3241, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3242, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_384},
};

extern void Init384(void);
void Init384(void)
{
	IDSC(desc_384, 0, 383);
	IDSC(desc_384 + 1, 2, 383);
	IDSC(desc_384 + 34, 51, 383);
}


#ifdef __cplusplus
}
#endif
