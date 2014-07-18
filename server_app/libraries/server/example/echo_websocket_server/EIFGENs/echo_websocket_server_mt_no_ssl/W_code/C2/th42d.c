/*
 * Class THREAD_CONTROL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_42 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_42 [] = {0xFF11,230,0xFF12,41,0xFFFF};
static EIF_TYPE_INDEX gen_type2_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type3_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type6_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type7_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_42 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_42 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_42 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_42 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_42 [] = {0xFF11,41,0xFFFF};


static struct desc_info desc_42[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_42},
	{1, (BODY_INDEX)-1, 230, gen_type1_42},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 41, gen_type2_42},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_42},
	{14, (BODY_INDEX)-1, 0, gen_type4_42},
	{15, (BODY_INDEX)-1, 41, gen_type5_42},
	{16, (BODY_INDEX)-1, 41, gen_type6_42},
	{17, (BODY_INDEX)-1, 0, gen_type7_42},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_42},
	{21, (BODY_INDEX)-1, 218, gen_type9_42},
	{22, (BODY_INDEX)-1, 218, gen_type10_42},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_42},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 41, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 41, gen_type12_42},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{807, (BODY_INDEX)-1, 208, NULL},
	{808, (BODY_INDEX)-1, 208, NULL},
	{809, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{810, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init42(void);
void Init42(void)
{
	IDSC(desc_42, 0, 41);
	IDSC(desc_42 + 1, 2, 41);
	IDSC(desc_42 + 34, 266, 41);
	IDSC(desc_42 + 36, 268, 41);
}


#ifdef __cplusplus
}
#endif
