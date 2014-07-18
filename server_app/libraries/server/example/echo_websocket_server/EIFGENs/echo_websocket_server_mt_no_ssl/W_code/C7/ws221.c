/*
 * Code for class WS_FRAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F221_5202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F221_5203(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F221_5204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5205(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5206(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5207(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5208(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5209(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5210(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5211(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5212(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5213(EIF_REFERENCE);
extern void F221_5214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F221_5215(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F221_5216(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F221_5217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5220(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5222(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5223(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5225(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5226(EIF_REFERENCE);
extern void F221_5227(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5228(EIF_REFERENCE);
extern void F221_5229(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F221_5230(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F221_5231(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5232(EIF_REFERENCE);
extern EIF_TYPED_VALUE F221_5233(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F221_5234(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit221(void);

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

/* {WS_FRAME}.make */
void F221_5202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 2, 10134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10134);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3933, 0x04000000, 1); /* is_incomplete */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3933, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3912, 0x10000000, 1); /* opcode */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3913, 0x04000000, 1); /* is_fin */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3913, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	switch (ti4_1) {
		case 0L:
		case 1L:
		case 2L:
			break;
		case 8L:
		case 9L:
		case 10L:
			RTHOOK(5);
			if (arg2) {
			} else {
				RTHOOK(6);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				tr1 = RTMS_EX_H("Control frames MUST NOT be fragmented.",38,1914465326);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3938, dtype))(Current, ui4_1x, ur1x);
			}
			break;
		default:
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr1 = RTMS_EX_H("Unknown opcode",14,49004645);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3938, dtype))(Current, ui4_1x, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.make_as_injected_control */
void F221_5203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_as_injected_control";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 2, 10135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10135);
	RTCC(arg2, 220, l_feature_name, 2, eif_attached_type(220));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("parent_is_not_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_opcode_is_control_frame", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(765, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3910, dtype))(Current, ui4_1x, ub1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3920, 0xF80000DC, 0); /* parent */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(3920, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(5);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3923, "add_injected_control_frame", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.opcode */
EIF_TYPED_VALUE F221_5204 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3912,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_fin */
EIF_TYPED_VALUE F221_5205 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3913,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.fragment_count */
EIF_TYPED_VALUE F221_5206 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3914,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.payload_length */
EIF_TYPED_VALUE F221_5207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(3915,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.payload_data */
EIF_TYPED_VALUE F221_5208 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3916,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.uncoded_payload_data */
EIF_TYPED_VALUE F221_5209 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "uncoded_payload_data";
	RTEX;
	struct eif_ex_9 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 9);
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 220, Current, 2, 0, 10141);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10141);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3916, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
		
		ur1 = RTCCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(205, "utf_8_string_8_to_string_32", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {WS_FRAME}.error */
EIF_TYPED_VALUE F221_5210 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3918,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.injected_control_frames */
EIF_TYPED_VALUE F221_5211 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3919,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.parent */
EIF_TYPED_VALUE F221_5212 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3920,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_injected_control */
EIF_TYPED_VALUE F221_5213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_injected_control";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10145);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10145);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3920, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
			ui4_1 = ti4_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(765, dtype))(Current, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {WS_FRAME}.update_fin */
void F221_5214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_fin";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 1, 10146);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10146);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 3913, 0x04000000, 1); /* is_fin */
	
	*(EIF_BOOLEAN *)(Current + RTWA(3913, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WS_FRAME}.add_injected_control_frame */
void F221_5215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_injected_control_frame";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 220, Current, 1, 1, 10147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10147);
	RTCC(arg1, 220, l_feature_name, 1, eif_attached_type(220));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("current_is_not_control", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3929, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("f_is_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("parented_to_current", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3920, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE(RTCEQ(tr1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF8000101, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3919, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF8000101, 0, 0); /* loc1 */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {239,0xFF11,220,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2622, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 3919, 0xF8000101, 0); /* injected_control_frames */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(3919, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTHOOK(8);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1438, "force", loc1))(loc1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("parented_to_current", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3920, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WS_FRAME}.remove_injected_control_frame */
void F221_5216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_injected_control_frame";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 220, Current, 1, 1, 10148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10148);
	RTCC(arg1, 220, l_feature_name, 1, eif_attached_type(220));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("current_is_not_control", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3929, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("f_is_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("parented_to_current", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3920, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE(RTCEQ(tr1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF8000101, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3919, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1407, "prune", loc1))(loc1, ur1x);
		RTHOOK(7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1363, "is_empty", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3919, 0xF8000101, 0); /* injected_control_frames */
			
			*(EIF_REFERENCE *)(Current + RTWA(3919, dtype)) = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {WS_FRAME}.is_binary */
EIF_TYPED_VALUE F221_5217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_binary";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10149);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(761, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_text */
EIF_TYPED_VALUE F221_5218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_text";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10150);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(760, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_continuation */
EIF_TYPED_VALUE F221_5219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_continuation";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10151);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(759, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_connection_close */
EIF_TYPED_VALUE F221_5220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_connection_close";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10152);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(762, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_control */
EIF_TYPED_VALUE F221_5221 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_control";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10153);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10153);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, Dtype(Current)));
	switch (ti4_1) {
		case 8L:
		case 9L:
		case 10L:
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_ping */
EIF_TYPED_VALUE F221_5222 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_ping";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10154);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(763, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_pong */
EIF_TYPED_VALUE F221_5223 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_pong";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10155);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3912, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(764, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_valid */
EIF_TYPED_VALUE F221_5224 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10156);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10156);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3934, Dtype(Current)))(Current)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WS_FRAME}.is_incomplete */
EIF_TYPED_VALUE F221_5225 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3933,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.has_error */
EIF_TYPED_VALUE F221_5226 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10158);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3918, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WS_FRAME}.increment_fragment_count */
void F221_5227 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increment_fragment_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 0, 10159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10159);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3914, 0x10000000, 1); /* fragment_count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(3914, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WS_FRAME}.check_utf_8_validity_on_chop */
EIF_TYPED_VALUE F221_5228 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {WS_FRAME}.append_payload_data_chop */
void F221_5229 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_payload_data_chop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 220, Current, 2, 3, 10161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10161);
	RTCC(arg1, 220, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg3) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3935, dtype))(Current);
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3916, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3855, "append", loc1))(loc1, ur1x);
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3916, 0xF80000DA, 0); /* payload_data */
		
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(3916, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3915, 0x3C000000, 1); /* payload_length */
	
	tu8_2 = (EIF_NATURAL_64) arg2;
	(*(EIF_NATURAL_64 *)(Current + RTWA(3915, dtype))) += tu8_2;
	RTHOOK(7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3926, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3913, dtype));
		if ((EIF_BOOLEAN) (tb1 && arg3)) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3916, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(10);
				ur1 = RTCCL(loc2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3941, dtype))(Current, ur1x)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					tr1 = RTMS_EX_H("The text message is not a valid UTF-8 text!",43,2097175585);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3938, dtype))(Current, ui4_1x, ur1x);
				}
			}
		} else {
			RTHOOK(12);
			if (arg3) {
				RTHOOK(13);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3940, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(14);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					tr1 = RTMS_EX_H("This is not a valid UTF-8 stream!",33,959641633);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3938, dtype))(Current, ui4_1x, ur1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {WS_FRAME}.report_error */
void F221_5230 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "report_error";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 220, Current, 0, 2, 10162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10162);
	RTCC(arg2, 220, l_feature_name, 2, eif_attached_type(214));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3934, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3918, 0xF8000003, 0); /* error */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3918, dtype, Dftype(Current))));
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(53, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3918, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_error", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3934, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_not_valid", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3932, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.last_utf_8_stream_validation_position */
EIF_TYPED_VALUE F221_5231 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3939,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_valid_text_payload_stream */
EIF_TYPED_VALUE F221_5232 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_text_payload_stream";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 220, Current, 1, 0, 10164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10164);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_text_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3926, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3916, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		ur1 = RTCCL(loc1);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3913, dtype));
		ub1 = (EIF_BOOLEAN) !tb1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3942, dtype))(Current, ur1x, ub1x)).it_b);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {WS_FRAME}.is_valid_utf_8_string */
