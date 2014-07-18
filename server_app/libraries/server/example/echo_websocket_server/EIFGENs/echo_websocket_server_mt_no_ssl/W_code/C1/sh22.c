/*
 * Code for class SHA1
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F22_500(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_501(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_502(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_503(EIF_REFERENCE);
extern void F22_504(EIF_REFERENCE);
extern void F22_505(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_506(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_507(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_508(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_509(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_510(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_511(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_512(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_513(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_514(EIF_REFERENCE);
extern void F22_515(EIF_REFERENCE);
extern void F22_516(EIF_REFERENCE);
extern void F22_517(EIF_REFERENCE);
extern void F22_518(EIF_REFERENCE);
extern void F22_519(EIF_REFERENCE);
extern void F22_520(EIF_REFERENCE);
extern void F22_521(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_522(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_523(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_524(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_525(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_526(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_527(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_528(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_529(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_530(EIF_REFERENCE);
extern void EIF_Minit22(void);

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

/* {SHA1}.make */
void F22_500 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 572);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 504, 0xF80001F4, 0); /* schedule */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 80L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(eif_non_attached_type(RTWCT(504, dtype, Dftype(Current))),0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2474, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(504, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 502, 0xF8000216, 0); /* buffer */
	
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_1 = tu1_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(488, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(eif_non_attached_type(RTWCT(502, dtype, Dftype(Current))),0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2474, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(502, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(489, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest */
EIF_TYPED_VALUE F22_501 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "digest";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT64, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	
	RTEAA(l_feature_name, 21, Current, 7, 0, 573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 573);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x3C000000, 1, 0); /* loc2 */
	
	loc2 = *(EIF_NATURAL_64 *)(Current + RTWA(495, dtype));
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
	
	loc3 = *(EIF_NATURAL_32 *)(Current + RTWA(516, dtype));
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
	
	loc4 = *(EIF_NATURAL_32 *)(Current + RTWA(517, dtype));
	RTHOOK(5);
	RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
	
	loc5 = *(EIF_NATURAL_32 *)(Current + RTWA(518, dtype));
	RTHOOK(6);
	RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
	
	loc6 = *(EIF_NATURAL_32 *)(Current + RTWA(519, dtype));
	RTHOOK(7);
	RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
	
	loc7 = *(EIF_NATURAL_32 *)(Current + RTWA(520, dtype));
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(498, dtype))(Current);
	RTHOOK(9);
	RTDBGAL(Current, 0, 0xF8000216, 0,0); /* Result */
	
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_1 = tu1_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(487, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	{
		static EIF_TYPE_INDEX typarr0[] = {534,187,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2474, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(9,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(516, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(475, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(11);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(517, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(475, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(12);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(518, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(475, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(13);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(519, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(475, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(14);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(520, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(475, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 503, 0x10000000, 1); /* buffer_offset */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(503, dtype)) = (EIF_INTEGER_32) loc1;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 495, 0x3C000000, 1); /* byte_count */
	
	*(EIF_NATURAL_64 *)(Current + RTWA(495, dtype)) = (EIF_NATURAL_64) loc2;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 516, 0x38000000, 1); /* h1 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(516, dtype)) = (EIF_NATURAL_32) loc3;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 517, 0x38000000, 1); /* h2 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(517, dtype)) = (EIF_NATURAL_32) loc4;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 518, 0x38000000, 1); /* h3 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(518, dtype)) = (EIF_NATURAL_32) loc5;
	RTHOOK(20);
	RTDBGAA(Current, dtype, 519, 0x38000000, 1); /* h4 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(519, dtype)) = (EIF_NATURAL_32) loc6;
	RTHOOK(21);
	RTDBGAA(Current, dtype, 520, 0x38000000, 1); /* h5 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(520, dtype)) = (EIF_NATURAL_32) loc7;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest_count */
EIF_TYPED_VALUE F22_502 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {SHA1}.block_size */
EIF_TYPED_VALUE F22_503 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {SHA1}.reset */
void F22_504 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 576);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 495, 0x3C000000, 1); /* byte_count */
	
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + RTWA(495, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 503, 0x10000000, 1); /* buffer_offset */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(503, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 516, 0x38000000, 1); /* h1 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1732584193L);
	*(EIF_NATURAL_32 *)(Current + RTWA(516, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 517, 0x38000000, 1); /* h2 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4023233417));
	*(EIF_NATURAL_32 *)(Current + RTWA(517, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 518, 0x38000000, 1); /* h3 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2562383102));
	*(EIF_NATURAL_32 *)(Current + RTWA(518, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 519, 0x38000000, 1); /* h4 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 271733878L);
	*(EIF_NATURAL_32 *)(Current + RTWA(519, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 520, 0x38000000, 1); /* h5 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3285377520));
	*(EIF_NATURAL_32 *)(Current + RTWA(520, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHA1}.update_from_byte */
void F22_505 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_from_byte";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 1, 577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 577);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000216, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(502, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	uu1_1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 503, 0x10000000, 1); /* buffer_offset */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(503, dtype)))++;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 495, 0x3C000000, 1); /* byte_count */
	
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_64 *)(Current + RTWA(495, dtype))) += tu8_2;
	RTHOOK(5);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2483, "upper", loc1))(loc1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_2 > ti4_3)) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(510, dtype))(Current);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 503, 0x10000000, 1); /* buffer_offset */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(503, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("buffer_offset_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
		RTCO(tr1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(488, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) % ti4_3))) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.schedule_buffer */
void F22_506 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "schedule_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 21, Current, 5, 0, 578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 578);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("buffer_offset_reset", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(503, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF8000216, 0, 0); /* loc4 */
	
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(502, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0xF80001F4, 0, 0); /* loc5 */
	
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2482, "lower", loc5))(loc5)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2482, "lower", loc4))(loc4)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2483, "upper", loc4))(loc4)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(8);
		ur1 = loc4;
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(473, dtype))(Current, ur1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", loc5))(loc5, uu4_1x, ui4_1x);
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 += ((EIF_INTEGER_32) 4L);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.buffer */
EIF_TYPED_VALUE F22_507 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(502,Dtype(Current)));
	return r;
}


