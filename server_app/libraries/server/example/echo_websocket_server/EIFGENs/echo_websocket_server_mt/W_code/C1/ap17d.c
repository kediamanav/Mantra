/*
 * Class APPLICATION_CONFIGURATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_17 [] = {242,16,0xFFFF};
static EIF_TYPE_INDEX gen_type1_17 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_17 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_17 [] = {0,0xFFFF};


static struct desc_info desc_17[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_17},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 16, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_17},
	{14, (BODY_INDEX)-1, 0, gen_type2_17},
	{15, (BODY_INDEX)-1, 16, NULL},
	{16, (BODY_INDEX)-1, 16, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_17},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, NULL},
	{21, (BODY_INDEX)-1, 228, NULL},
	{22, (BODY_INDEX)-1, 228, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 16, NULL},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 16, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{500, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{501, 0, 228, NULL},
	{502, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init17(void);
void Init17(void)
{
	IDSC(desc_17, 0, 16);
	IDSC(desc_17 + 1, 2, 16);
	IDSC(desc_17 + 34, 31, 16);
}


#ifdef __cplusplus
}
#endif