EIF_TYPED_VALUE F221_5233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_utf_8_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
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
	
	RTEAA(l_feature_name, 220, Current, 0, 1, 10165);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(220, Current, 10165);
	RTCC(arg1, 220, l_feature_name, 1, eif_attached_type(214));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	ub1 = (EIF_BOOLEAN) 0;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3942, Dtype(Current)))(Current, ur1x, ub1x)).it_b);
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
#undef ub1
#undef arg1
}

/* {WS_FRAME}.is_valid_utf_8 */
EIF_TYPED_VALUE F221_5234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_valid_utf_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 220, Current, 8, 2, 10166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(220, Current, 10166);
	RTCC(arg1, 220, l_feature_name, 1, eif_attached_type(214));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_text_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3926, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(3939, dtype));
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
		RTHOOK(9);
		RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
		
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
			RTHOOK(11);
			RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_NATURAL_32) loc3;
		} else {
			RTHOOK(12);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 193L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				RTHOOK(13);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(14);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(loc3,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					RTHOOK(15);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1++;
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						RTHOOK(17);
						RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
						
						ui4_1 = loc1;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
						loc4 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(18);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
						uu4_1 = tu4_1;
						tu4_1 = eif_bit_and(loc4,uu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
							RTHOOK(19);
							RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
							
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc3,uu4_1);
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc4,uu4_1);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_or((tu4_2),uu4_1);
							loc7 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(20);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
								tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
							}
							Result = (EIF_BOOLEAN) tb1;
						} else {
							RTHOOK(21);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					} else {
						RTHOOK(22);
						RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
						
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				} else {
					RTHOOK(23);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc3,uu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(24);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1 += ((EIF_INTEGER_32) 2L);
						RTHOOK(25);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							RTHOOK(26);
							RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
							
							ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc4 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(27);
							RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
							
							ui4_1 = loc1;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc5 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(28);
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc4,uu4_1);
							tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc5,uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
								tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
							}
							if (tb1) {
								RTHOOK(29);
								RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
								
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc3,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or((tu4_2),uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(loc5,uu4_1);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_or(tu4_1,uu4_1);
								loc7 = (EIF_NATURAL_32) tu4_2;
								RTHOOK(30);
								tb1 = '\0';
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2048L);
								if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
									tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
								}
								if (tb1) {
									RTHOOK(31);
									tb1 = '\0';
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
									if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
										tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
									}
									if (tb1) {
										RTHOOK(32);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									}
								} else {
									RTHOOK(33);
									RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
									
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
							} else {
								RTHOOK(34);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							}
						} else {
							RTHOOK(35);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= loc2)) {
								RTHOOK(36);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(tu4_1,uu4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 == tu4_1);
							}
							RTHOOK(37);
							RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
							
							loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						RTHOOK(38);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 248L);
						uu4_1 = tu4_1;
						tu4_1 = eif_bit_and(loc3,uu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
						if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
							RTHOOK(39);
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 245L);
							if ((EIF_BOOLEAN) (tu4_1 <= loc3)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
								tb1 = (EIF_BOOLEAN) (loc3 <= tu4_1);
							}
							if (tb1) {
								RTHOOK(40);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							} else {
								RTHOOK(41);
								RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
								
								loc1 += ((EIF_INTEGER_32) 3L);
								RTHOOK(42);
								if ((EIF_BOOLEAN) (loc1 <= loc2)) {
									RTHOOK(43);
									RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
									
									ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L));
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc4 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(44);
									RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
									
									ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc5 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(45);
									RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
									
									ui4_1 = loc1;
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc6 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(46);
									tb1 = '\0';
									tb2 = '\0';
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
									uu4_1 = tu4_1;
									tu4_1 = eif_bit_and(loc4,uu4_1);
									tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
									if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc5,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
									}
									if (tb2) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc6,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
									}
									if (tb1) {
										RTHOOK(47);
										RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
										
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc3,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 18L);
										tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc4,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 12L);
										tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
										uu4_1 = tu4_3;
										tu4_1 = eif_bit_or((tu4_2),uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_2;
										tu4_2 = eif_bit_and(loc5,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 6L);
										tu4_3 = eif_bit_shift_left((tu4_2),ui4_1);
										uu4_1 = tu4_3;
										tu4_2 = eif_bit_or(tu4_1,uu4_1);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc6,uu4_1);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_or(tu4_2,uu4_1);
										loc7 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(48);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										tb1 = '\0';
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L);
										if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1114111L);
											tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
										}
										Result = (EIF_BOOLEAN) tb1;
									} else {
										RTHOOK(49);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									}
								} else {
									RTHOOK(50);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)) <= loc2)) {
										RTHOOK(51);
										RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
										
										ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L));
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
										loc4 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(52);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc4,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
										RTHOOK(53);
										if (Result) {
											RTHOOK(54);
											tb1 = '\0';
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 244L);
											if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
												tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 144L);
												tb1 = (EIF_BOOLEAN) (loc4 >= tu4_1);
											}
											if (tb1) {
												RTHOOK(55);
												RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
												
												Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											} else {
												RTHOOK(56);
												if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= loc2)) {
													RTHOOK(57);
													RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
													
													ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
													tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
													tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
													uu4_1 = tu4_2;
													tu4_2 = eif_bit_and(tu4_1,uu4_1);
													tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
													Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 == tu4_1);
												}
											}
										}
									}
									RTHOOK(58);
									RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
									
									loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								}
							}
						} else {
							RTHOOK(59);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					}
				}
			}
		}
		RTHOOK(60);
		if (Result) {
			RTHOOK(61);
			if (loc8) {
				RTHOOK(62);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) arg2;
			} else {
				RTHOOK(63);
				if (arg2) {
					RTHOOK(64);
					RTDBGAA(Current, dtype, 3939, 0x10000000, 1); /* last_utf_8_stream_validation_position */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(3939, dtype)) = (EIF_INTEGER_32) loc1;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(65);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

void EIF_Minit221 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
