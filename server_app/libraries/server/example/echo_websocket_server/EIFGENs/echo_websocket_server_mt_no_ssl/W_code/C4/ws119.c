/*
 * Code for class WS_REQUEST_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F119_1668(EIF_REFERENCE);
extern void F119_1669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F119_1670(EIF_REFERENCE);
extern void F119_1671(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F119_1673(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1674(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F119_1675(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1676(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1677(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F119_1678(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F119_1679(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1681(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F119_1682(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit119(void);

#ifdef __cplusplus
}
#endif

#include "eif_plug.h"
#include "eif_misc.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WS_REQUEST_HANDLER}.reset */
void F119_1668 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 118, Current, 0, 0, 2215);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2215);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1443, 117))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1465, 0x04000000, 1); /* is_websocket */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1465, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1444, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1444, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WS_REQUEST_HANDLER}.release */
void F119_1669 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 118, Current, 0, 0, 2216);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2216);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1456, 117))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1445, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1082, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {WS_REQUEST_HANDLER}.is_websocket */
EIF_TYPED_VALUE F119_1670 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1465,Dtype(Current)));
	return r;
}


/* {WS_REQUEST_HANDLER}.process_request */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F119_1671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_request";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	
	RTXI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLXL;
	
	RTEAA(l_feature_name, 118, Current, 0, 1, 2218);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2218);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(6));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("no_error", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1448, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_uri_attached", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1450, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_method_attached", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_header_map_attached", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("a_header_text_attached", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("a_socket_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(86, "set_blocking", arg1))(arg1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 1465, 0x04000000, 1); /* is_websocket */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1465, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(9);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, ur1x);
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1465, dtype));
	if (tb1) {
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1075, dtype))(Current, ur1x);
		RTHOOK(12);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, ur1x);
	} else {
		RTHOOK(13);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1466, dtype))(Current, ur1x);
	}
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1456, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(5);
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1456, dtype))(Current);
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(3);
#undef up1
#undef ur1
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WS_REQUEST_HANDLER}.process_ws_request */
void F119_1673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_ws_request";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	struct eif_ex_9 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc4.overhead, 0, OVERHEAD + 0);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, 9);
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,ur2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,loc7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 118, Current, 7, 1, 2219);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2219);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(6));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_websocket", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1465, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1448, dtype));
		if ((EIF_BOOLEAN) (tb1 || loc1)) break;
		if (
			WDBG(118,"dbglog")
		) {
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(".LOOP WS_REQUEST_HANDLER.process_request {",42,665967483);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(73, "descriptor", arg1))(arg1)).it_i4);
			RTNHOOK(3,1);
			tr1 = c_outi(ti4_1);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("}",1,125);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1440, dtype))(Current, ur1x);
		}
		RTHOOK(4);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(88, "ready_for_reading", arg1))(arg1)).it_b);
		if (tb2) {
			RTHOOK(5);
			RTDBGAL(Current, 2, 0xF80000DC, 0, 0); /* loc2 */
			
			ur1 = RTCCL(arg1);
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(6);
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", loc2))(loc2)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3919, "injected_control_frames", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc5 = RTCCL(tr1);
				if (EIF_TEST(loc5)) {
					RTHOOK(8);
					RTDBGAL(Current, 2, 0xF80000E4, 0, 0); /* loc6 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2390, "new_cursor", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
					for (;;) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1563, "after", loc6))(loc6)).it_b);
						if (tb2) break;
						RTHOOK(9);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(9,1);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3928, "is_connection_close", tr1))(tr1)).it_b);
						if (tb3) {
							RTHOOK(10);
							ur1 = RTCCL(arg1);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(10,1);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3916, "payload_data", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur2 = RTCCL(tr2);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(10,2);
							ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3912, "opcode", tr1));
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
							RTHOOK(11);
							RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
							
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						} else {
							RTHOOK(12);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(12,1);
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3930, "is_ping", tr1))(tr1)).it_b);
							if (tb3) {
								RTHOOK(13);
								ur1 = RTCCL(arg1);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(13,1);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3916, "payload_data", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur2 = RTCCL(tr2);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(13,2);
								ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3912, "opcode", tr1));
								ui4_1 = ti4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
							} else {
								RTHOOK(14);
								ur1 = RTCCL(arg1);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(14,1);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3916, "payload_data", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur2 = RTCCL(tr2);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1562, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(14,2);
								ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3912, "opcode", tr1));
								ui4_1 = ti4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
							}
						}
						RTHOOK(15);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1564, "forth", loc6))(loc6);
					}
				}
				RTHOOK(16);
				RTDBGAL(Current, 3, 0xF80000D6, 0, 0); /* loc3 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3916, "payload_data", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc3 == NULL)) {
					RTHOOK(18);
					RTDBGAL(Current, 3, 0xF80000D6, 0, 0); /* loc3 */
					
					loc3 = RTMS_EX_H("",0,0);
				}
				if (
					WDBG(118,"ws")
				) {
					RTHOOK(19);
					tr1 = RTMS_EX_H("\012Execute: \012",11,1283292170);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(20);
					tr1 = RTMS_EX_H(" [opcode: ",10,1368218144);
					ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3912, "opcode", loc2));
					ui4_1 = ti4_1;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(766, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTMS_EX_H("]\012",2,23818);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(21);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3926, "is_text", loc2))(loc2)).it_b);
					if (tb3) {
						RTHOOK(22);
						tr1 = RTMS_EX_H(" [client message: \"",19,351388962);
						ur1 = RTCCL(loc3);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("\"]\012",3,2252042);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					} else {
						RTHOOK(23);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3925, "is_binary", loc2))(loc2)).it_b);
						if (tb3) {
							RTHOOK(24);
							tr1 = RTMS_EX_H(" [client binary message length: \"",33,350828066);
							ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(3756, "count", loc3));
							RTNHOOK(24,1);
							tr2 = c_outi(ti4_1);
							ur1 = RTCCL(tr2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTMS_EX_H("\"]\012",3,2252042);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
						}
					}
					RTHOOK(25);
					tr1 = RTMS_EX_H(" [is_control: ",14,1683065888);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", loc2))(loc2)).it_b);
					RTNHOOK(25,1);
					tr2 = (tb3 ? makestr ("True", 4) : makestr ("False", 5));
					ur1 = RTCCL(tr2);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTMS_EX_H("]\012",2,23818);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(26);
					tr1 = RTMS_EX_H(" [is_binary: ",13,325601824);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3925, "is_binary", loc2))(loc2)).it_b);
					RTNHOOK(26,1);
					tr2 = (tb3 ? makestr ("True", 4) : makestr ("False", 5));
					ur1 = RTCCL(tr2);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTMS_EX_H("]\012",2,23818);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(27);
					tr1 = RTMS_EX_H(" [is_text: ",11,338059808);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3926, "is_text", loc2))(loc2)).it_b);
					RTNHOOK(27,1);
					tr2 = (tb3 ? makestr ("True", 4) : makestr ("False", 5));
					ur1 = RTCCL(tr2);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTMS_EX_H("]\012",2,23818);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
				RTHOOK(28);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3928, "is_connection_close", loc2))(loc2)).it_b);
				if (tb3) {
					RTHOOK(29);
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc3);
					ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3912, "opcode", loc2));
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
					RTHOOK(30);
					RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(31);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3925, "is_binary", loc2))(loc2)).it_b);
					if (tb3) {
						RTHOOK(32);
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc3);
						ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3912, "opcode", loc2));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
					} else {
						RTHOOK(33);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3926, "is_text", loc2))(loc2)).it_b);
						if (tb3) {
							if (RTAL & CK_CHECK) {
								RTHOOK(34);
								RTCT("is_valid_utf_8", EX_CHECK);
								ur1 = RTCCL(loc3);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(182, "is_valid_utf_8_string_8", loc4))(loc4, ur1x)).it_b);
								if (tb3) {
									RTCK;
								} else {
									RTCF;
								}
							}
							RTHOOK(35);
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc3);
							ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3912, "opcode", loc2));
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
						} else {
							RTHOOK(36);
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc3);
							ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3912, "opcode", loc2));
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
						}
					}
				}
			} else {
				if (
					WDBG(118,"ws")
				) {
					RTHOOK(37);
					tr1 = RTMS_EX_H("\012Execute: \012",11,1283292170);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(38);
					tr1 = RTMS_EX_H(" [ERROR: invalid frame]\012",24,984053258);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(39);
					tb3 = '\0';
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3918, "error", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = RTCCL(tr1);
						tb3 = EIF_TEST(loc7);
					}
					if (tb3) {
						RTHOOK(40);
						tr1 = RTMS_EX_H(" [Code: ",8,381552160);
						ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(54, "code", loc7));
						RTNHOOK(40,1);
						tr2 = c_outi(ti4_1);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]\012",2,23818);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
						RTHOOK(41);
						tr1 = RTMS_EX_H(" [Description: ",15,1365574432);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(55, "description", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]\012",2,23818);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					}
				}
				RTHOOK(42);
				ur1 = RTCCL(arg1);
				tr1 = RTMS_EX_H("",0,0);
				ur2 = tr1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(762, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1074, dtype))(Current, ur1x, ur2x, ui4_1x);
				RTHOOK(43);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(44);
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
			if (tb3) {
				RTHOOK(45);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTMS_EX_H(".WAITING WS_REQUEST_HANDLER.process_request {",45,344599675);
				ur1 = tr2;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(73, "descriptor", arg1))(arg1)).it_i4);
				RTNHOOK(45,1);
				tr1 = c_outi(ti4_1);
				ur1 = RTCCL(tr1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTMS_EX_H("}",1,125);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(46);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {WS_REQUEST_HANDLER}.next_frame */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F119_1674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "next_frame";
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 EIF_VOLATILE loc4 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc15 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc16 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_NATURAL_64  EIF_VOLATILE tu8_1;
	EIF_NATURAL_64  EIF_VOLATILE tu8_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	EIF_BOOLEAN  EIF_VOLATILE tb4;
	EIF_CHARACTER_8  EIF_VOLATILE tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	
	RTXI(14);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc14);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,ur2);
	RTLR(10,loc17);
	RTLR(11,loc18);
	RTLR(12,loc19);
	RTLR(13,saved_except);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT64, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_BOOL, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLXL;
	
	RTEAA(l_feature_name, 118, Current, 19, 1, 2206);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2206);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(6));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_socket_in_blocking_mode", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(75, "is_blocking", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc16) {
		if (
			WDBG(118,"ws")
		) {
			RTHOOK(3);
			tr1 = RTMS_EX_H("next_frame:\012",12,1666140682);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
		RTHOOK(4);
		RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
		
		loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc8 || (EIF_BOOLEAN) !loc15)) break;
			RTHOOK(6);
			RTDBGAL(Current, 14, 0xF80000DA, 0, 0); /* loc14 */
			
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1470, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3613, "is_empty", loc14))(loc14)).it_b);
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
				
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				if (
					WDBG(118,"ws")
				) {
					RTHOOK(9);
					tr1 = RTMS_EX_H("[ERROR] incomplete_data!\012",25,898468106);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
			} else {
				RTHOOK(10);
				RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
				
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
				ti4_1 = (EIF_INTEGER_32) (tc1);
				loc11 = (EIF_INTEGER_32) ti4_1;
				if (
					WDBG(118,"ws")
				) {
					RTHOOK(11);
					tr1 = RTMS_EX_H("   fin,rsv(3),opcode(4)=",24,500954941);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(12);
					ui4_1 = loc11;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1474, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(13);
					tr1 = RTMS_EX_H("\012",1,10);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
				RTHOOK(14);
				RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
				
				ui4_1 = ((EIF_INTEGER_32) 128L);
				ti4_1 = eif_bit_and(loc11,ui4_1);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				RTHOOK(15);
				RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
				
				ui4_1 = ((EIF_INTEGER_32) 112L);
				ti4_1 = eif_bit_and(loc11,ui4_1);
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
				RTHOOK(16);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				ui4_1 = ((EIF_INTEGER_32) 15L);
				ti4_1 = eif_bit_and(loc11,ui4_1);
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(17);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(18);
					ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(3912, "opcode", Result));
					if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
						RTHOOK(19);
						RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
						
						tr1 = RTLN(220);
						ui4_1 = loc1;
						ub1 = loc8;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3910, Dtype(tr1)))(tr1, ui4_1x, ub1x);
						RTNHOOK(19,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(20);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("Unexpected injected frame",25,836959589);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
					} else {
						RTHOOK(21);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(759, dtype))(Current)).it_i4);
						if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
							RTHOOK(22);
							ub1 = loc8;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3922, "update_fin", Result))(Result, ub1x);
						} else {
							RTHOOK(23);
							ui4_1 = loc1;
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(765, dtype))(Current, ui4_1x)).it_b);
							if (tb1) {
								RTHOOK(24);
								RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
								
								tr1 = RTLN(220);
								ui4_1 = loc1;
								ur1 = RTCCL(Result);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3911, Dtype(tr1)))(tr1, ui4_1x, ur1x);
								RTNHOOK(24,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(25);
								RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
								
								tr1 = RTLN(220);
								ui4_1 = loc1;
								ub1 = loc8;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3910, Dtype(tr1)))(tr1, ui4_1x, ub1x);
								RTNHOOK(25,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(26);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
								ui4_1 = ti4_1;
								tr1 = RTMS_EX_H("Unexpected frame",16,577179749);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
							}
						}
					}
				} else {
					RTHOOK(27);
					RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
					
					tr1 = RTLN(220);
					ui4_1 = loc1;
					ub1 = loc8;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3910, Dtype(tr1)))(tr1, ui4_1x, ub1x);
					RTNHOOK(27,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(28);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3927, "is_continuation", Result))(Result)).it_b);
					if (tb1) {
						RTHOOK(29);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("There is no message to continue!",32,1953732129);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
					}
				}
				RTHOOK(30);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
				if (tb1) {
					RTHOOK(31);
					tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
					if (tb1) {
						RTHOOK(32);
						tr1 = RTMS_EX_H("+ frame ",8,772171040);
						ui4_1 = loc1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(766, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" (fin=",6,1781407293);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = (loc8 ? makestr ("True", 4) : makestr ("False", 5));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(")",1,41);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
					}
					RTHOOK(33);
					if ((EIF_BOOLEAN) !loc7) {
						RTHOOK(34);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("RSV values MUST be 0 unless an extension is negotiated that defines meanings for non-zero values",96,334031731);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
					}
				} else {
					RTHOOK(35);
					tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
					if (tb1) {
						RTHOOK(36);
						tr1 = RTMS_EX_H("+ INVALID frame ",16,1924702496);
						ui4_1 = loc1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(766, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" (fin=",6,1781407293);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = (loc8 ? makestr ("True", 4) : makestr ("False", 5));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(")",1,41);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
					}
				}
				RTHOOK(37);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
				if (tb1) {
					RTHOOK(38);
					tb1 = '\01';
					tb2 = '\01';
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3926, "is_text", Result))(Result)).it_b);
					if (!tb3) {
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3925, "is_binary", Result))(Result)).it_b);
						tb2 = tb3;
					}
					if (!tb2) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", Result))(Result)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(39);
						RTDBGAL(Current, 14, 0xF80000DA, 0, 0); /* loc14 */
						
						ur1 = RTCCL(arg1);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1470, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTHOOK(40);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3613, "is_empty", loc14))(loc14)).it_b);
						if (tb1) {
							RTHOOK(41);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
							ui4_1 = ti4_1;
							tr1 = RTMS_EX_H("Incomplete data for mask and payload len",40,1456822638);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
						} else {
							RTHOOK(42);
							RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
							
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							loc11 = (EIF_INTEGER_32) ti4_1;
							if (
								WDBG(118,"ws")
							) {
								RTHOOK(43);
								tr1 = RTMS_EX_H("   mask,payload_len(7)=",23,1570231613);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(44);
								ui4_1 = loc11;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1474, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(45);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(45,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
							}
							RTHOOK(46);
							RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
							
							ui4_1 = ((EIF_INTEGER_32) 128L);
							ti4_1 = eif_bit_and(loc11,ui4_1);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
							RTHOOK(47);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							ui4_1 = ((EIF_INTEGER_32) 127L);
							ti4_1 = eif_bit_and(loc11,ui4_1);
							loc2 = (EIF_INTEGER_32) ti4_1;
							if (
								WDBG(118,"ws")
							) {
								RTHOOK(48);
								tr1 = RTMS_EX_H("   payload_len=",15,323625533);
								tr2 = c_outi(loc2);
								ur1 = RTCCL(tr2);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(49);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(49,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
							}
							RTHOOK(50);
							tb1 = '\0';
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3929, "is_control", Result))(Result)).it_b);
							if (tb2) {
								tb1 = (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 125L));
							}
							if (tb1) {
								RTHOOK(51);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
								ui4_1 = ti4_1;
								tr1 = RTMS_EX_H("Control frame MUST have a payload length of 125 bytes or less",61,828906867);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
							} else {
								RTHOOK(52);
								if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 127L))) {
									RTHOOK(53);
									RTDBGAL(Current, 14, 0xF80000DA, 0, 0); /* loc14 */
									
									ur1 = RTCCL(arg1);
									ui4_1 = ((EIF_INTEGER_32) 8L);
									loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1470, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									if (
										WDBG(118,"ws")
									) {
										RTHOOK(54);
										tr1 = RTMS_EX_H("   extended payload length=",27,911882301);
										ur1 = RTCCL(loc14);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1475, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(55);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(55,1);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
									}
									RTHOOK(56);
									ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(3756, "count", loc14));
									if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 8L))) {
										RTHOOK(57);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Incomplete data for 64 bit Extended payload length",50,680332136);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
									} else {
										RTHOOK(58);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 8L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(58,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(59);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 7L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(59,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 8L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(60);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 6L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(60,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 16L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(61);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 5L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(61,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 24L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(62);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 4L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(62,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 32L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(63);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 3L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(63,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 40L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(64);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(64,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 48L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(65);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										ui4_1 = ((EIF_INTEGER_32) 1L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(65,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 56L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc4,uu8_1);
										loc4 = (EIF_NATURAL_64) tu8_1;
									}
								} else {
									RTHOOK(66);
									if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 126L))) {
										RTHOOK(67);
										RTDBGAL(Current, 14, 0xF80000DA, 0, 0); /* loc14 */
										
										ur1 = RTCCL(arg1);
										ui4_1 = ((EIF_INTEGER_32) 2L);
										loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1470, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										if (
											WDBG(118,"ws")
										) {
											RTHOOK(68);
											tr1 = RTMS_EX_H("   extended payload length bits=",32,1012217917);
											ur1 = RTCCL(loc14);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1475, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											RTHOOK(69);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(69,1);
											(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
										}
										RTHOOK(70);
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(3756, "count", loc14));
										if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 2L))) {
											RTHOOK(71);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
											ui4_1 = ti4_1;
											tr1 = RTMS_EX_H("Incomplete data for 16 bit Extended payload length",50,2027008104);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
										} else {
											RTHOOK(72);
											RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
											
											ui4_1 = ((EIF_INTEGER_32) 2L);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
											tu4_1 = (EIF_NATURAL_32) tc1;
											RTNHOOK(72,1);
											tu8_1 = (EIF_NATURAL_64) tu4_1;
											loc4 = (EIF_NATURAL_64) tu8_1;
											RTHOOK(73);
											RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
											
											ui4_1 = ((EIF_INTEGER_32) 1L);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc14))(loc14, ui4_1x)).it_c1);
											tu4_1 = (EIF_NATURAL_32) tc1;
											RTNHOOK(73,1);
											tu8_1 = (EIF_NATURAL_64) tu4_1;
											ui4_1 = ((EIF_INTEGER_32) 8L);
											tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
											uu8_1 = tu8_2;
											tu8_1 = eif_bit_or(loc4,uu8_1);
											loc4 = (EIF_NATURAL_64) tu8_1;
										}
									} else {
										RTHOOK(74);
										RTDBGAL(Current, 4, 0x3C000000, 1, 0); /* loc4 */
										
										tu8_1 = (EIF_NATURAL_64) loc2;
										loc4 = (EIF_NATURAL_64) tu8_1;
									}
								}
							}
							if (
								WDBG(118,"ws")
							) {
								RTHOOK(75);
								tr1 = RTMS_EX_H("   Full payload length=",23,2091989309);
								tr2 = c_outu64(loc4);
								ur1 = RTCCL(tr2);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(76);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(76,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
							}
							RTHOOK(77);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
							if (tb1) {
								RTHOOK(78);
								if (loc9) {
									RTHOOK(79);
									RTDBGAL(Current, 5, 0xF80000D6, 0, 0); /* loc5 */
									
									ur1 = RTCCL(arg1);
									ui4_1 = ((EIF_INTEGER_32) 4L);
									loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1470, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									if (
										WDBG(118,"ws")
									) {
										RTHOOK(80);
										tr1 = RTMS_EX_H("   Masking key bits=",20,488202045);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3652, "as_string_8", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1475, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(81);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(81,1);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(418, "put_new_line", tr1))(tr1);
									}
									RTHOOK(82);
									ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(3756, "count", loc5));
									if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 4L))) {
										if (
											WDBG(118,"ws")
										) {
											RTHOOK(83);
											tr1 = RTMS_EX_H("masking-key read stream -> ",27,1833744160);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(70, "bytes_read", arg1))(arg1)).it_i4);
											RTNHOOK(83,1);
											tr2 = c_outi(ti4_1);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" bits\012",6,1832906506);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										}
										RTHOOK(84);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(771, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Incomplete data for Masking-key",31,862081145);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
										RTHOOK(85);
										RTDBGAL(Current, 5, 0xF80000D6, 0, 0); /* loc5 */
										
										loc5 = (EIF_REFERENCE) NULL;
									}
								} else {
									RTHOOK(86);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
									ui4_1 = ti4_1;
									tr1 = RTMS_EX_H("All frames sent from client to server are masked!",49,1203725089);
									ur1 = tr1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
								}
								RTHOOK(87);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
								if (tb1) {
									RTHOOK(88);
									RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
									
									loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
									RTHOOK(89);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, 169))(Current)).it_i4);
									tu8_1 = (EIF_NATURAL_64) ti4_1;
									if ((EIF_BOOLEAN) (loc4 > tu8_1)) {
										RTHOOK(90);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(773, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Can not handle payload data (len=",33,1567580477);
										tr2 = c_outu64(loc4);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(")",1,41);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
									} else {
										RTHOOK(91);
										RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
										
										ti4_1 = (EIF_INTEGER_32) loc4;
										loc2 = (EIF_INTEGER_32) ti4_1;
									}
									RTHOOK(92);
									RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
									
									loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									RTHOOK(93);
									RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
									
									loc3 = (EIF_INTEGER_32) loc2;
									for (;;) {
										RTHOOK(94);
										tb1 = '\01';
										if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 >= loc2) || (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)))) {
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
											tb1 = (EIF_BOOLEAN) !tb2;
										}
										if (tb1) break;
										RTHOOK(95);
										if ((EIF_BOOLEAN) (loc3 < loc10)) {
											RTHOOK(96);
											RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
											
											loc10 = (EIF_INTEGER_32) loc3;
										}
										RTHOOK(97);
										ui4_1 = loc10;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(69, "read_stream", arg1))(arg1, ui4_1x);
										RTHOOK(98);
										RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
										
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(70, "bytes_read", arg1))(arg1)).it_i4);
										loc13 = (EIF_INTEGER_32) ti4_1;
										if (
											WDBG(118,"ws")
										) {
											RTHOOK(99);
											tr1 = RTMS_EX_H("read chunk size=",16,936176957);
											tr2 = c_outi(loc10);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" fetch_count=",13,29176381);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc12);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" l_len=",7,957941821);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc2);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" -> ",4,539835936);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc13);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H("bytes\012",6,2146410762);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										}
										RTHOOK(100);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(70, "bytes_read", arg1))(arg1)).it_i4);
										if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
											RTHOOK(101);
											RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
											
											loc3 -= loc13;
											RTHOOK(102);
											RTDBGAL(Current, 6, 0xF80000DA, 0, 0); /* loc6 */
											
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(66, "last_string", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc6 = (EIF_REFERENCE) RTCCL(tr1);
											RTHOOK(103);
											if ((EIF_BOOLEAN)(loc5 != NULL)) {
												RTHOOK(104);
												ur1 = RTCCL(loc6);
												ui4_1 = (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
												ur2 = RTCCL(loc5);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1472, dtype))(Current, ur1x, ui4_1x, ur2x);
											} else {
												if (RTAL & CK_CHECK) {
													RTHOOK(105);
													RTCT("client_frame_should_always_be_encoded", EX_CHECK);
														RTCF;
												}
											}
											RTHOOK(106);
											RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
											
											loc12 += loc13;
											RTHOOK(107);
											ur1 = RTCCL(loc6);
											ui4_1 = loc13;
											ub1 = (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3937, "append_payload_data_chop", Result))(Result, ur1x, ui4_1x, ub1x);
										} else {
											RTHOOK(108);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(775, dtype))(Current)).it_i4);
											ui4_1 = ti4_1;
											tr1 = RTMS_EX_H("Issue reading payload data...",29,1343256878);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
										}
									}
									RTHOOK(109);
									tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
									if (tb2) {
										RTHOOK(110);
										tr1 = RTMS_EX_H("  Received ",11,1261468448);
										tr2 = c_outi(loc12);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(" out of ",8,816120864);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr2 = c_outi(loc2);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(" bytes <===============",23,1291323965);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
									}
									if (
										WDBG(118,"ws")
									) {
										RTHOOK(111);
										tr1 = RTMS_EX_H(" -> ",4,539835936);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(112);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3916, "payload_data", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc17 = RTCCL(tr1);
										if (EIF_TEST(loc17)) {
											RTHOOK(113);
											RTDBGAL(Current, 14, 0xF80000DA, 0, 0); /* loc14 */
											
											ui4_1 = loc12;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3678, "tail", loc17))(loc17, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc14 = (EIF_REFERENCE) RTCCL(tr1);
											RTHOOK(114);
											ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(3756, "count", loc14));
											if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 50L))) {
												RTHOOK(115);
												ui4_1 = ((EIF_INTEGER_32) 50L);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3677, "head", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												tr2 = RTMS_EX_H("..",2,11822);
												ur1 = tr2;
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1476, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											} else {
												RTHOOK(116);
												ur1 = RTCCL(loc14);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1476, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											}
											RTHOOK(117);
											tr1 = RTMS_EX_H("\012",1,10);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											RTHOOK(118);
											tb2 = '\0';
											tb3 = '\0';
											tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3926, "is_text", Result))(Result)).it_b);
											if (tb4) {
												tb4 = *(EIF_BOOLEAN *)(Result + RTVA(3913, "is_fin", Result));
												tb3 = tb4;
											}
											if (tb3) {
												ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(3914, "fragment_count", Result));
												tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
											}
											if (tb2) {
												RTHOOK(119);
												tr1 = RTMS_EX_H(" -> ",4,539835936);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												RTHOOK(120);
												ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(3756, "count", loc14));
												if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 50L))) {
													RTHOOK(121);
													ui4_1 = ((EIF_INTEGER_32) 50L);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3677, "head", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													tr2 = RTMS_EX_H("..",2,11822);
													ur1 = tr2;
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr2);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												} else {
													RTHOOK(122);
													ur1 = RTCCL(loc14);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												}
												RTHOOK(123);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			RTHOOK(124);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(125);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3918, "error", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc18 = RTCCL(tr1);
				if (EIF_TEST(loc18)) {
					RTHOOK(126);
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
					if (tb2) {
						RTHOOK(127);
						tr1 = RTMS_EX_H("  !Invalid frame: ",18,1454169376);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(56, "string", loc18))(loc18)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
					}
				}
				RTHOOK(128);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3921, "is_injected_control", Result))(Result)).it_b);
				if (tb2) {
					RTHOOK(129);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3920, "parent", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc19 = RTCCL(tr1);
					if (EIF_TEST(loc19)) {
						RTHOOK(130);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
						if ((EIF_BOOLEAN) !tb2) {
							RTHOOK(131);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(769, dtype))(Current)).it_i4);
							ui4_1 = ti4_1;
							tr1 = RTMS_EX_H("Invalid injected frame",22,278324581);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", loc19))(loc19, ui4_1x, ur1x);
						}
						RTHOOK(132);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3928, "is_connection_close", Result))(Result)).it_b);
						if (tb2) {
							RTHOOK(133);
							ub1 = (EIF_BOOLEAN) 1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3922, "update_fin", loc19))(loc19, ub1x);
							RTHOOK(134);
							RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
							
							tb2 = *(EIF_BOOLEAN *)(Result + RTVA(3913, "is_fin", Result));
							loc8 = (EIF_BOOLEAN) tb2;
						} else {
							RTHOOK(135);
							RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) RTCCL(loc19);
							RTHOOK(136);
							RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
							
							tb2 = *(EIF_BOOLEAN *)(loc19 + RTVA(3913, "is_fin", loc19));
							loc8 = (EIF_BOOLEAN) tb2;
							if (RTAL & CK_CHECK) {
								RTHOOK(137);
								RTCT("inside_fragmented_frame", EX_CHECK);
								if ((EIF_BOOLEAN) !loc8) {
									RTCK;
								} else {
									RTCF;
								}
							}
						}
					} else {
						if (RTAL & CK_CHECK) {
							RTHOOK(138);
							RTCT("has_parent", EX_CHECK);
								RTCF;
						}
						RTHOOK(139);
						RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
						
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(140);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3932, "is_valid", Result))(Result)).it_b);
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(141);
					RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
					
					loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(142);
				RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
				
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(14);
	RTHOOK(143);
	RTDBGAL(Current, 16, 0x04000000, 1, 0); /* loc16 */
	
	loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(144);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(145);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(775, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = RTMS_EX_H("Internal error",14,2047764850);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3938, "report_error", Result))(Result, ui4_1x, ur1x);
	}
	RTHOOK(146);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(147);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(22);
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef uu8_1
#undef ui4_1
#undef ub1
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WS_REQUEST_HANDLER}.open_ws_handshake */
void F119_1675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "open_ws_handshake";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 118, Current, 7, 1, 2207);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2207);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(6));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
	if (tb1) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("\012Receive <====================",30,690522941);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
	}
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1465, 0x04000000, 1); /* is_websocket */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1465, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = RTMS_EX_H("GET",3,4670804);
	ur1 = tr2;
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3742, "same_string", tr1))(tr1, ur1x)).it_b);
	if (tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,2);
		tr2 = RTMS_EX_H("Upgrade",7,1972281957);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1412, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc4 = RTCCL(tr2);
		tb2 = EIF_TEST(loc4);
	}
	if (tb2) {
		tr1 = RTMS_EX_H("websocket",9,280170612);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3740, "is_case_insensitive_equal", loc4))(loc4, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 1465, 0x04000000, 1); /* is_websocket */
		
		*(EIF_BOOLEAN *)(Current + RTWA(1465, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(755, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1412, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc5 = RTCCL(tr2);
		if (EIF_TEST(loc5)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,2);
			tr2 = RTMS_EX_H("Connection",10,2015825262);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1412, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc6 = RTCCL(tr2);
			tb5 = EIF_TEST(loc6);
		}
		if (tb5) {
			tr1 = RTMS_EX_H("Upgrade",7,1972281957);
			ur1 = tr1;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3640, "has_substring", loc6))(loc6, ur1x)).it_b);
			tb4 = tb5;
		}
		if (tb4) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,3);
			tr2 = RTMS_EX_H("Sec-WebSocket-Version",21,818226542);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1412, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc7 = RTCCL(tr2);
			tb3 = EIF_TEST(loc7);
		}
		if (tb3) {
			tr1 = RTMS_EX_H("13",2,12595);
			ur1 = tr1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3740, "is_case_insensitive_equal", loc7))(loc7, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,4);
			tr2 = RTMS_EX_H("Host",4,1215263604);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1412, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tb1 = (EIF_BOOLEAN)(tr2 != NULL);
		}
		if (tb1) {
			RTHOOK(8);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
			if (tb1) {
				RTHOOK(9);
				tr1 = RTMS_EX_H("key ",4,1801812256);
				ur1 = RTCCL(loc5);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3675, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
			}
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc5))(loc5, ur1x);
			RTHOOK(11);
			RTDBGAL(Current, 1, 0xF8000015, 0, 0); /* loc1 */
			
			tr1 = RTLN(21);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(500, Dtype(tr1)))(tr1);
			RTNHOOK(11,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(492, "update_from_string", loc1))(loc1, ur1x);
			RTHOOK(13);
			RTDBGAL(Current, 2, 0xF80000DA, 0, 0); /* loc2 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(573, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ur1 = RTCCL(loc1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1471, dtype))(Current, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(460, "encoded_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(14);
			RTDBGAL(Current, 3, 0xF80000DA, 0, 0); /* loc3 */
			
			tr1 = RTLN(218);
			tr2 = RTMS_EX_H("HTTP/1.1 101 Switching Protocols\015\012",34,1004673290);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3727, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(14,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			tr1 = RTMS_EX_H("Upgrade: websocket\015\012",20,999833098);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(16);
			tr1 = RTMS_EX_H("Connection: Upgrade\015\012",21,1015583754);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(17);
			tr1 = RTMS_EX_H("Sec-WebSocket-Accept: ",22,237138208);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(18);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(19);
			tr1 = RTMS_EX_H("\015\012",2,3338);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(20);
			tr1 = RTMS_EX_H("\015\012",2,3338);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3857, "append_string", loc3))(loc3, ur1x);
			RTHOOK(21);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
			if (tb1) {
				RTHOOK(22);
				tr1 = RTMS_EX_H("\012================> Send",23,802748004);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
				RTHOOK(23);
				ur1 = RTCCL(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
			}
			RTHOOK(24);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(71, "put_string", arg1))(arg1, ur1x);
		} else {
			RTHOOK(25);
			RTDBGAA(Current, dtype, 1448, 0x04000000, 1); /* has_error */
			
			*(EIF_BOOLEAN *)(Current + RTWA(1448, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(26);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1444, dtype));
			if (tb1) {
				RTHOOK(27);
				tr1 = RTMS_EX_H("Error (opening_handshake)!!!",28,712452129);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1463, dtype))(Current, ur1x);
			}
			RTHOOK(28);
			tr1 = RTMS_EX_H("HTTP/1.1 400 Bad Request\012",25,1976222474);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(71, "put_string", arg1))(arg1, ur1x);
		}
	} else {
		RTHOOK(29);
		RTDBGAA(Current, dtype, 1465, 0x04000000, 1); /* is_websocket */
		
		*(EIF_BOOLEAN *)(Current + RTWA(1465, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {WS_REQUEST_HANDLER}.next_bytes */
EIF_TYPED_VALUE F119_1676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_bytes";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 118, Current, 2, 2, 2208);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2208);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(6));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr1 = RTLN(218);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(69, "read_stream", arg1))(arg1, ui4_1x);
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(70, "bytes_read", arg1))(arg1)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(66, "last_string", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3855, "append", Result))(Result, ur1x);
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 -= loc2;
		} else {
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WS_REQUEST_HANDLER}.digest */
EIF_TYPED_VALUE F119_1677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "digest";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 118, Current, 3, 1, 2209);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2209);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(21));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000216, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(486, "digest", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr1 = RTLN(218);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2377, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2482, "lower", loc1))(loc1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2483, "upper", loc1))(loc1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(6);
		ui4_1 = loc2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", loc1))(loc1, ui4_1x)).it_n1);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3868, "append_character", Result))(Result, uc1x);
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {WS_REQUEST_HANDLER}.unmask */
void F119_1678 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "unmask";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 118, Current, 2, 3, 2210);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2210);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(218));
	RTCC(arg3, 118, l_feature_name, 3, eif_attached_type(214));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))) - ((EIF_INTEGER_32) 1L))) % ((EIF_INTEGER_32) 4L))) + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg3))(arg3, ui4_1x)).it_c1);
		tu4_2 = (EIF_NATURAL_32) tc1;
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3762, "put_code", arg1))(arg1, uu4_1x, ui4_1x);
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
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {WS_REQUEST_HANDLER}.append_chunk_unmasked */
void F119_1679 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "append_chunk_unmasked";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 118, Current, 2, 4, 2211);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2211);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(214));
	RTCC(arg3, 118, l_feature_name, 3, eif_attached_type(214));
	RTCC(arg4, 118, l_feature_name, 4, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))) - ((EIF_INTEGER_32) 1L))) % ((EIF_INTEGER_32) 4L))) + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg3))(arg3, ui4_1x)).it_c1);
		tu4_2 = (EIF_NATURAL_32) tc1;
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3765, "append_code", arg4))(arg4, uu4_1x);
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
	RTLO(8);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WS_REQUEST_HANDLER}.to_byte_representation */
