/*
 * Class RT_DBG_COMMON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_56 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_56 [] = {0xFF11,230,0xFF12,55,0xFFFF};
static EIF_TYPE_INDEX gen_type2_56 [] = {0xFF11,55,0xFFFF};
static EIF_TYPE_INDEX gen_type3_56 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_56 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_56 [] = {0xFF11,55,0xFFFF};
static EIF_TYPE_INDEX gen_type6_56 [] = {0xFF11,55,0xFFFF};
static EIF_TYPE_INDEX gen_type7_56 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_56 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_56 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_56 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_56 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_56 [] = {0xFF11,55,0xFFFF};
static EIF_TYPE_INDEX gen_type13_56 [] = {0xFF11,239,0xFF11,225,0xFFFF};


static struct desc_info desc_56[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_56},
	{1, (BODY_INDEX)-1, 230, gen_type1_56},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 55, gen_type2_56},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_56},
	{14, (BODY_INDEX)-1, 0, gen_type4_56},
	{15, (BODY_INDEX)-1, 55, gen_type5_56},
	{16, (BODY_INDEX)-1, 55, gen_type6_56},
	{17, (BODY_INDEX)-1, 0, gen_type7_56},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_56},
	{21, (BODY_INDEX)-1, 218, gen_type9_56},
	{22, (BODY_INDEX)-1, 218, gen_type10_56},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_56},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 55, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 55, gen_type12_56},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1033, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1034, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1072, (BODY_INDEX)-1, 239, gen_type13_56},
};

extern void Init56(void);
void Init56(void)
{
	IDSC(desc_56, 0, 55);
	IDSC(desc_56 + 1, 2, 55);
	IDSC(desc_56 + 34, 165, 55);
	IDSC(desc_56 + 36, 160, 55);
}


#ifdef __cplusplus
}
#endif