/* {SHA1}.buffer_offset */
EIF_TYPED_VALUE F22_508 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(503,Dtype(Current)));
	return r;
}


/* {SHA1}.schedule */
EIF_TYPED_VALUE F22_509 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(504,Dtype(Current)));
	return r;
}


/* {SHA1}.a */
EIF_TYPED_VALUE F22_510 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(505,Dtype(Current)));
	return r;
}


/* {SHA1}.b */
EIF_TYPED_VALUE F22_511 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(506,Dtype(Current)));
	return r;
}


/* {SHA1}.c */
EIF_TYPED_VALUE F22_512 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(507,Dtype(Current)));
	return r;
}


/* {SHA1}.d */
EIF_TYPED_VALUE F22_513 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(508,Dtype(Current)));
	return r;
}


/* {SHA1}.e */
EIF_TYPED_VALUE F22_514 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(509,Dtype(Current)));
	return r;
}


/* {SHA1}.process_block */
void F22_515 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_block";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 587);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 587);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(501, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(515, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(516, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(517, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(518, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(519, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(520, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(514, dtype))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(513, dtype))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(512, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(511, dtype))(Current);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 516, 0x38000000, 1); /* h1 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(516, dtype))) += tu4_2;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 517, 0x38000000, 1); /* h2 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(517, dtype))) += tu4_2;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 518, 0x38000000, 1); /* h3 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(518, dtype))) += tu4_2;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 519, 0x38000000, 1); /* h4 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(519, dtype))) += tu4_2;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 520, 0x38000000, 1); /* h5 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(520, dtype))) += tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHA1}.do_round_4 */
void F22_516 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_4";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 0, 588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 588);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(524, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(524, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(524, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(524, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(524, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_3 */
void F22_517 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_3";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 0, 589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 589);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(523, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(523, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(523, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(523, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(523, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_2 */
void F22_518 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_2";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 0, 590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 590);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_1 */
void F22_519 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 0, 591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 591);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(476, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(521, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(476, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(521, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(476, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(521, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 509, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(509, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 506, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(476, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(521, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(506, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 508, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(508, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 505, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(505, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(506, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(508, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(509, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(476, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(521, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(505, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 507, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(507, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(507, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.expand_word_block */
void F22_520 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expand_word_block";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 0, 592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 592);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 80L))) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 8L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		RTNHOOK(3,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 14L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_xor(tu4_2,uu4_1);
		RTNHOOK(3,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 16L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		loc2 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(504, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = loc2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(470, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2486, "put", tr1))(tr1, uu4_1x, ui4_1x);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.process_length */
void F22_521 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_length";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 593);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 56L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 48L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 40L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTHOOK(8);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(490, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.h1 */
EIF_TYPED_VALUE F22_522 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(516,Dtype(Current)));
	return r;
}


/* {SHA1}.h2 */
EIF_TYPED_VALUE F22_523 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(517,Dtype(Current)));
	return r;
}


/* {SHA1}.h3 */
EIF_TYPED_VALUE F22_524 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(518,Dtype(Current)));
	return r;
}


/* {SHA1}.h4 */
EIF_TYPED_VALUE F22_525 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(519,Dtype(Current)));
	return r;
}


/* {SHA1}.h5 */
EIF_TYPED_VALUE F22_526 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(520,Dtype(Current)));
	return r;
}


/* {SHA1}.k1 */
EIF_TYPED_VALUE F22_527 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1518500249U);
	return r;
}

/* {SHA1}.k2 */
EIF_TYPED_VALUE F22_528 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1859775393U);
	return r;
}

/* {SHA1}.k3 */
EIF_TYPED_VALUE F22_529 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2400959708U);
	return r;
}

/* {SHA1}.k4 */
EIF_TYPED_VALUE F22_530 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 3395469782U);
	return r;
}

void EIF_Minit22 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
