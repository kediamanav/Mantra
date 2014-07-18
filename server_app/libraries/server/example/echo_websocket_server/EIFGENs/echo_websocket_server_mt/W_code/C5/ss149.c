/*
 * Code for class SSL_NETWORK_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F149_2331(EIF_REFERENCE);
extern void F149_2332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F149_2333(EIF_REFERENCE);
extern void EIF_Minit149(void);

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

/* {SSL_NETWORK_SOCKET}.connect */
void F149_2331 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 148, Current, 2, 0, 2795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(148, Current, 2795);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1864, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_peer_address", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1940, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1932, 147))(Current);
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1995, dtype));
	if (tb1) {
		RTHOOK(5);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(151, 8))(Current)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
			
			tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(778, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(152, 8))(Current)).it_n4);
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				RTHOOK(8);
				RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
				
				tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(779, Dtype(tr1)))(tr1);
				RTNHOOK(8,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(9);
				tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(153, 8))(Current)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					RTHOOK(10);
					RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
					
					tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(780, Dtype(tr1)))(tr1);
					RTNHOOK(10,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(11);
					tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(154, 8))(Current)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(12);
						RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
						
						tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(781, Dtype(tr1)))(tr1);
						RTNHOOK(12,1);
						loc1 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(13);
						tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(752, dtype));
						tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(156, 8))(Current)).it_n4);
						if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
							RTHOOK(14);
							RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
							
							tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(782, Dtype(tr1)))(tr1);
							RTNHOOK(14,1);
							loc1 = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(15);
							RTDBGAL(Current, 1, 0xF8000030, 0, 0); /* loc1 */
							
							tr1 = RTLNSMART(eif_non_attached_type(RTWCT(2019, dtype, Dftype(Current))));
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(783, Dtype(tr1)))(tr1);
							RTNHOOK(15,1);
							loc1 = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
				}
			}
		}
		RTHOOK(16);
		RTDBGAA(Current, dtype, 2019, 0xF8000030, 0); /* context */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(2019, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(790, "create_ssl", loc1))(loc1);
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(794, "last_ssl", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2006, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(762, "set_fd", loc2))(loc2, ui4_1x);
			RTHOOK(20);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(760, "connect", loc2))(loc2);
			RTHOOK(21);
			tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(766, "connected", loc2));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1935, dtype))(Current);
			}
		} else {
			RTHOOK(23);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1935, dtype))(Current);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
}

/* {SSL_NETWORK_SOCKET}.shutdown */
void F149_2332 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "shutdown";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 148, Current, 2, 0, 2796);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(148, Current, 2796);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2019, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(794, "last_ssl", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(763, "shutdown", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {SSL_NETWORK_SOCKET}.context */
EIF_TYPED_VALUE F149_2333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2019,Dtype(Current)));
	return r;
}


void EIF_Minit149 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
