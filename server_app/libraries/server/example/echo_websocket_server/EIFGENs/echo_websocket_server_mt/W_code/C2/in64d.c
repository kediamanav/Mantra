/*
 * Class INTEGER_OVERFLOW_CHECKER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_64 [] = {242,63,0xFFFF};
static EIF_TYPE_INDEX gen_type1_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_64 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_64 [] = {445,188,0xFFFF};
static EIF_TYPE_INDEX gen_type5_64 [] = {445,188,0xFFFF};
static EIF_TYPE_INDEX gen_type6_64 [] = {445,188,0xFFFF};
static EIF_TYPE_INDEX gen_type7_64 [] = {445,188,0xFFFF};


static struct desc_info desc_64[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_64},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 63, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_64},
	{14, (BODY_INDEX)-1, 0, gen_type2_64},
	{15, (BODY_INDEX)-1, 63, NULL},
	{16, (BODY_INDEX)-1, 63, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_64},
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
	{28, (BODY_INDEX)-1, 63, NULL},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 63, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1132, 40, 200, NULL},
	{1133, 32, 188, NULL},
	{1134, (BODY_INDEX)-1, 179, NULL},
	{1135, (BODY_INDEX)-1, 179, NULL},
	{1113, (BODY_INDEX)-1, 179, NULL},
	{1114, (BODY_INDEX)-1, 179, NULL},
	{1115, (BODY_INDEX)-1, 179, NULL},
	{1116, (BODY_INDEX)-1, 179, NULL},
	{1117, (BODY_INDEX)-1, 179, NULL},
	{1118, (BODY_INDEX)-1, 179, NULL},
	{1119, (BODY_INDEX)-1, 179, NULL},
	{1120, (BODY_INDEX)-1, 179, NULL},
	{1121, (BODY_INDEX)-1, 179, NULL},
	{1122, (BODY_INDEX)-1, 179, NULL},
	{1123, (BODY_INDEX)-1, 179, NULL},
	{1124, (BODY_INDEX)-1, 179, NULL},
	{1125, (BODY_INDEX)-1, 179, NULL},
	{1126, (BODY_INDEX)-1, 212, NULL},
	{1127, (BODY_INDEX)-1, 212, NULL},
	{1128, (BODY_INDEX)-1, 212, NULL},
	{1129, (BODY_INDEX)-1, 212, NULL},
	{1130, (BODY_INDEX)-1, 212, NULL},
	{1131, (BODY_INDEX)-1, 212, NULL},
	{1136, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1137, (BODY_INDEX)-1, 212, NULL},
	{1138, 0, 445, gen_type4_64},
	{1139, 8, 445, gen_type5_64},
	{1140, 16, 445, gen_type6_64},
	{1141, 24, 445, gen_type7_64},
};

extern void Init64(void);
void Init64(void)
{
	IDSC(desc_64, 0, 63);
	IDSC(desc_64 + 1, 2, 63);
	IDSC(desc_64 + 34, 152, 63);
	IDSC(desc_64 + 57, 212, 63);
}


#ifdef __cplusplus
}
#endif
