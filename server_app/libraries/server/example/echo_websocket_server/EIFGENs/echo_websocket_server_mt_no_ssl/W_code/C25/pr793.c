/*
 * Code for class PROCESS_INFO_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F793_6529(EIF_REFERENCE);
extern void F793_6530(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit793(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F793_6529
static EIF_INTEGER_32 inline_F793_6529 (void)
{
	return (EIF_INTEGER_32) (GetCurrentProcessId ())
	;
}
#define INLINE_F793_6529
#endif
#ifndef INLINE_F793_6530
static void inline_F793_6530 (EIF_POINTER* arg1, EIF_INTEGER_32* arg2, EIF_BOOLEAN* arg3)
{
	{										
	TCHAR *buffer;
	int returnedSize;					
	buffer = (TCHAR *)malloc (MAX_PATH *sizeof(TCHAR));
	returnedSize = GetModuleFileName (NULL, buffer, MAX_PATH);
	if(returnedSize) {
		*arg3 = 1;
		*arg2 = MAX_PATH * sizeof(TCHAR);
		*arg1 = buffer;
	} else {
		*arg3 = 0;
	}				
}
	;
}
#define INLINE_F793_6530
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_INFO_IMP}.process_id */
EIF_TYPED_VALUE F793_6529 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_id";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 792, Current, 0, 0, 12054);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(792, Current, 12054);
	RTIV(Current, RTAL);
	Result = inline_F793_6529 ();
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

/* {PROCESS_INFO_IMP}.get_process_module */
void F793_6530 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "get_process_module";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_BOOLEAN* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_INTEGER_32* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER* *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 792, Current, 0, 3, 12055);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(792, Current, 12055);
	RTIV(Current, RTAL);
	inline_F793_6530 ((EIF_POINTER*) arg1, (EIF_INTEGER_32*) arg2, (EIF_BOOLEAN*) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit793 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
