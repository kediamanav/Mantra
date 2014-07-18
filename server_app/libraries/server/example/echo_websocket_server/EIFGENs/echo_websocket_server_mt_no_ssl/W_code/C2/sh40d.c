/*
 * Class SHARED_APPLICATION_CONFIGURATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_40 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_40 [] = {0xFF11,230,0xFF12,39,0xFFFF};
static EIF_TYPE_INDEX gen_type2_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type3_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type6_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type7_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_40 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_40 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_40 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_40 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type13_40 [] = {0xFF11,218,0xFFFF};


static struct desc_info desc_40[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_40},
	{1, (BODY_INDEX)-1, 230, gen_type1_40},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 39, gen_type2_40},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_40},
	{14, (BODY_INDEX)-1, 0, gen_type4_40},
	{15, (BODY_INDEX)-1, 39, gen_type5_40},
	{16, (BODY_INDEX)-1, 39, gen_type6_40},
	{17, (BODY_INDEX)-1, 0, gen_type7_40},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_40},
	{21, (BODY_INDEX)-1, 218, gen_type9_40},
	{22, (BODY_INDEX)-1, 218, gen_type10_40},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_40},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 39, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 39, gen_type12_40},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{805, (BODY_INDEX)-1, 218, gen_type13_40},
	{806, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init40(void);
void Init40(void)
{
	IDSC(desc_40, 0, 39);
	IDSC(desc_40 + 1, 2, 39);
	IDSC(desc_40 + 34, 36, 39);
}


#ifdef __cplusplus
}
#endif
