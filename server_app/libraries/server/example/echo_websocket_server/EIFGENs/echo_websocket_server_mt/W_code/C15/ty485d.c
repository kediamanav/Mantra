/*
 * Class TYPE [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_485 [] = {242,484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type1_485 [] = {484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type2_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_485 [] = {484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type5_485 [] = {484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type6_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_485 [] = {484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type8_485 [] = {484,191,0xFFFF};
static EIF_TYPE_INDEX gen_type9_485 [] = {242,0,0xFFFF};
static EIF_TYPE_INDEX gen_type10_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_485 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_485[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_485},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{7622, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 484, gen_type1_485},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_485},
	{14, (BODY_INDEX)-1, 0, gen_type3_485},
	{15, (BODY_INDEX)-1, 484, gen_type4_485},
	{16, (BODY_INDEX)-1, 484, gen_type5_485},
	{17, (BODY_INDEX)-1, 0, gen_type6_485},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, NULL},
	{7629, (BODY_INDEX)-1, 228, NULL},
	{22, (BODY_INDEX)-1, 228, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 484, gen_type7_485},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 484, gen_type8_485},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{7617, (BODY_INDEX)-1, 179, NULL},
	{7108, (BODY_INDEX)-1, 212, NULL},
	{7623, (BODY_INDEX)-1, 212, NULL},
	{7624, (BODY_INDEX)-1, 212, NULL},
	{1440, (BODY_INDEX)-1, 212, NULL},
	{1441, (BODY_INDEX)-1, 212, NULL},
	{7614, (BODY_INDEX)-1, 225, NULL},
	{7615, (BODY_INDEX)-1, 242, gen_type9_485},
	{7616, (BODY_INDEX)-1, 179, NULL},
	{7618, (BODY_INDEX)-1, 179, NULL},
	{7619, (BODY_INDEX)-1, 212, NULL},
	{7620, (BODY_INDEX)-1, 212, NULL},
	{7621, (BODY_INDEX)-1, 212, NULL},
	{7625, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_485},
	{7626, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_485},
	{7627, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_485},
	{7628, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type13_485},
	{7631, (BODY_INDEX)-1, 228, NULL},
	{7632, (BODY_INDEX)-1, 212, NULL},
	{7633, (BODY_INDEX)-1, 212, NULL},
	{7634, (BODY_INDEX)-1, 228, NULL},
	{7635, (BODY_INDEX)-1, 228, NULL},
	{7636, (BODY_INDEX)-1, 228, NULL},
	{7637, (BODY_INDEX)-1, 227, NULL},
	{7638, 0, 225, NULL},
	{7639, (BODY_INDEX)-1, 228, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_485},
	{7630, (BODY_INDEX)-1, 228, NULL},
};

extern void Init485(void);
void Init485(void)
{
	IDSC(desc_485, 0, 484);
	IDSC(desc_485 + 1, 2, 484);
	IDSC(desc_485 + 34, 54, 484);
	IDSC(desc_485 + 36, 76, 484);
	IDSC(desc_485 + 40, 12, 484);
	IDSC(desc_485 + 61, 77, 484);
}


#ifdef __cplusplus
}
#endif
