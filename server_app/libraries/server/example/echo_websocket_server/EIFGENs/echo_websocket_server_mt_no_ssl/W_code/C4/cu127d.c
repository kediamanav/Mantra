/*
 * Class CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_127 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_127 [] = {0xFF11,230,0xFF12,126,0xFFFF};
static EIF_TYPE_INDEX gen_type2_127 [] = {0xFF11,126,0xFFFF};
static EIF_TYPE_INDEX gen_type3_127 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_127 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_127 [] = {0xFF11,126,0xFFFF};
static EIF_TYPE_INDEX gen_type6_127 [] = {0xFF11,126,0xFFFF};
static EIF_TYPE_INDEX gen_type7_127 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_127 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_127 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_127 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_127 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_127 [] = {0xFF11,126,0xFFFF};


static struct desc_info desc_127[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_127},
	{1, (BODY_INDEX)-1, 230, gen_type1_127},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 126, gen_type2_127},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_127},
	{14, (BODY_INDEX)-1, 0, gen_type4_127},
	{15, (BODY_INDEX)-1, 126, gen_type5_127},
	{16, (BODY_INDEX)-1, 126, gen_type6_127},
	{17, (BODY_INDEX)-1, 0, gen_type7_127},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_127},
	{21, (BODY_INDEX)-1, 218, gen_type9_127},
	{22, (BODY_INDEX)-1, 218, gen_type10_127},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_127},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 126, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 126, gen_type12_127},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init127(void);
void Init127(void)
{
	IDSC(desc_127, 0, 126);
	IDSC(desc_127 + 1, 2, 126);
}


#ifdef __cplusplus
}
#endif
