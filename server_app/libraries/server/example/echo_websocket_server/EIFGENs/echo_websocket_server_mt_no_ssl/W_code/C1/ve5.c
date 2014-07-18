/*
 * Code for class VERSIONABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE F5_56_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_56(EIF_REFERENCE);
extern void F5_57(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F5_58(EIF_REFERENCE);
extern void EIF_Minit5(void);

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

/* {VERSIONABLE}.version */
static EIF_TYPED_VALUE F5_56_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "version";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 0, 54);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(4, Current, 54);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

EIF_TYPED_VALUE F5_56 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(57,Dtype(Current)));
	return r;
}


/* {VERSIONABLE}.set_version */
void F5_57 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_version";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 55);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 55);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 57, 0x38000000, 1); /* version */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(57, dtype)) = (EIF_NATURAL_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("version_set", EX_POST);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(57, dtype));
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {VERSIONABLE}.increment_version */
void F5_58 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increment_version";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 0, 56);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 56);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(57, dtype));
		tu4_1 = tu4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 57, 0x38000000, 1); /* version */
	
	tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_32 *)(Current + RTWA(57, dtype))) += tu4_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("version_incremented", EX_POST);
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(57, dtype));
		RTCO(tr1);
		tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN)(tu4_2 == (EIF_NATURAL_32) (tu4_1 + tu4_3))) {
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
}

void EIF_Minit5 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
