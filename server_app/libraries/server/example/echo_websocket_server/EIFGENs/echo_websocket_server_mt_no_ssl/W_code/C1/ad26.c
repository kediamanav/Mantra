/*
 * Code for class ADDRINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F26_572(EIF_REFERENCE);extern EIF_INTEGER_32 en_addrinfo_af_inet();

extern EIF_TYPED_VALUE F26_573(EIF_REFERENCE);extern EIF_INTEGER_32 en_addrinfo_af_inet6();

extern void EIF_Minit26(void);

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

/* {ADDRINFO}.af_inet */
EIF_TYPED_VALUE F26_572 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 25, Current, 0, 0, 643);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(25, Current, 643);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_addrinfo_af_inet();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {ADDRINFO}.af_inet6 */
EIF_TYPED_VALUE F26_573 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet6";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 25, Current, 0, 0, 644);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(25, Current, 644);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_addrinfo_af_inet6();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit26 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
