/*
 * Class BOX [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_434 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_434 [] = {0xFF11,230,0xFF12,433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type2_434 [] = {0xFF11,433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type3_434 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_434 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_434 [] = {0xFF11,433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type6_434 [] = {0xFF11,433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type7_434 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_434 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_434 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_434 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_434 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_434 [] = {433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type13_434 [] = {0xFF11,433,199,0xFFFF};
static EIF_TYPE_INDEX gen_type14_434 [] = {0xFF11,423,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_434 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_434[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_434},
	{1, (BODY_INDEX)-1, 230, gen_type1_434},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 433, gen_type2_434},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_434},
	{14, (BODY_INDEX)-1, 0, gen_type4_434},
	{15, (BODY_INDEX)-1, 433, gen_type5_434},
	{16, (BODY_INDEX)-1, 433, gen_type6_434},
	{17, (BODY_INDEX)-1, 0, gen_type7_434},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_434},
	{21, (BODY_INDEX)-1, 218, gen_type9_434},
	{22, (BODY_INDEX)-1, 218, gen_type10_434},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_434},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 433, gen_type12_434},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 433, gen_type13_434},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1582, (BODY_INDEX)-1, 202, NULL},
	{1583, 0, 202, NULL},
	{1579, (BODY_INDEX)-1, 202, NULL},
	{1580, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1581, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 423, gen_type14_434},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_434},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
};

extern void Init434(void);
void Init434(void)
{
	IDSC(desc_434, 0, 433);
	IDSC(desc_434 + 1, 2, 433);
	IDSC(desc_434 + 34, 199, 433);
	IDSC(desc_434 + 43, 239, 433);
}


#ifdef __cplusplus
}
#endif
