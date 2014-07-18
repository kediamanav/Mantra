/*
 * Class CELL [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_754 [] = {242,753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type1_754 [] = {753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type2_754 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_754 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_754 [] = {753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type5_754 [] = {753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type6_754 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_754 [] = {753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type8_754 [] = {753,206,0xFFFF};
static EIF_TYPE_INDEX gen_type9_754 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_754 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_754[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_754},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 753, gen_type1_754},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_754},
	{14, (BODY_INDEX)-1, 0, gen_type3_754},
	{15, (BODY_INDEX)-1, 753, gen_type4_754},
	{16, (BODY_INDEX)-1, 753, gen_type5_754},
	{17, (BODY_INDEX)-1, 0, gen_type6_754},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, NULL},
	{21, (BODY_INDEX)-1, 228, NULL},
	{22, (BODY_INDEX)-1, 228, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 753, gen_type7_754},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 753, gen_type8_754},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{812, 0, (EIF_TYPE_INDEX)-1, gen_type9_754},
	{813, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{814, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_754},
};

extern void Init754(void);
void Init754(void)
{
	IDSC(desc_754, 0, 753);
	IDSC(desc_754 + 1, 2, 753);
	IDSC(desc_754 + 34, 78, 753);
}


#ifdef __cplusplus
}
#endif
