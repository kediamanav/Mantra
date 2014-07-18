/*
 * Class ANY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1 [] = {0xFF11,230,0xFF12,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1 [] = {0xFF11,0,0xFFFF};


static struct desc_info desc_1[] = {
	{(BODY_INDEX) 33, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_1},
	{1, (BODY_INDEX)-1, 230, gen_type1_1},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 0, gen_type2_1},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1},
	{14, (BODY_INDEX)-1, 0, gen_type4_1},
	{15, (BODY_INDEX)-1, 0, gen_type5_1},
	{16, (BODY_INDEX)-1, 0, gen_type6_1},
	{17, (BODY_INDEX)-1, 0, gen_type7_1},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_1},
	{21, (BODY_INDEX)-1, 218, gen_type9_1},
	{22, (BODY_INDEX)-1, 218, gen_type10_1},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 0, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 0, gen_type12_1},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1(void);
void Init1(void)
{
	IDSC(desc_1, 0, 0);
	IDSC(desc_1 + 1, 2, 0);
}


#ifdef __cplusplus
}
#endif
