/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2 [] = {0xFF11,230,0xFF12,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2 [] = {0xFF11,135,0xFFFF};


static struct desc_info desc_2[] = {
	{(BODY_INDEX) 44, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_2},
	{1, (BODY_INDEX)-1, 230, gen_type1_2},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{41, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 1, gen_type2_2},
	{42, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2},
	{14, (BODY_INDEX)-1, 0, gen_type4_2},
	{15, (BODY_INDEX)-1, 1, gen_type5_2},
	{16, (BODY_INDEX)-1, 1, gen_type6_2},
	{17, (BODY_INDEX)-1, 0, gen_type7_2},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_2},
	{21, (BODY_INDEX)-1, 218, gen_type9_2},
	{22, (BODY_INDEX)-1, 218, gen_type10_2},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 1, gen_type12_2},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{34, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{35, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{36, (BODY_INDEX)-1, 169, NULL},
	{37, (BODY_INDEX)-1, 199, NULL},
	{38, (BODY_INDEX)-1, 199, NULL},
	{39, (BODY_INDEX)-1, 202, NULL},
	{40, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{43, 0, 135, gen_type13_2},
};

extern void Init2(void);
void Init2(void)
{
	IDSC(desc_2, 0, 1);
	IDSC(desc_2 + 1, 2, 1);
	IDSC(desc_2 + 34, 263, 1);
}


#ifdef __cplusplus
}
#endif
