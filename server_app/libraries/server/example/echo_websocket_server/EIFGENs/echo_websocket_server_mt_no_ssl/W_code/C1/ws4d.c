/*
 * Class WS_ERROR_FRAME
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_4 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_4 [] = {0xFF11,230,0xFF12,3,0xFFFF};
static EIF_TYPE_INDEX gen_type2_4 [] = {0xFF11,3,0xFFFF};
static EIF_TYPE_INDEX gen_type3_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_4 [] = {0xFF11,3,0xFFFF};
static EIF_TYPE_INDEX gen_type6_4 [] = {0xFF11,3,0xFFFF};
static EIF_TYPE_INDEX gen_type7_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_4 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_4 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_4 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_4 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_4 [] = {0xFF11,3,0xFFFF};
static EIF_TYPE_INDEX gen_type13_4 [] = {0xFF11,214,0xFFFF};
static EIF_TYPE_INDEX gen_type14_4 [] = {0xFF11,218,0xFFFF};


static struct desc_info desc_4[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_4},
	{1, (BODY_INDEX)-1, 230, gen_type1_4},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 3, gen_type2_4},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_4},
	{14, (BODY_INDEX)-1, 0, gen_type4_4},
	{15, (BODY_INDEX)-1, 3, gen_type5_4},
	{16, (BODY_INDEX)-1, 3, gen_type6_4},
	{17, (BODY_INDEX)-1, 0, gen_type7_4},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_4},
	{21, (BODY_INDEX)-1, 218, gen_type9_4},
	{22, (BODY_INDEX)-1, 218, gen_type10_4},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_4},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 3, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 3, gen_type12_4},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{50, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{51, 8, 169, NULL},
	{52, 0, 214, gen_type13_4},
	{53, (BODY_INDEX)-1, 218, gen_type14_4},
};

extern void Init4(void);
void Init4(void)
{
	IDSC(desc_4, 0, 3);
	IDSC(desc_4 + 1, 2, 3);
	IDSC(desc_4 + 34, 248, 3);
}


#ifdef __cplusplus
}
#endif
