/*
 * Class VERSIONABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_5 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_5 [] = {0xFF11,230,0xFF12,4,0xFFFF};
static EIF_TYPE_INDEX gen_type2_5 [] = {0xFF11,4,0xFFFF};
static EIF_TYPE_INDEX gen_type3_5 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_5 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_5 [] = {0xFF11,4,0xFFFF};
static EIF_TYPE_INDEX gen_type6_5 [] = {0xFF11,4,0xFFFF};
static EIF_TYPE_INDEX gen_type7_5 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_5 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_5 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_5 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_5 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_5 [] = {0xFF11,4,0xFFFF};


static struct desc_info desc_5[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_5},
	{1, (BODY_INDEX)-1, 230, gen_type1_5},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 4, gen_type2_5},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_5},
	{14, (BODY_INDEX)-1, 0, gen_type4_5},
	{15, (BODY_INDEX)-1, 4, gen_type5_5},
	{16, (BODY_INDEX)-1, 4, gen_type6_5},
	{17, (BODY_INDEX)-1, 0, gen_type7_5},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_5},
	{21, (BODY_INDEX)-1, 218, gen_type9_5},
	{22, (BODY_INDEX)-1, 218, gen_type10_5},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_5},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 4, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 4, gen_type12_5},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{54, 0, 181, NULL},
	{55, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{56, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init5(void);
void Init5(void)
{
	IDSC(desc_5, 0, 4);
	IDSC(desc_5 + 1, 2, 4);
	IDSC(desc_5 + 34, 194, 4);
}


#ifdef __cplusplus
}
#endif
