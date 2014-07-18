/*
 * Class BOX [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_629 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_629 [] = {0xFF11,230,0xFF12,628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type2_629 [] = {0xFF11,628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type3_629 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_629 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_629 [] = {0xFF11,628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type6_629 [] = {0xFF11,628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type7_629 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_629 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_629 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_629 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_629 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_629 [] = {628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type13_629 [] = {0xFF11,628,205,0xFFFF};
static EIF_TYPE_INDEX gen_type14_629 [] = {0xFF11,618,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_629 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_629[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_629},
	{1, (BODY_INDEX)-1, 230, gen_type1_629},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 628, gen_type2_629},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_629},
	{14, (BODY_INDEX)-1, 0, gen_type4_629},
	{15, (BODY_INDEX)-1, 628, gen_type5_629},
	{16, (BODY_INDEX)-1, 628, gen_type6_629},
	{17, (BODY_INDEX)-1, 0, gen_type7_629},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_629},
	{21, (BODY_INDEX)-1, 218, gen_type9_629},
	{22, (BODY_INDEX)-1, 218, gen_type10_629},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_629},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 628, gen_type12_629},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 628, gen_type13_629},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1602, (BODY_INDEX)-1, 202, NULL},
	{1603, 0, 202, NULL},
	{1599, (BODY_INDEX)-1, 202, NULL},
	{1600, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1601, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 618, gen_type14_629},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_629},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
};

extern void Init629(void);
void Init629(void)
{
	IDSC(desc_629, 0, 628);
	IDSC(desc_629 + 1, 2, 628);
	IDSC(desc_629 + 34, 199, 628);
	IDSC(desc_629 + 43, 239, 628);
}


#ifdef __cplusplus
}
#endif
