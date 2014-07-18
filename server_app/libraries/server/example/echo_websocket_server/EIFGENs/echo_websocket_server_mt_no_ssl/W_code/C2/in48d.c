/*
 * Class INET_ADDRESS_IMPL_V6
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_48 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_48 [] = {0xFF11,230,0xFF12,47,0xFFFF};
static EIF_TYPE_INDEX gen_type2_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type3_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type6_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type7_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_48 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_48 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_48 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_48 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type13_48 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type14_48 [] = {0xFF11,49,0xFFFF};
static EIF_TYPE_INDEX gen_type15_48 [] = {0xFF11,49,0xFFFF};


static struct desc_info desc_48[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_48},
	{1, (BODY_INDEX)-1, 230, gen_type1_48},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 47, gen_type2_48},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_48},
	{14, (BODY_INDEX)-1, 0, gen_type4_48},
	{15, (BODY_INDEX)-1, 47, gen_type5_48},
	{16, (BODY_INDEX)-1, 47, gen_type6_48},
	{17, (BODY_INDEX)-1, 0, gen_type7_48},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_48},
	{21, (BODY_INDEX)-1, 218, gen_type9_48},
	{22, (BODY_INDEX)-1, 218, gen_type10_48},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_48},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 47, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 47, gen_type12_48},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{879, (BODY_INDEX)-1, 218, gen_type13_48},
	{880, (BODY_INDEX)-1, 49, gen_type14_48},
	{881, (BODY_INDEX)-1, 49, gen_type15_48},
	{882, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init48(void);
void Init48(void)
{
	IDSC(desc_48, 0, 47);
	IDSC(desc_48 + 1, 2, 47);
	IDSC(desc_48 + 34, 228, 47);
	IDSC(desc_48 + 37, 229, 47);
}


#ifdef __cplusplus
}
#endif
