/*
 * Code for class OPERATING_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F15_337(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_338(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_339(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_340(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_341(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_342(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_343(EIF_REFERENCE);
extern void EIF_Minit15(void);

#ifdef __cplusplus
}
#endif

#include "eif_path_name.h"
#include "eif_dir.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_ENVIRONMENT}.directory_separator */
RTOID (F15_337)
EIF_TYPED_VALUE F15_337 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "directory_separator";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_CHARACTER_8)
	RTOTDB(EIF_CHARACTER_8, F15_337);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 421);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(14, Current, 421);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(344, Dtype(Current)))(Current)).it_c1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef Result
}

/* {OPERATING_ENVIRONMENT}.current_directory_name_representation */
RTOID (F15_338)
EIF_TYPED_VALUE F15_338 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_directory_name_representation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F15_338);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 422);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(14, Current, 422);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(345, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef Result
}

/* {OPERATING_ENVIRONMENT}.home_directory_supported */
EIF_TYPED_VALUE F15_339 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "home_directory_supported";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 423);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(14, Current, 423);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_home_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.root_directory_supported */
EIF_TYPED_VALUE F15_340 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "root_directory_supported";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 424);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(14, Current, 424);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_root_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.case_sensitive_path_names */
EIF_TYPED_VALUE F15_341 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "case_sensitive_path_names";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 418);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(14, Current, 418);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.c_dir_separator */
EIF_TYPED_VALUE F15_342 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_dir_separator";
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 419);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(14, Current, 419);
	RTIV(Current, RTAL);Result = (EIF_CHARACTER_8) eif_dir_separator();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.eif_current_dir_representation */
EIF_TYPED_VALUE F15_343 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "eif_current_dir_representation";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 420);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(14, Current, 420);
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_current_dir_representation();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit15 (void)
{
	GTCX
	RTOTS (337,F15_337)
	RTOTS (338,F15_338)
}


#ifdef __cplusplus
}
#endif