EIF_TYPED_VALUE F119_1680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_byte_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 118, Current, 1, 1, 2212);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2212);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr1 = RTLN(218);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2L))) break;
		RTHOOK(5);
		ui4_1 = (EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3852, "prepend_integer", Result))(Result, ui4_1x);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 /= ((EIF_INTEGER_32) 2L);
	}
	RTHOOK(7);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3852, "prepend_integer", Result))(Result, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {WS_REQUEST_HANDLER}.string_to_byte_representation */
EIF_TYPED_VALUE F119_1681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_byte_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 118, Current, 2, 1, 2213);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(118, Current, 2213);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr1 = RTLN(218);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3613, "is_empty", Result))(Result)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(8);
				uc1 = (EIF_CHARACTER_8) ':';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3868, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(9);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			ui4_1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1474, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3855, "append", Result))(Result, ur1x);
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {WS_REQUEST_HANDLER}.string_to_byte_hexa_representation */
EIF_TYPED_VALUE F119_1682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_byte_hexa_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 118, Current, 3, 1, 2214);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(118, Current, 2214);
	RTCC(arg1, 118, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3756, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	tr1 = RTLN(218);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3596, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3613, "is_empty", Result))(Result)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(7);
				uc1 = (EIF_CHARACTER_8) ':';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3868, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(8);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2470, "item", arg1))(arg1, ui4_1x)).it_c1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32) ti4_1;
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT(NULL, EX_CHECK);
				if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 255L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ti4_1 = eif_bit_shift_right(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 15L);
			ti4_2 = eif_bit_and((ti4_1),ui4_1);
			tr1 = RTLN(169);
			*(EIF_INTEGER_32 *)tr1 = ti4_2;
			
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3023, "to_hex_character", tr1))(tr1)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3868, "append_character", Result))(Result, uc1x);
			RTHOOK(11);
			ui4_1 = ((EIF_INTEGER_32) 15L);
			ti4_1 = eif_bit_and((loc3),ui4_1);
			tr1 = RTLN(169);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3023, "to_hex_character", tr1))(tr1)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3868, "append_character", Result))(Result, uc1x);
			RTHOOK(12);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

void EIF_Minit119 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
