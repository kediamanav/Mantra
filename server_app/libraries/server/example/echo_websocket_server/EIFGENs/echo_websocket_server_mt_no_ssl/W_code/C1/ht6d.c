/*
 * Class HTTP_CONTROLLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_6 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_6 [] = {0xFF11,230,0xFF12,5,0xFFFF};
static EIF_TYPE_INDEX gen_type2_6 [] = {0xFF11,5,0xFFFF};
static EIF_TYPE_INDEX gen_type3_6 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_6 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_6 [] = {0xFF11,5,0xFFFF};
static EIF_TYPE_INDEX gen_type6_6 [] = {0xFF11,5,0xFFFF};
static EIF_TYPE_INDEX gen_type7_6 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_6 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_6 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_6 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_6 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_6 [] = {0xFF11,5,0xFFFF};


static struct desc_info desc_6[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_6},
	{1, (BODY_INDEX)-1, 230, gen_type1_6},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 5, gen_type2_6},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_6},
	{14, (BODY_INDEX)-1, 0, gen_type4_6},
	{15, (BODY_INDEX)-1, 5, gen_type5_6},
	{16, (BODY_INDEX)-1, 5, gen_type6_6},
	{17, (BODY_INDEX)-1, 0, gen_type7_6},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_6},
	{21, (BODY_INDEX)-1, 218, gen_type9_6},
	{22, (BODY_INDEX)-1, 218, gen_type10_6},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_6},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 5, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 5, gen_type12_6},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{57, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{58, 0, 202, NULL},
};

extern void Init6(void);
void Init6(void)
{
	IDSC(desc_6, 0, 5);
	IDSC(desc_6 + 1, 2, 5);
	IDSC(desc_6 + 34, 185, 5);
}


#ifdef __cplusplus
}
#endif
