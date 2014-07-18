/*
 * Class FINITE [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_433 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {0xFF11,230,0xFF12,432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0xFF11,432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_433 [] = {0xFF11,432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type6_433 [] = {0xFF11,432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type7_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_433 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_433 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_433 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_433 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_433 [] = {432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type13_433 [] = {0xFF11,432,199,0xFFFF};
static EIF_TYPE_INDEX gen_type14_433 [] = {0xFF11,423,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_433 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_433[] = {
	{(BODY_INDEX) 1878, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_433},
	{1, (BODY_INDEX)-1, 230, gen_type1_433},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 432, gen_type2_433},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_433},
	{14, (BODY_INDEX)-1, 0, gen_type4_433},
	{15, (BODY_INDEX)-1, 432, gen_type5_433},
	{16, (BODY_INDEX)-1, 432, gen_type6_433},
	{17, (BODY_INDEX)-1, 0, gen_type7_433},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_433},
	{21, (BODY_INDEX)-1, 218, gen_type9_433},
	{22, (BODY_INDEX)-1, 218, gen_type10_433},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_433},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 432, gen_type12_433},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 432, gen_type13_433},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1877, (BODY_INDEX)-1, 202, NULL},
	{1582, (BODY_INDEX)-1, 202, NULL},
	{1583, 0, 202, NULL},
	{1579, (BODY_INDEX)-1, 202, NULL},
	{1580, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1581, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 423, gen_type14_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_433},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
};

extern void Init433(void);
void Init433(void)
{
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 2, 432);
	IDSC(desc_433 + 34, 199, 432);
	IDSC(desc_433 + 43, 197, 432);
	IDSC(desc_433 + 44, 239, 432);
}


#ifdef __cplusplus
}
#endif
