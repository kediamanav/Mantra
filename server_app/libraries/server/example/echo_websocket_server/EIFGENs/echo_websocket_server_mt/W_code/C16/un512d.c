/*
 * Class UNBOUNDED [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_512 [] = {242,511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type1_512 [] = {511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type2_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_512 [] = {511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type5_512 [] = {511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type6_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_512 [] = {511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type8_512 [] = {511,191,0xFFFF};
static EIF_TYPE_INDEX gen_type9_512 [] = {492,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_512 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_512[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_512},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 511, gen_type1_512},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_512},
	{14, (BODY_INDEX)-1, 0, gen_type3_512},
	{15, (BODY_INDEX)-1, 511, gen_type4_512},
	{16, (BODY_INDEX)-1, 511, gen_type5_512},
	{17, (BODY_INDEX)-1, 0, gen_type6_512},
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
	{28, (BODY_INDEX)-1, 511, gen_type7_512},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 511, gen_type8_512},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 212, NULL},
	{1960, (BODY_INDEX)-1, 212, NULL},
	{1672, (BODY_INDEX)-1, 212, NULL},
	{1673, 0, 212, NULL},
	{1674, (BODY_INDEX)-1, 212, NULL},
	{1675, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1676, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 492, gen_type9_512},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_512},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 179, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 212, NULL},
};

extern void Init512(void);
void Init512(void)
{
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 2, 511);
	IDSC(desc_512 + 34, 207, 511);
	IDSC(desc_512 + 43, 205, 511);
	IDSC(desc_512 + 44, 253, 511);
}


#ifdef __cplusplus
}
#endif
