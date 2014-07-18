/*
 * Class INET_PROPERTIES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_45 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_45 [] = {0xFF11,230,0xFF12,44,0xFFFF};
static EIF_TYPE_INDEX gen_type2_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type3_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type6_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type7_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_45 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_45 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_45 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_45 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_45 [] = {0xFF11,44,0xFFFF};


static struct desc_info desc_45[] = {
	{(BODY_INDEX) 872, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_45},
	{1, (BODY_INDEX)-1, 230, gen_type1_45},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 44, gen_type2_45},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_45},
	{14, (BODY_INDEX)-1, 0, gen_type4_45},
	{15, (BODY_INDEX)-1, 44, gen_type5_45},
	{16, (BODY_INDEX)-1, 44, gen_type6_45},
	{17, (BODY_INDEX)-1, 0, gen_type7_45},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_45},
	{21, (BODY_INDEX)-1, 218, gen_type9_45},
	{22, (BODY_INDEX)-1, 218, gen_type10_45},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_45},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 44, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 44, gen_type12_45},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{873, (BODY_INDEX)-1, 202, NULL},
	{874, (BODY_INDEX)-1, 202, NULL},
	{871, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init45(void);
void Init45(void)
{
	IDSC(desc_45, 0, 44);
	IDSC(desc_45 + 1, 2, 44);
	IDSC(desc_45 + 34, 231, 44);
}


#ifdef __cplusplus
}
#endif
