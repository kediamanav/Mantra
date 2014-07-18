/*
 * Class ITERABLE [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_420 [] = {242,419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type1_420 [] = {419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type2_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_420 [] = {419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type5_420 [] = {419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type6_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_420 [] = {419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type8_420 [] = {419,215,0xFFFF};
static EIF_TYPE_INDEX gen_type9_420 [] = {418,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_420 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_420[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_420},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 419, gen_type1_420},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_420},
	{14, (BODY_INDEX)-1, 0, gen_type3_420},
	{15, (BODY_INDEX)-1, 419, gen_type4_420},
	{16, (BODY_INDEX)-1, 419, gen_type5_420},
	{17, (BODY_INDEX)-1, 0, gen_type6_420},
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
	{28, (BODY_INDEX)-1, 419, gen_type7_420},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 419, gen_type8_420},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 418, gen_type9_420},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_420},
};

extern void Init420(void);
void Init420(void)
{
	IDSC(desc_420, 0, 419);
	IDSC(desc_420 + 1, 2, 419);
	IDSC(desc_420 + 34, 52, 419);
}


#ifdef __cplusplus
}
#endif
