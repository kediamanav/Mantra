/*
 * Class SHA1
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_22 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_22 [] = {0xFF11,230,0xFF12,21,0xFFFF};
static EIF_TYPE_INDEX gen_type2_22 [] = {0xFF11,21,0xFFFF};
static EIF_TYPE_INDEX gen_type3_22 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_22 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_22 [] = {0xFF11,21,0xFFFF};
static EIF_TYPE_INDEX gen_type6_22 [] = {0xFF11,21,0xFFFF};
static EIF_TYPE_INDEX gen_type7_22 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_22 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_22 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_22 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_22 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_22 [] = {0xFF11,21,0xFFFF};
static EIF_TYPE_INDEX gen_type13_22 [] = {0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type14_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type15_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type16_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type17_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type18_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type19_22 [] = {0xFF11,534,187,0xFFFF};
static EIF_TYPE_INDEX gen_type20_22 [] = {0xFF11,500,181,0xFFFF};


static struct desc_info desc_22[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 218, gen_type0_22},
	{1, (BODY_INDEX)-1, 230, gen_type1_22},
	{2, (BODY_INDEX)-1, 202, NULL},
	{3, (BODY_INDEX)-1, 202, NULL},
	{4, (BODY_INDEX)-1, 202, NULL},
	{5, (BODY_INDEX)-1, 202, NULL},
	{6, (BODY_INDEX)-1, 202, NULL},
	{7, (BODY_INDEX)-1, 202, NULL},
	{8, (BODY_INDEX)-1, 202, NULL},
	{9, (BODY_INDEX)-1, 202, NULL},
	{10, (BODY_INDEX)-1, 21, gen_type2_22},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_22},
	{14, (BODY_INDEX)-1, 0, gen_type4_22},
	{15, (BODY_INDEX)-1, 21, gen_type5_22},
	{16, (BODY_INDEX)-1, 21, gen_type6_22},
	{17, (BODY_INDEX)-1, 0, gen_type7_22},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_22},
	{21, (BODY_INDEX)-1, 218, gen_type9_22},
	{22, (BODY_INDEX)-1, 218, gen_type10_22},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_22},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 21, NULL},
	{29, (BODY_INDEX)-1, 208, NULL},
	{30, (BODY_INDEX)-1, 21, gen_type12_22},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{566, (BODY_INDEX)-1, 218, gen_type13_22},
	{573, (BODY_INDEX)-1, 534, gen_type14_22},
	{574, (BODY_INDEX)-1, 169, NULL},
	{575, (BODY_INDEX)-1, 169, NULL},
	{576, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{577, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{567, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{568, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{569, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{570, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{571, 64, 178, NULL},
	{562, (BODY_INDEX)-1, 178, NULL},
	{563, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{564, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{593, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{547, (BODY_INDEX)-1, 181, NULL},
	{548, (BODY_INDEX)-1, 181, NULL},
	{549, (BODY_INDEX)-1, 181, NULL},
	{550, (BODY_INDEX)-1, 181, NULL},
	{551, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{552, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{553, (BODY_INDEX)-1, 181, NULL},
	{554, (BODY_INDEX)-1, 181, NULL},
	{555, (BODY_INDEX)-1, 181, NULL},
	{556, (BODY_INDEX)-1, 534, gen_type15_22},
	{557, (BODY_INDEX)-1, 534, gen_type16_22},
	{558, (BODY_INDEX)-1, 534, gen_type17_22},
	{559, (BODY_INDEX)-1, 202, NULL},
	{560, (BODY_INDEX)-1, 534, gen_type18_22},
	{561, (BODY_INDEX)-1, 187, NULL},
	{572, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{578, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{579, 0, 534, gen_type19_22},
	{580, 56, 169, NULL},
	{581, 8, 500, gen_type20_22},
	{582, 16, 181, NULL},
	{583, 20, 181, NULL},
	{584, 24, 181, NULL},
	{585, 28, 181, NULL},
	{586, 32, 181, NULL},
	{587, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{588, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{589, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{590, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{591, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{592, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{594, 36, 181, NULL},
	{595, 40, 181, NULL},
	{596, 44, 181, NULL},
	{597, 48, 181, NULL},
	{598, 52, 181, NULL},
	{599, (BODY_INDEX)-1, 181, NULL},
	{600, (BODY_INDEX)-1, 181, NULL},
	{601, (BODY_INDEX)-1, 181, NULL},
	{602, (BODY_INDEX)-1, 181, NULL},
};

extern void Init22(void);
void Init22(void)
{
	IDSC(desc_22, 0, 21);
	IDSC(desc_22 + 1, 2, 21);
	IDSC(desc_22 + 34, 246, 21);
	IDSC(desc_22 + 49, 247, 21);
	IDSC(desc_22 + 64, 219, 21);
}


#ifdef __cplusplus
}
#endif
