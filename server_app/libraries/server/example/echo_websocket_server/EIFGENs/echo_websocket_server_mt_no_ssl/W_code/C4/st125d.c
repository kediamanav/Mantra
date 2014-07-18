/*
 * Class STRING_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_125 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_125 [] = {0xFF11,230,0xFF12,124,0xFFFF};
static EIF_TYPE_INDEX gen_type2_125 [] = {0xFF11,124,0xFFFF};
static EIF_TYPE_INDEX gen_type3_125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_125 [] = {0xFF11,124,0xFFFF};
static EIF_TYPE_INDEX gen_type6_125 [] = {0xFF11,124,0xFFFF};
static EIF_TYPE_INDEX gen_type7_125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_125 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_125 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_125 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_125 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_125 [] = {0xFF11,124,0xFFFF};


static struct desc_info desc_125[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_125},
	{1, (BODY_INDEX)-1, 230, gen_type1_125},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 124, gen_type2_125},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_125},
	{14, (BODY_INDEX)-1, 0, gen_type4_125},
	{15, (BODY_INDEX)-1, 124, gen_type5_125},
	{16, (BODY_INDEX)-1, 124, gen_type6_125},
	{17, (BODY_INDEX)-1, 0, gen_type7_125},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_125},
	{21, (BODY_INDEX)-1, 218, gen_type9_125},
	{22, (BODY_INDEX)-1, 218, gen_type10_125},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_125},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 124, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 124, gen_type12_125},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init125(void);
void Init125(void)
{
	IDSC(desc_125, 0, 124);
	IDSC(desc_125 + 1, 2, 124);
}


#ifdef __cplusplus
}
#endif
