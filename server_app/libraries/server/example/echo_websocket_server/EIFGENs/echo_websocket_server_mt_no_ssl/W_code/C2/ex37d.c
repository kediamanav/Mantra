/*
 * Class EXCEPTION_MANAGER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_37 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_37 [] = {0xFF11,230,0xFF12,36,0xFFFF};
static EIF_TYPE_INDEX gen_type2_37 [] = {0xFF11,36,0xFFFF};
static EIF_TYPE_INDEX gen_type3_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_37 [] = {0xFF11,36,0xFFFF};
static EIF_TYPE_INDEX gen_type6_37 [] = {0xFF11,36,0xFFFF};
static EIF_TYPE_INDEX gen_type7_37 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_37 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_37 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_37 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_37 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_37 [] = {0xFF11,36,0xFFFF};
static EIF_TYPE_INDEX gen_type13_37 [] = {230,0xFF11,69,0xFFFF};


static struct desc_info desc_37[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_37},
	{1, (BODY_INDEX)-1, 230, gen_type1_37},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 36, gen_type2_37},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_37},
	{14, (BODY_INDEX)-1, 0, gen_type4_37},
	{15, (BODY_INDEX)-1, 36, gen_type5_37},
	{16, (BODY_INDEX)-1, 36, gen_type6_37},
	{17, (BODY_INDEX)-1, 0, gen_type7_37},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_37},
	{21, (BODY_INDEX)-1, 218, gen_type9_37},
	{22, (BODY_INDEX)-1, 218, gen_type10_37},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_37},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 36, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 36, gen_type12_37},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{713, (BODY_INDEX)-1, 69, NULL},
	{714, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{715, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{716, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{717, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{718, (BODY_INDEX)-1, 202, NULL},
	{719, (BODY_INDEX)-1, 202, NULL},
	{720, (BODY_INDEX)-1, 202, NULL},
	{721, (BODY_INDEX)-1, 202, NULL},
	{722, (BODY_INDEX)-1, 230, gen_type13_37},
	{723, (BODY_INDEX)-1, 69, NULL},
};

extern void Init37(void);
void Init37(void)
{
	IDSC(desc_37, 0, 36);
	IDSC(desc_37 + 1, 2, 36);
	IDSC(desc_37 + 34, 114, 36);
}


#ifdef __cplusplus
}
#endif
