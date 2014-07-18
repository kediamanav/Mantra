/*
 * Class BOX [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_702 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_702 [] = {0xFF11,230,0xFF12,701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type2_702 [] = {0xFF11,701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type3_702 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_702 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_702 [] = {0xFF11,701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type6_702 [] = {0xFF11,701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type7_702 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_702 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_702 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_702 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_702 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_702 [] = {701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type13_702 [] = {0xFF11,701,202,0xFFFF};
static EIF_TYPE_INDEX gen_type14_702 [] = {0xFF11,691,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_702 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_702[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_702},
	{1, (BODY_INDEX)-1, 230, gen_type1_702},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 701, gen_type2_702},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_702},
	{14, (BODY_INDEX)-1, 0, gen_type4_702},
	{15, (BODY_INDEX)-1, 701, gen_type5_702},
	{16, (BODY_INDEX)-1, 701, gen_type6_702},
	{17, (BODY_INDEX)-1, 0, gen_type7_702},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_702},
	{21, (BODY_INDEX)-1, 218, gen_type9_702},
	{22, (BODY_INDEX)-1, 218, gen_type10_702},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_702},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 701, gen_type12_702},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 701, gen_type13_702},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1612, (BODY_INDEX)-1, 202, NULL},
	{1613, 0, 202, NULL},
	{1609, (BODY_INDEX)-1, 202, NULL},
	{1610, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1611, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 691, gen_type14_702},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_702},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
};

extern void Init702(void);
void Init702(void)
{
	IDSC(desc_702, 0, 701);
	IDSC(desc_702 + 1, 2, 701);
	IDSC(desc_702 + 34, 199, 701);
	IDSC(desc_702 + 43, 239, 701);
}


#ifdef __cplusplus
}
#endif
