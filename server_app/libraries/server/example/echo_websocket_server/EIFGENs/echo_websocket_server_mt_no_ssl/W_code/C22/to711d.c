/*
 * Class TO_SPECIAL [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_711 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_711 [] = {0xFF11,230,0xFF12,710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type2_711 [] = {0xFF11,710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type3_711 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_711 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_711 [] = {0xFF11,710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type6_711 [] = {0xFF11,710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type7_711 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_711 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_711 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_711 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_711 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_711 [] = {710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type13_711 [] = {0xFF11,710,202,0xFFFF};
static EIF_TYPE_INDEX gen_type14_711 [] = {0xFF11,682,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_711 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_711 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_711 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_711[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_711},
	{1, (BODY_INDEX)-1, 230, gen_type1_711},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 710, gen_type2_711},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_711},
	{14, (BODY_INDEX)-1, 0, gen_type4_711},
	{15, (BODY_INDEX)-1, 710, gen_type5_711},
	{16, (BODY_INDEX)-1, 710, gen_type6_711},
	{17, (BODY_INDEX)-1, 0, gen_type7_711},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_711},
	{21, (BODY_INDEX)-1, 218, gen_type9_711},
	{22, (BODY_INDEX)-1, 218, gen_type10_711},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_711},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 710, gen_type12_711},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 710, gen_type13_711},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3299, 0, 682, gen_type14_711},
	{3300, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3301, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3302, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_711},
	{3303, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type16_711},
	{3304, (BODY_INDEX)-1, 202, NULL},
	{3305, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3306, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type17_711},
};

extern void Init711(void);
void Init711(void)
{
	IDSC(desc_711, 0, 710);
	IDSC(desc_711 + 1, 2, 710);
	IDSC(desc_711 + 34, 51, 710);
}


#ifdef __cplusplus
}
#endif
