/*
 * Class SEMAPHORE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_135 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_135 [] = {0xFF11,230,0xFF12,134,0xFFFF};
static EIF_TYPE_INDEX gen_type2_135 [] = {0xFF11,134,0xFFFF};
static EIF_TYPE_INDEX gen_type3_135 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_135 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_135 [] = {0xFF11,134,0xFFFF};
static EIF_TYPE_INDEX gen_type6_135 [] = {0xFF11,134,0xFFFF};
static EIF_TYPE_INDEX gen_type7_135 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_135 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_135 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_135 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_135 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_135 [] = {0xFF11,134,0xFFFF};


static struct desc_info desc_135[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_135},
	{1, (BODY_INDEX)-1, 230, gen_type1_135},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 134, gen_type2_135},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_135},
	{14, (BODY_INDEX)-1, 0, gen_type4_135},
	{15, (BODY_INDEX)-1, 134, gen_type5_135},
	{16, (BODY_INDEX)-1, 134, gen_type6_135},
	{17, (BODY_INDEX)-1, 0, gen_type7_135},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_135},
	{21, (BODY_INDEX)-1, 218, gen_type9_135},
	{22, (BODY_INDEX)-1, 218, gen_type10_135},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_135},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 134, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 134, gen_type12_135},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2418, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2393, (BODY_INDEX)-1, 202, NULL},
	{2410, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2411, (BODY_INDEX)-1, 202, NULL},
	{2412, (BODY_INDEX)-1, 202, NULL},
	{2413, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2414, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2415, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2416, (BODY_INDEX)-1, 202, NULL},
	{2417, 0, 208, NULL},
	{2419, (BODY_INDEX)-1, 208, NULL},
	{2420, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2421, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2422, (BODY_INDEX)-1, 202, NULL},
	{2423, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init135(void);
void Init135(void)
{
	IDSC(desc_135, 0, 134);
	IDSC(desc_135 + 1, 2, 134);
	IDSC(desc_135 + 34, 212, 134);
	IDSC(desc_135 + 36, 256, 134);
}


#ifdef __cplusplus
}
#endif
