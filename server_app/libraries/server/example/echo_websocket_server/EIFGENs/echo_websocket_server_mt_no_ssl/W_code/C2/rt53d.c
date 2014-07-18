/*
 * Class RT_EXTENSION_COMMON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_53 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_53 [] = {0xFF11,230,0xFF12,52,0xFFFF};
static EIF_TYPE_INDEX gen_type2_53 [] = {0xFF11,52,0xFFFF};
static EIF_TYPE_INDEX gen_type3_53 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_53 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_53 [] = {0xFF11,52,0xFFFF};
static EIF_TYPE_INDEX gen_type6_53 [] = {0xFF11,52,0xFFFF};
static EIF_TYPE_INDEX gen_type7_53 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_53 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_53 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_53 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_53 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_53 [] = {0xFF11,52,0xFFFF};


static struct desc_info desc_53[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_53},
	{1, (BODY_INDEX)-1, 230, gen_type1_53},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 52, gen_type2_53},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_53},
	{14, (BODY_INDEX)-1, 0, gen_type4_53},
	{15, (BODY_INDEX)-1, 52, gen_type5_53},
	{16, (BODY_INDEX)-1, 52, gen_type6_53},
	{17, (BODY_INDEX)-1, 0, gen_type7_53},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_53},
	{21, (BODY_INDEX)-1, 218, gen_type9_53},
	{22, (BODY_INDEX)-1, 218, gen_type10_53},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_53},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 52, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 52, gen_type12_53},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1033, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1034, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init53(void);
void Init53(void)
{
	IDSC(desc_53, 0, 52);
	IDSC(desc_53 + 1, 2, 52);
	IDSC(desc_53 + 34, 165, 52);
}


#ifdef __cplusplus
}
#endif
