/*
 * Class SSL_PROTOCOL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_9 [] = {242,8,0xFFFF};
static EIF_TYPE_INDEX gen_type1_9 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_9 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_9 [] = {0,0xFFFF};


static struct desc_info desc_9[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_9},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 8, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_9},
	{14, (BODY_INDEX)-1, 0, gen_type2_9},
	{15, (BODY_INDEX)-1, 8, NULL},
	{16, (BODY_INDEX)-1, 8, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_9},
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
	{28, (BODY_INDEX)-1, 8, NULL},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 8, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{149, (BODY_INDEX)-1, 191, NULL},
	{150, (BODY_INDEX)-1, 191, NULL},
	{151, (BODY_INDEX)-1, 191, NULL},
	{152, (BODY_INDEX)-1, 191, NULL},
	{153, (BODY_INDEX)-1, 191, NULL},
	{148, (BODY_INDEX)-1, 191, NULL},
};

extern void Init9(void);
void Init9(void)
{
	IDSC(desc_9, 0, 8);
	IDSC(desc_9 + 1, 2, 8);
	IDSC(desc_9 + 34, 120, 8);
}


#ifdef __cplusplus
}
#endif
