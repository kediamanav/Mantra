/*
 * Class MISMATCH_CORRECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_164 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_164 [] = {0xFF11,230,0xFF12,163,0xFFFF};
static EIF_TYPE_INDEX gen_type2_164 [] = {0xFF11,163,0xFFFF};
static EIF_TYPE_INDEX gen_type3_164 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_164 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_164 [] = {0xFF11,163,0xFFFF};
static EIF_TYPE_INDEX gen_type6_164 [] = {0xFF11,163,0xFFFF};
static EIF_TYPE_INDEX gen_type7_164 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_164 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_164 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_164 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_164 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_164 [] = {0xFF11,163,0xFFFF};
static EIF_TYPE_INDEX gen_type13_164 [] = {0xFF11,164,0xFFFF};


static struct desc_info desc_164[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_164},
	{1, (BODY_INDEX)-1, 230, gen_type1_164},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 163, gen_type2_164},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_164},
	{14, (BODY_INDEX)-1, 0, gen_type4_164},
	{15, (BODY_INDEX)-1, 163, gen_type5_164},
	{16, (BODY_INDEX)-1, 163, gen_type6_164},
	{17, (BODY_INDEX)-1, 0, gen_type7_164},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_164},
	{21, (BODY_INDEX)-1, 218, gen_type9_164},
	{22, (BODY_INDEX)-1, 218, gen_type10_164},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_164},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 163, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 163, gen_type12_164},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{5683, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{5684, (BODY_INDEX)-1, 164, gen_type13_164},
};

extern void Init164(void);
void Init164(void)
{
	IDSC(desc_164, 0, 163);
	IDSC(desc_164 + 1, 2, 163);
	IDSC(desc_164 + 34, 40, 163);
}


#ifdef __cplusplus
}
#endif
