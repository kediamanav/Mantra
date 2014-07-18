/*
 * Class CONTAINER [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_511 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_511 [] = {0xFF11,230,0xFF12,510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type2_511 [] = {0xFF11,510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type3_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_511 [] = {0xFF11,510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type6_511 [] = {0xFF11,510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type7_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_511 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_511 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_511 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_511 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_511 [] = {510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type13_511 [] = {0xFF11,510,181,0xFFFF};
static EIF_TYPE_INDEX gen_type14_511 [] = {0xFF11,508,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_511 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_511[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_511},
	{1, (BODY_INDEX)-1, 230, gen_type1_511},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 510, gen_type2_511},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_511},
	{14, (BODY_INDEX)-1, 0, gen_type4_511},
	{15, (BODY_INDEX)-1, 510, gen_type5_511},
	{16, (BODY_INDEX)-1, 510, gen_type6_511},
	{17, (BODY_INDEX)-1, 0, gen_type7_511},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_511},
	{21, (BODY_INDEX)-1, 218, gen_type9_511},
	{22, (BODY_INDEX)-1, 218, gen_type10_511},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_511},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 510, gen_type12_511},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 510, gen_type13_511},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1592, (BODY_INDEX)-1, 202, NULL},
	{1593, 0, 202, NULL},
	{1589, (BODY_INDEX)-1, 202, NULL},
	{1590, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1591, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 508, gen_type14_511},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_511},
};

extern void Init511(void);
void Init511(void)
{
	IDSC(desc_511, 0, 510);
	IDSC(desc_511 + 1, 2, 510);
	IDSC(desc_511 + 34, 199, 510);
}


#ifdef __cplusplus
}
#endif
