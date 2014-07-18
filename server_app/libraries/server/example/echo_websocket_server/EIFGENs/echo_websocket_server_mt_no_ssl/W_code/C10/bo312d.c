/*
 * Class BOX [REAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_312 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_312 [] = {0xFF11,230,0xFF12,311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type2_312 [] = {0xFF11,311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type3_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_312 [] = {0xFF11,311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type6_312 [] = {0xFF11,311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type7_312 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_312 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_312 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_312 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_312 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_312 [] = {311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type13_312 [] = {0xFF11,311,193,0xFFFF};
static EIF_TYPE_INDEX gen_type14_312 [] = {0xFF11,301,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_312 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_312[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_312},
	{1, (BODY_INDEX)-1, 230, gen_type1_312},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 311, gen_type2_312},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_312},
	{14, (BODY_INDEX)-1, 0, gen_type4_312},
	{15, (BODY_INDEX)-1, 311, gen_type5_312},
	{16, (BODY_INDEX)-1, 311, gen_type6_312},
	{17, (BODY_INDEX)-1, 0, gen_type7_312},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_312},
	{21, (BODY_INDEX)-1, 218, gen_type9_312},
	{22, (BODY_INDEX)-1, 218, gen_type10_312},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_312},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 311, gen_type12_312},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 311, gen_type13_312},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1567, (BODY_INDEX)-1, 202, NULL},
	{1568, 0, 202, NULL},
	{1564, (BODY_INDEX)-1, 202, NULL},
	{1565, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1566, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, gen_type14_312},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_312},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
};

extern void Init312(void);
void Init312(void)
{
	IDSC(desc_312, 0, 311);
	IDSC(desc_312 + 1, 2, 311);
	IDSC(desc_312 + 34, 199, 311);
	IDSC(desc_312 + 43, 239, 311);
}


#ifdef __cplusplus
}
#endif
