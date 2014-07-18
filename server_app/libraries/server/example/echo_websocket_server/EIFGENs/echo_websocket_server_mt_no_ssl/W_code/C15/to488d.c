/*
 * Class TO_SPECIAL [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_488 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_488 [] = {0xFF11,230,0xFF12,487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type2_488 [] = {0xFF11,487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type3_488 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_488 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_488 [] = {0xFF11,487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type6_488 [] = {0xFF11,487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type7_488 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_488 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_488 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_488 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_488 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_488 [] = {487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type13_488 [] = {0xFF11,487,208,0xFFFF};
static EIF_TYPE_INDEX gen_type14_488 [] = {0xFF11,488,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_488 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_488 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_488 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_488[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_488},
	{1, (BODY_INDEX)-1, 230, gen_type1_488},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 487, gen_type2_488},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_488},
	{14, (BODY_INDEX)-1, 0, gen_type4_488},
	{15, (BODY_INDEX)-1, 487, gen_type5_488},
	{16, (BODY_INDEX)-1, 487, gen_type6_488},
	{17, (BODY_INDEX)-1, 0, gen_type7_488},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_488},
	{21, (BODY_INDEX)-1, 218, gen_type9_488},
	{22, (BODY_INDEX)-1, 218, gen_type10_488},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_488},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 487, gen_type12_488},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 487, gen_type13_488},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3251, 0, 488, gen_type14_488},
	{3252, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3253, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3254, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_488},
	{3255, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_488},
	{3256, (BODY_INDEX)-1, 202, NULL},
	{3257, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3258, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_488},
};

extern void Init488(void);
void Init488(void)
{
	IDSC(desc_488, 0, 487);
	IDSC(desc_488 + 1, 2, 487);
	IDSC(desc_488 + 34, 51, 487);
}


#ifdef __cplusplus
}
#endif
