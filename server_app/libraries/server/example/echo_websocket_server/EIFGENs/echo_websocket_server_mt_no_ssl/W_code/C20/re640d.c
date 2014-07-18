/*
 * Class RESIZABLE [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_640 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_640 [] = {0xFF11,230,0xFF12,639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type2_640 [] = {0xFF11,639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type3_640 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_640 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_640 [] = {0xFF11,639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type6_640 [] = {0xFF11,639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type7_640 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_640 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_640 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_640 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_640 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_640 [] = {639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type13_640 [] = {0xFF11,639,205,0xFFFF};
static EIF_TYPE_INDEX gen_type14_640 [] = {0xFF11,618,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_640 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_640[] = {
	{(BODY_INDEX) 1971, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_640},
	{1, (BODY_INDEX)-1, 230, gen_type1_640},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 639, gen_type2_640},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_640},
	{14, (BODY_INDEX)-1, 0, gen_type4_640},
	{15, (BODY_INDEX)-1, 639, gen_type5_640},
	{16, (BODY_INDEX)-1, 639, gen_type6_640},
	{17, (BODY_INDEX)-1, 0, gen_type7_640},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_640},
	{21, (BODY_INDEX)-1, 218, gen_type9_640},
	{22, (BODY_INDEX)-1, 218, gen_type10_640},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_640},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 639, gen_type12_640},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 639, gen_type13_640},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1887, (BODY_INDEX)-1, 202, NULL},
	{1602, (BODY_INDEX)-1, 202, NULL},
	{1603, 0, 202, NULL},
	{1599, (BODY_INDEX)-1, 202, NULL},
	{1600, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1601, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 618, gen_type14_640},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_640},
	{1911, (BODY_INDEX)-1, 202, NULL},
	{1972, (BODY_INDEX)-1, 169, NULL},
	{1973, (BODY_INDEX)-1, 169, NULL},
	{1974, (BODY_INDEX)-1, 169, NULL},
	{1976, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
	{1975, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
};

extern void Init640(void);
void Init640(void)
{
	IDSC(desc_640, 0, 639);
	IDSC(desc_640 + 1, 2, 639);
	IDSC(desc_640 + 34, 199, 639);
	IDSC(desc_640 + 43, 239, 639);
	IDSC(desc_640 + 44, 49, 639);
	IDSC(desc_640 + 50, 136, 639);
	IDSC(desc_640 + 52, 197, 639);
}


#ifdef __cplusplus
}
#endif
