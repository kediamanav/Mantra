/*
 * Class NATIVE_ARRAY [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_387 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_387 [] = {0xFF11,230,0xFF12,386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type2_387 [] = {0xFF11,386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type3_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_387 [] = {0xFF11,386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type6_387 [] = {0xFF11,386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type7_387 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_387 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_387 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_387 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_387 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_387 [] = {386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type13_387 [] = {0xFF11,386,169,0xFFFF};
static EIF_TYPE_INDEX gen_type14_387 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_387[] = {
	{(BODY_INDEX) 433, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_387},
	{1, (BODY_INDEX)-1, 230, gen_type1_387},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 386, gen_type2_387},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_387},
	{14, (BODY_INDEX)-1, 0, gen_type4_387},
	{15, (BODY_INDEX)-1, 386, gen_type5_387},
	{16, (BODY_INDEX)-1, 386, gen_type6_387},
	{17, (BODY_INDEX)-1, 0, gen_type7_387},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_387},
	{21, (BODY_INDEX)-1, 218, gen_type9_387},
	{22, (BODY_INDEX)-1, 218, gen_type10_387},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_387},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 386, gen_type12_387},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 386, gen_type13_387},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_387},
};

extern void Init387(void);
void Init387(void)
{
	IDSC(desc_387, 0, 386);
	IDSC(desc_387 + 1, 2, 386);
	IDSC(desc_387 + 34, 41, 386);
}


#ifdef __cplusplus
}
#endif
