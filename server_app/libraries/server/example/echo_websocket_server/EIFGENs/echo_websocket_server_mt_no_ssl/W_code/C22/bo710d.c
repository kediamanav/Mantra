/*
 * Class BOUNDED [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_710 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_710 [] = {0xFF11,230,0xFF12,709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type2_710 [] = {0xFF11,709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type3_710 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_710 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_710 [] = {0xFF11,709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type6_710 [] = {0xFF11,709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type7_710 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_710 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_710 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_710 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_710 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_710 [] = {709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type13_710 [] = {0xFF11,709,202,0xFFFF};
static EIF_TYPE_INDEX gen_type14_710 [] = {0xFF11,691,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_710 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_710[] = {
	{(BODY_INDEX) 1916, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_710},
	{1, (BODY_INDEX)-1, 230, gen_type1_710},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 709, gen_type2_710},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_710},
	{14, (BODY_INDEX)-1, 0, gen_type4_710},
	{15, (BODY_INDEX)-1, 709, gen_type5_710},
	{16, (BODY_INDEX)-1, 709, gen_type6_710},
	{17, (BODY_INDEX)-1, 0, gen_type7_710},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_710},
	{21, (BODY_INDEX)-1, 218, gen_type9_710},
	{22, (BODY_INDEX)-1, 218, gen_type10_710},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_710},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 709, gen_type12_710},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 709, gen_type13_710},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1891, (BODY_INDEX)-1, 202, NULL},
	{1612, (BODY_INDEX)-1, 202, NULL},
	{1613, 0, 202, NULL},
	{1609, (BODY_INDEX)-1, 202, NULL},
	{1610, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1611, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 691, gen_type14_710},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_710},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1915, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
};

extern void Init710(void);
void Init710(void)
{
	IDSC(desc_710, 0, 709);
	IDSC(desc_710 + 1, 2, 709);
	IDSC(desc_710 + 34, 199, 709);
	IDSC(desc_710 + 43, 136, 709);
	IDSC(desc_710 + 45, 239, 709);
	IDSC(desc_710 + 46, 197, 709);
}


#ifdef __cplusplus
}
#endif
