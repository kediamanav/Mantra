/*
 * Class NATIVE_ARRAY [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_595 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_595 [] = {0xFF11,230,0xFF12,594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type2_595 [] = {0xFF11,594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type3_595 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_595 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_595 [] = {0xFF11,594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type6_595 [] = {0xFF11,594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type7_595 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_595 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_595 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_595 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_595 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_595 [] = {594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type13_595 [] = {0xFF11,594,196,0xFFFF};
static EIF_TYPE_INDEX gen_type14_595 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_595[] = {
	{(BODY_INDEX) 438, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_595},
	{1, (BODY_INDEX)-1, 230, gen_type1_595},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 594, gen_type2_595},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_595},
	{14, (BODY_INDEX)-1, 0, gen_type4_595},
	{15, (BODY_INDEX)-1, 594, gen_type5_595},
	{16, (BODY_INDEX)-1, 594, gen_type6_595},
	{17, (BODY_INDEX)-1, 0, gen_type7_595},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_595},
	{21, (BODY_INDEX)-1, 218, gen_type9_595},
	{22, (BODY_INDEX)-1, 218, gen_type10_595},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_595},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 594, gen_type12_595},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 594, gen_type13_595},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_595},
};

extern void Init595(void);
void Init595(void)
{
	IDSC(desc_595, 0, 594);
	IDSC(desc_595 + 1, 2, 594);
	IDSC(desc_595 + 34, 41, 594);
}


#ifdef __cplusplus
}
#endif
