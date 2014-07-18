/*
 * Class ITERATION_CURSOR [REAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_384 [] = {242,383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type1_384 [] = {383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type2_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_384 [] = {383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type5_384 [] = {383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type6_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_384 [] = {383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type8_384 [] = {383,203,0xFFFF};
static EIF_TYPE_INDEX gen_type9_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_384 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_384[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_384},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 383, gen_type1_384},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_384},
	{14, (BODY_INDEX)-1, 0, gen_type3_384},
	{15, (BODY_INDEX)-1, 383, gen_type4_384},
	{16, (BODY_INDEX)-1, 383, gen_type5_384},
	{17, (BODY_INDEX)-1, 0, gen_type6_384},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, NULL},
	{21, (BODY_INDEX)-1, 228, NULL},
	{22, (BODY_INDEX)-1, 228, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 383, gen_type7_384},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 383, gen_type8_384},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_384},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 212, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_384},
};

extern void Init384(void);
void Init384(void)
{
	IDSC(desc_384, 0, 383);
	IDSC(desc_384 + 1, 2, 383);
	IDSC(desc_384 + 34, 53, 383);
}


#ifdef __cplusplus
}
#endif
