/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_4 [] = {242,3,0xFFFF};
static EIF_TYPE_INDEX gen_type1_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_4 [] = {0,0xFFFF};


static struct desc_info desc_4[] = {
	{(BODY_INDEX) 43, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_4},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{51, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 3, NULL},
	{52, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_4},
	{14, (BODY_INDEX)-1, 0, gen_type2_4},
	{15, (BODY_INDEX)-1, 3, NULL},
	{16, (BODY_INDEX)-1, 3, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_4},
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
	{28, (BODY_INDEX)-1, 3, NULL},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 3, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{44, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{45, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{46, (BODY_INDEX)-1, 179, NULL},
	{47, (BODY_INDEX)-1, 209, NULL},
	{48, (BODY_INDEX)-1, 209, NULL},
	{49, (BODY_INDEX)-1, 212, NULL},
	{50, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{53, 0, 141, NULL},
};

extern void Init4(void);
void Init4(void)
{
	IDSC(desc_4, 0, 3);
	IDSC(desc_4 + 1, 2, 3);
	IDSC(desc_4 + 34, 230, 3);
}


#ifdef __cplusplus
}
#endif
