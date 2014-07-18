/*
 * Code for class BASE64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F19_460(EIF_REFERENCE);
extern EIF_TYPED_VALUE F19_461(EIF_REFERENCE);
extern EIF_TYPED_VALUE F19_462(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F19_463(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F19_464(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F19_465(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F19_466(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F19_467(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F19_468(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F19_469(EIF_REFERENCE);
extern void EIF_Minit19(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BASE64}.name */
EIF_TYPED_VALUE F19_460 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 18, Current, 0, 0, 542);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(18, Current, 542);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000D6, 0,0); /* Result */
	
	tr1 = RTLN(215);
	tr2 = RTMS_EX_H("base64",6,2129433652);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3727, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {BASE64}.has_error */
EIF_TYPED_VALUE F19_461 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(469,Dtype(Current)));
	return r;
}


/* {BASE64}.valid_encoded_string */
EIF_TYPED_VALUE F19_462 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 18, Current, 0, 1, 544);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(18, Current, 544);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	ur1 = RTCCL(arg1);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(459, 365))(Current, ur1x)).it_b);
	if (tb2) {
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3613, "is_empty", arg1))(arg1)).it_b);
		if (!tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
			tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L));
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {BASE64}.encoded_string */
EIF_TYPED_VALUE F19_463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc4);
	RTLR(7,tr3);
	RTLR(8,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 18, Current, 5, 1, 545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(18, Current, 545);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_unencoded_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(458, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = arg1;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAL(Current, 5, 0xF80000DA, 0, 0); /* loc5 */
	
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2) % ((EIF_INTEGER_32) 6L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		RTDBGAL(Current, 4, 0xF80002AA, 0, 0); /* loc4 */
		
		ub1 = (EIF_BOOLEAN) 0;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 6L) - loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {682,202,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2474, Dtype(tr3)))(tr3, ub1x, ui4_1x);
		RTNHOOK(7,1);
		loc4 = (EIF_REFERENCE) tr3;
	} else {
		RTHOOK(8);
		RTDBGAL(Current, 4, 0xF80002AA, 0, 0); /* loc4 */
		
		ub1 = (EIF_BOOLEAN) 0;
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2);
		{
			static EIF_TYPE_INDEX typarr0[] = {682,202,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr3 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2474, Dtype(tr3)))(tr3, ub1x, ui4_1x);
		RTNHOOK(8,1);
		loc4 = (EIF_REFERENCE) tr3;
	}
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)))) break;
		RTHOOK(11);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
		RTNHOOK(11,1);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		ui4_1 = ((EIF_INTEGER_32) 7L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(13);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(14);
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(15);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(16);
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 4L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 5L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(18);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 6L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(19);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tb1 = eif_bit_test(EIF_INTEGER_32,loc3,ui4_1);
		ub1 = tb1;
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc1) + ((EIF_INTEGER_32) 7L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc4))(loc4, ub1x, ui4_1x);
		RTHOOK(20);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(21);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(22);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2377, "count", loc4))(loc4)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(23);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr3 = RTLN(218);
	ui4_1 = (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 6L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr3)))(tr3, ui4_1x);
	RTNHOOK(23,1);
	Result = (EIF_REFERENCE) RTCCL(tr3);
	for (;;) {
		RTHOOK(24);
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)))) break;
		RTHOOK(25);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(26);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 0L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(27);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 += ((EIF_INTEGER_32) 32L);
		}
		RTHOOK(28);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(29);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 += ((EIF_INTEGER_32) 16L);
		}
		RTHOOK(30);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(31);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 += ((EIF_INTEGER_32) 8L);
		}
		RTHOOK(32);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(33);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 += ((EIF_INTEGER_32) 4L);
		}
		RTHOOK(34);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(35);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 += ((EIF_INTEGER_32) 2L);
		}
		RTHOOK(36);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc4))(loc4, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(37);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
		}
		RTHOOK(38);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc5))(loc5, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", Result))(Result, uc1x);
		RTHOOK(39);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 += ((EIF_INTEGER_32) 6L);
	}
	RTHOOK(40);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 3L));
	RTHOOK(41);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		for (;;) {
			RTHOOK(42);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) break;
			RTHOOK(43);
			uc1 = (EIF_CHARACTER_8) '=';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", Result))(Result, uc1x);
			RTHOOK(44);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(45);
		RTCT("unchanged", EX_POST);
		RTCO(tr2);
		if (RTEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(46);
		RTCT("valid_encoded_string", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(459, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef uc1
#undef arg1
}

/* {BASE64}.decoded_string */
EIF_TYPED_VALUE F19_464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "decoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,Result);
	RTLR(7,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 18, Current, 0, 1, 546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(18, Current, 546);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_encoded_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(459, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = arg1;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr3 = RTLN(218);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr3)))(tr3, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr3);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(464, dtype))(Current, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("unchanged", EX_POST);
		RTCO(tr2);
		if (RTEQ(arg1, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("valid_unencoded_string", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(458, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {BASE64}.decode_string_to_buffer */
void F19_465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "decode_string_to_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc11);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_CHAR8, &loc12);
	
	RTEAA(l_feature_name, 18, Current, 12, 2, 537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(18, Current, 537);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTCC(arg2, 18, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 11, 0xF80000DA, 0, 0); /* loc11 */
	
	loc11 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT(NULL, EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
		if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc3) || loc10)) break;
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ur1 = RTCCL(arg1);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTHOOK(10);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
			RTHOOK(12);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ur1 = RTCCL(arg1);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(14);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
				uc1 = tc1;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
				RTHOOK(15);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
				RTHOOK(16);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ur1 = RTCCL(arg1);
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(17);
				if ((EIF_BOOLEAN) (loc2 < loc3)) {
					RTHOOK(18);
					RTDBGAL(Current, 12, 0x08000000, 1, 0); /* loc12 */
					
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc12 = (EIF_CHARACTER_8) tc1;
					RTHOOK(19);
					if ((EIF_BOOLEAN)(loc12 != (EIF_CHARACTER_8) '=')) {
						RTHOOK(20);
						RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
						
						uc1 = loc12;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
						RTHOOK(21);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1++;
					}
					RTHOOK(22);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ur1 = RTCCL(arg1);
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(23);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(24);
						RTDBGAL(Current, 12, 0x08000000, 1, 0); /* loc12 */
						
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
						loc12 = (EIF_CHARACTER_8) tc1;
						RTHOOK(25);
						if ((EIF_BOOLEAN)(loc12 != (EIF_CHARACTER_8) '=')) {
							RTHOOK(26);
							RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
							
							uc1 = loc12;
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
							RTHOOK(27);
							RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
							
							loc1++;
						}
					}
				} else {
					RTHOOK(28);
					RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
					
					*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(29);
				RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
				
				*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(30);
			RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
			
			*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(31);
		RTDBGAL(Current, 10, 0x04000000, 1, 0); /* loc10 */
		
		loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 4L));
		RTHOOK(32);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(33);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = eif_bit_shift_left(loc4,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 255L);
			ti4_2 = eif_bit_and(ti4_1,ui4_1);
			loc8 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(34);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ti4_1 = eif_bit_shift_right(loc5,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			ti4_2 = eif_bit_and(ti4_1,ui4_1);
			loc9 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(35);
			ui4_1 = loc9;
			ti4_1 = eif_bit_or(loc8,ui4_1);
			tc1 = (EIF_CHARACTER_8) ti4_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", arg2))(arg2, uc1x);
			RTHOOK(36);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
				RTHOOK(37);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				ui4_1 = ((EIF_INTEGER_32) 4L);
				ti4_1 = eif_bit_shift_left(loc5,ui4_1);
				ui4_1 = ((EIF_INTEGER_32) 255L);
				ti4_2 = eif_bit_and(ti4_1,ui4_1);
				loc8 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(38);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = eif_bit_shift_right(loc6,ui4_1);
				ui4_1 = ((EIF_INTEGER_32) 15L);
				ti4_2 = eif_bit_and(ti4_1,ui4_1);
				loc9 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(39);
				ui4_1 = loc9;
				ti4_1 = eif_bit_or(loc8,ui4_1);
				tc1 = (EIF_CHARACTER_8) ti4_1;
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", arg2))(arg2, uc1x);
				RTHOOK(40);
				if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 3L))) {
					RTHOOK(41);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					ti4_1 = eif_bit_shift_left(loc6,ui4_1);
					ui4_1 = ti4_1;
					ti4_1 = eif_bit_or(loc7,ui4_1);
					ui4_1 = ((EIF_INTEGER_32) 255L);
					ti4_2 = eif_bit_and((ti4_1),ui4_1);
					tc1 = (EIF_CHARACTER_8) ti4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", arg2))(arg2, uc1x);
				}
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT(NULL, EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {BASE64}.decode_string_to_output_medium */
void F19_466 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "decode_string_to_output_medium";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc11);
	RTLR(4,loc13);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_CHAR8, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 18, Current, 13, 2, 538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(18, Current, 538);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTCC(arg2, 18, l_feature_name, 2, eif_attached_type(139));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_output_writable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1795, "is_open_write", arg2))(arg2)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 469, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(469, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAL(Current, 11, 0xF80000DA, 0, 0); /* loc11 */
	
	loc11 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 13, 0xF80000DA, 0, 0); /* loc13 */
	
	tr1 = RTLN(218);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_LOOP) {
		RTHOOK(7);
		RTCT(NULL, EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
		if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc3) || loc10)) break;
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ur1 = RTCCL(arg1);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 <= loc3)) {
			RTHOOK(12);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			RTHOOK(13);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
			RTHOOK(14);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ur1 = RTCCL(arg1);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc2 <= loc3)) {
				RTHOOK(16);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
				uc1 = tc1;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
				RTHOOK(17);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
				RTHOOK(18);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ur1 = RTCCL(arg1);
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(20);
					RTDBGAL(Current, 12, 0x08000000, 1, 0); /* loc12 */
					
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc12 = (EIF_CHARACTER_8) tc1;
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc12 != (EIF_CHARACTER_8) '=')) {
						RTHOOK(22);
						RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
						
						uc1 = loc12;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
						RTHOOK(23);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1++;
					}
					RTHOOK(24);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ur1 = RTCCL(arg1);
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(466, dtype))(Current, ur1x, ui4_1x)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(25);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(26);
						RTDBGAL(Current, 12, 0x08000000, 1, 0); /* loc12 */
						
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
						loc12 = (EIF_CHARACTER_8) tc1;
						RTHOOK(27);
						if ((EIF_BOOLEAN)(loc12 != (EIF_CHARACTER_8) '=')) {
							RTHOOK(28);
							RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
							
							uc1 = loc12;
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3735, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
							RTHOOK(29);
							RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
							
							loc1++;
						}
					}
				}
			}
		}
		RTHOOK(30);
		RTDBGAL(Current, 10, 0x04000000, 1, 0); /* loc10 */
		
		loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 4L));
		RTHOOK(31);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(32);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = eif_bit_shift_left(loc4,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 255L);
			ti4_2 = eif_bit_and(ti4_1,ui4_1);
			loc8 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(33);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ti4_1 = eif_bit_shift_right(loc5,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			ti4_2 = eif_bit_and(ti4_1,ui4_1);
			loc9 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(34);
			ui4_1 = loc9;
			ti4_1 = eif_bit_or(loc8,ui4_1);
			tc1 = (EIF_CHARACTER_8) ti4_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", loc13))(loc13, uc1x);
			RTHOOK(35);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
				RTHOOK(36);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				ui4_1 = ((EIF_INTEGER_32) 4L);
				ti4_1 = eif_bit_shift_left(loc5,ui4_1);
				ui4_1 = ((EIF_INTEGER_32) 255L);
				ti4_2 = eif_bit_and(ti4_1,ui4_1);
				loc8 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(37);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = eif_bit_shift_right(loc6,ui4_1);
				ui4_1 = ((EIF_INTEGER_32) 15L);
				ti4_2 = eif_bit_and(ti4_1,ui4_1);
				loc9 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(38);
				ui4_1 = loc9;
				ti4_1 = eif_bit_or(loc8,ui4_1);
				tc1 = (EIF_CHARACTER_8) ti4_1;
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", loc13))(loc13, uc1x);
				RTHOOK(39);
				if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 3L))) {
					RTHOOK(40);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					ti4_1 = eif_bit_shift_left(loc6,ui4_1);
					ui4_1 = ti4_1;
					ti4_1 = eif_bit_or(loc7,ui4_1);
					ui4_1 = ((EIF_INTEGER_32) 255L);
					ti4_2 = eif_bit_and((ti4_1),ui4_1);
					tc1 = (EIF_CHARACTER_8) ti4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1405, "extend", loc13))(loc13, uc1x);
				}
			}
			RTHOOK(41);
			ur1 = RTCCL(loc13);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1806, "put_string", arg2))(arg2, ur1x);
			RTHOOK(42);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1409, "wipe_out", loc13))(loc13);
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(7);
			RTCT(NULL, EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {BASE64}.next_encoded_character_position */
EIF_TYPED_VALUE F19_467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_encoded_character_position";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 18, Current, 2, 2, 539);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(18, Current, 539);
	RTCC(arg1, 18, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_from_pos", EX_PRE);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2472, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80000DA, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		ui4_1 = Result;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(467, dtype))(Current, uc1x)).it_b);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) (Result > loc1);
		}
		if (tb1) break;
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_after_from_pos", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {BASE64}.in_character_map */
EIF_TYPED_VALUE F19_468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "in_character_map";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 18, Current, 0, 1, 540);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(18, Current, 540);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
		case (EIF_CHARACTER_8) '=':
		case (EIF_CHARACTER_8) 'A':
		case (EIF_CHARACTER_8) 'B':
		case (EIF_CHARACTER_8) 'C':
		case (EIF_CHARACTER_8) 'D':
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'F':
		case (EIF_CHARACTER_8) 'G':
		case (EIF_CHARACTER_8) 'H':
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'J':
		case (EIF_CHARACTER_8) 'K':
		case (EIF_CHARACTER_8) 'L':
		case (EIF_CHARACTER_8) 'M':
		case (EIF_CHARACTER_8) 'N':
		case (EIF_CHARACTER_8) 'O':
		case (EIF_CHARACTER_8) 'P':
		case (EIF_CHARACTER_8) 'Q':
		case (EIF_CHARACTER_8) 'R':
		case (EIF_CHARACTER_8) 'S':
		case (EIF_CHARACTER_8) 'T':
		case (EIF_CHARACTER_8) 'U':
		case (EIF_CHARACTER_8) 'V':
		case (EIF_CHARACTER_8) 'W':
		case (EIF_CHARACTER_8) 'X':
		case (EIF_CHARACTER_8) 'Y':
		case (EIF_CHARACTER_8) 'Z':
		case (EIF_CHARACTER_8) 'a':
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'c':
		case (EIF_CHARACTER_8) 'd':
		case (EIF_CHARACTER_8) 'e':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'g':
		case (EIF_CHARACTER_8) 'h':
		case (EIF_CHARACTER_8) 'i':
		case (EIF_CHARACTER_8) 'j':
		case (EIF_CHARACTER_8) 'k':
		case (EIF_CHARACTER_8) 'l':
		case (EIF_CHARACTER_8) 'm':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'o':
		case (EIF_CHARACTER_8) 'p':
		case (EIF_CHARACTER_8) 'q':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 's':
		case (EIF_CHARACTER_8) 't':
		case (EIF_CHARACTER_8) 'u':
		case (EIF_CHARACTER_8) 'v':
		case (EIF_CHARACTER_8) 'w':
		case (EIF_CHARACTER_8) 'x':
		case (EIF_CHARACTER_8) 'y':
		case (EIF_CHARACTER_8) 'z':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {BASE64}.character_map */
RTOID (F19_469)


EIF_TYPED_VALUE F19_469 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F19_469,542,RTMS_EX_H("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",65,980824637));
}

void EIF_Minit19 (void)
{
	GTCX
	RTOTS (469,F19_469)
}


#ifdef __cplusplus
}
#endif
