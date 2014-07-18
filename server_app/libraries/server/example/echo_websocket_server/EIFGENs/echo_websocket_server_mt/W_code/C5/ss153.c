/*
 * Code for class SSL_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F153_2382(EIF_REFERENCE);
extern void F153_2383(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F153_2384(EIF_REFERENCE);
extern void EIF_Minit153(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SSL_STREAM_SOCKET}.accepted */
EIF_TYPED_VALUE F153_2382 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2021,Dtype(Current)));
	return r;
}


/* {SSL_STREAM_SOCKET}.initialize_server_ssl */
void F153_2383 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "initialize_server_ssl";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 152, Current, 2, 2, 2845);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(152, Current, 2845);
	if (arg1) {
		RTCC(arg1, 152, l_feature_name, 1, 230);
	}
	if (arg2) {
		RTCC(arg2, 152, l_feature_name, 2, 230);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(151, 8))(Current)).it_n4);
	if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(784, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(152, 8))(Current)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			RTHOOK(4);
			RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
			
			tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(785, Dtype(tr1)))(tr1);
			RTNHOOK(4,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(5);
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(153, 8))(Current)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				RTHOOK(6);
				RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
				
				tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(786, Dtype(tr1)))(tr1);
				RTNHOOK(6,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(7);
				tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(154, 8))(Current)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					RTHOOK(8);
					RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
					
					tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(787, Dtype(tr1)))(tr1);
					RTNHOOK(8,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(9);
					tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(156, 8))(Current)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(10);
						RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
						
						tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(789, Dtype(tr1)))(tr1);
						RTNHOOK(10,1);
						loc1 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(11);
						RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
						
						tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2062, dtype, Dftype(Current))));
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(788, Dtype(tr1)))(tr1);
						RTNHOOK(11,1);
						loc1 = (EIF_REFERENCE) RTCCL(tr1);
					}
				}
			}
		}
	}
	RTHOOK(12);
	RTDBGAA(Current, dtype, 2062, 0xF8000030, 0); /* context */
	
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(2062, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	RTHOOK(13);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(14);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(792, "use_certificate_file", loc1))(loc1, ur1x);
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(16);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(793, "use_private_key_file", loc1))(loc1, ur1x);
	}
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(790, "create_ssl", loc1))(loc1);
	RTHOOK(18);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(794, "last_ssl", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(19);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1846, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(762, "set_fd", loc2))(loc2, ui4_1x);
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(759, "accept", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {SSL_STREAM_SOCKET}.context */
EIF_TYPED_VALUE F153_2384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2062,Dtype(Current)));
	return r;
}


void EIF_Minit153 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
