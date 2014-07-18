/*
 * Class SYSTEM_STRING
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_12 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_12 [] = {0xFF11,230,0xFF12,11,0xFFFF};
static EIF_TYPE_INDEX gen_type2_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type3_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type6_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type7_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_12 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_12 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_12 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_12 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_12 [] = {0xFF11,11,0xFFFF};


static struct desc_info desc_12[] = {
	{(BODY_INDEX) 319, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_12},
	{1, (BODY_INDEX)-1, 230, gen_type1_12},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 11, gen_type2_12},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_12},
	{14, (BODY_INDEX)-1, 0, gen_type4_12},
	{15, (BODY_INDEX)-1, 11, gen_type5_12},
	{16, (BODY_INDEX)-1, 11, gen_type6_12},
	{17, (BODY_INDEX)-1, 0, gen_type7_12},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_12},
	{21, (BODY_INDEX)-1, 218, gen_type9_12},
	{22, (BODY_INDEX)-1, 218, gen_type10_12},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_12},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 11, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 11, gen_type12_12},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{318, (BODY_INDEX)-1, 169, NULL},
};

extern void Init12(void);
void Init12(void)
{
	IDSC(desc_12, 0, 11);
	IDSC(desc_12 + 1, 2, 11);
	IDSC(desc_12 + 34, 83, 11);
}


#ifdef __cplusplus
}
#endif
