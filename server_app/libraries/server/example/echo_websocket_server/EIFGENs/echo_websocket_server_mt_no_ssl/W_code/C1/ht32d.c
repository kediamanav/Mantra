/*
 * Class HTTP_REQUEST_HANDLER_FACTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_32 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_32 [] = {0xFF11,230,0xFF12,31,0xFFFF};
static EIF_TYPE_INDEX gen_type2_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type3_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type6_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type7_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_32 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_32 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_32 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_32 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type13_32 [] = {0xFF11,117,0xFFFF};


static struct desc_info desc_32[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_32},
	{1, (BODY_INDEX)-1, 230, gen_type1_32},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 31, gen_type2_32},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_32},
	{14, (BODY_INDEX)-1, 0, gen_type4_32},
	{15, (BODY_INDEX)-1, 31, gen_type5_32},
	{16, (BODY_INDEX)-1, 31, gen_type6_32},
	{17, (BODY_INDEX)-1, 0, gen_type7_32},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_32},
	{21, (BODY_INDEX)-1, 218, gen_type9_32},
	{22, (BODY_INDEX)-1, 218, gen_type10_32},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_32},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 31, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 31, gen_type12_32},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 117, gen_type13_32},
};

extern void Init32(void);
void Init32(void)
{
	IDSC(desc_32, 0, 31);
	IDSC(desc_32 + 1, 2, 31);
	IDSC(desc_32 + 34, 182, 31);
}


#ifdef __cplusplus
}
#endif
