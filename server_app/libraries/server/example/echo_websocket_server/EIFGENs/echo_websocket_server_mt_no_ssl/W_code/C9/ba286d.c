/*
 * Class BAG [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_286 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_286 [] = {0xFF11,230,0xFF12,285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type2_286 [] = {0xFF11,285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type3_286 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_286 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_286 [] = {0xFF11,285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type6_286 [] = {0xFF11,285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type7_286 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_286 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_286 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_286 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_286 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_286 [] = {285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type13_286 [] = {0xFF11,285,169,0xFFFF};
static EIF_TYPE_INDEX gen_type14_286 [] = {0xFF11,280,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_286 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_286[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_286},
	{1, (BODY_INDEX)-1, 230, gen_type1_286},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 285, gen_type2_286},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_286},
	{14, (BODY_INDEX)-1, 0, gen_type4_286},
	{15, (BODY_INDEX)-1, 285, gen_type5_286},
	{16, (BODY_INDEX)-1, 285, gen_type6_286},
	{17, (BODY_INDEX)-1, 0, gen_type7_286},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_286},
	{21, (BODY_INDEX)-1, 218, gen_type9_286},
	{22, (BODY_INDEX)-1, 218, gen_type10_286},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_286},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 285, gen_type12_286},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 285, gen_type13_286},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1562, (BODY_INDEX)-1, 202, NULL},
	{1563, 0, 202, NULL},
	{1559, (BODY_INDEX)-1, 202, NULL},
	{1560, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1561, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 280, gen_type14_286},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_286},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1992, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1993, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1994, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
};

extern void Init286(void);
void Init286(void)
{
	IDSC(desc_286, 0, 285);
	IDSC(desc_286 + 1, 2, 285);
	IDSC(desc_286 + 34, 199, 285);
	IDSC(desc_286 + 43, 193, 285);
	IDSC(desc_286 + 52, 200, 285);
}


#ifdef __cplusplus
}
#endif
