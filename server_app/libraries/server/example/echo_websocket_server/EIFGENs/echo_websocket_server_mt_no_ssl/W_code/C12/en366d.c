/*
 * Class ENCODER [G#1, G#2]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_366 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_366 [] = {0xFF11,230,0xFF12,365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type2_366 [] = {0xFF11,365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type3_366 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_366 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_366 [] = {0xFF11,365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type6_366 [] = {0xFF11,365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type7_366 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_366 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_366 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_366 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_366 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_366 [] = {365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type13_366 [] = {0xFF11,365,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type14_366 [] = {0xFF11,214,0xFFFF};
static EIF_TYPE_INDEX gen_type15_366 [] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type16_366 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_366 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_366 [] = {0xFFF8,2,0xFFFF};


static struct desc_info desc_366[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_366},
	{1, (BODY_INDEX)-1, 230, gen_type1_366},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 365, gen_type2_366},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_366},
	{14, (BODY_INDEX)-1, 0, gen_type4_366},
	{15, (BODY_INDEX)-1, 365, gen_type5_366},
	{16, (BODY_INDEX)-1, 365, gen_type6_366},
	{17, (BODY_INDEX)-1, 0, gen_type7_366},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_366},
	{21, (BODY_INDEX)-1, 218, gen_type9_366},
	{22, (BODY_INDEX)-1, 218, gen_type10_366},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_366},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 365, gen_type12_366},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 365, gen_type13_366},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 214, gen_type14_366},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{535, (BODY_INDEX)-1, 202, NULL},
	{536, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_366},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_366},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_366},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type18_366},
};

extern void Init366(void);
void Init366(void)
{
	IDSC(desc_366, 0, 365);
	IDSC(desc_366 + 1, 2, 365);
	IDSC(desc_366 + 34, 264, 365);
}


#ifdef __cplusplus
}
#endif
