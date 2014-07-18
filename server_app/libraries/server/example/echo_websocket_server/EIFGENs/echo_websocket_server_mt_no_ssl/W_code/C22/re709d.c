/*
 * Class RESIZABLE [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_709 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_709 [] = {0xFF11,230,0xFF12,708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type2_709 [] = {0xFF11,708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type3_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_709 [] = {0xFF11,708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type6_709 [] = {0xFF11,708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type7_709 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_709 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_709 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_709 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_709 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_709 [] = {708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type13_709 [] = {0xFF11,708,202,0xFFFF};
static EIF_TYPE_INDEX gen_type14_709 [] = {0xFF11,691,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_709 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_709[] = {
	{(BODY_INDEX) 1983, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_709},
	{1, (BODY_INDEX)-1, 230, gen_type1_709},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 708, gen_type2_709},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_709},
	{14, (BODY_INDEX)-1, 0, gen_type4_709},
	{15, (BODY_INDEX)-1, 708, gen_type5_709},
	{16, (BODY_INDEX)-1, 708, gen_type6_709},
	{17, (BODY_INDEX)-1, 0, gen_type7_709},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_709},
	{21, (BODY_INDEX)-1, 218, gen_type9_709},
	{22, (BODY_INDEX)-1, 218, gen_type10_709},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_709},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 708, gen_type12_709},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 708, gen_type13_709},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 202, NULL},
	{1891, (BODY_INDEX)-1, 202, NULL},
	{1612, (BODY_INDEX)-1, 202, NULL},
	{1613, 0, 202, NULL},
	{1609, (BODY_INDEX)-1, 202, NULL},
	{1610, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1611, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 691, gen_type14_709},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_709},
	{1915, (BODY_INDEX)-1, 202, NULL},
	{1984, (BODY_INDEX)-1, 169, NULL},
	{1985, (BODY_INDEX)-1, 169, NULL},
	{1986, (BODY_INDEX)-1, 169, NULL},
	{1988, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
	{1987, (BODY_INDEX)-1, 202, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 169, NULL},
};

extern void Init709(void);
void Init709(void)
{
	IDSC(desc_709, 0, 708);
	IDSC(desc_709 + 1, 2, 708);
	IDSC(desc_709 + 34, 199, 708);
	IDSC(desc_709 + 43, 239, 708);
	IDSC(desc_709 + 44, 49, 708);
	IDSC(desc_709 + 50, 136, 708);
	IDSC(desc_709 + 52, 197, 708);
}


#ifdef __cplusplus
}
#endif
