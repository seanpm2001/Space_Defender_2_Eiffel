/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1088_9410(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9411(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9412(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9413(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9414(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9415(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9416(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1088_9417(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9418(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9419(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9420(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9421(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9423(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9424(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9425(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9426(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9427(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9428(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9429(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9430(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9431(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1088(void);

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

/* {ETF_TYPE_CONSTRAINTS}.is_input_value */
EIF_TYPED_VALUE F1088_9410 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_input_value";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15673);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15673);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: INPUT_VALUE = 1 .. 5\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: INPUT_VALUE = 1 .. 5",27,685170997);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 5L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 5)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 5L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_state */
EIF_TYPED_VALUE F1088_9411 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_state";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15674);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: STATE = 1 .. 5\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: STATE = 1 .. 5",21,18932277);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 5L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 5)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 5L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_max_row */
EIF_TYPED_VALUE F1088_9412 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_max_row";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15675);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: MAX_ROW = 5 .. 10\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: MAX_ROW = 5 .. 10",24,472802352);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (5 <= etf_v) and then (etf_v <= 10)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 10L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_max_column */
EIF_TYPED_VALUE F1088_9413 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_max_column";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15676);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: MAX_COLUMN = 10 .. 30\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: MAX_COLUMN = 10 .. 30",28,189497904);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 30L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (10 <= etf_v) and then (etf_v <= 30)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 30L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_row */
EIF_TYPED_VALUE F1088_9414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_row";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15677);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: ROW = {A, B, C, D, E, F, G, H, I, J}\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: ROW = {A, B, C, D, E, F, G, H, I, J}",43,1073528445);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7138, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7139, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7140, dtype))(Current)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7141, dtype))(Current)).it_i4);
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7142, dtype))(Current)).it_i4);
	ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7143, dtype))(Current)).it_i4);
	ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7144, dtype))(Current)).it_i4);
	ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7145, dtype))(Current)).it_i4);
	ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7146, dtype))(Current)).it_i4);
	ti4_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7147, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((arg1 == ti4_1) || (arg1 == ti4_2)) || (arg1 == ti4_3)) || (arg1 == ti4_4)) || (arg1 == ti4_5)) || (arg1 == ti4_6)) || (arg1 == ti4_7)) || (arg1 == ti4_8)) || (arg1 == ti4_9)) || (arg1 == ti4_10)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (( etf_v ~ A ) or else ( etf_v ~ B ) or else ( etf_v ~ C ) or else ( etf_v ~ D ) or else ( etf_v ~ E ) or else ( etf_v ~ F ) or else ( etf_v ~ G ) or else ( etf_v ~ H ) or else ( etf_v ~ I ) or else ( etf_v ~ J ))", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7138, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7139, dtype))(Current)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7140, dtype))(Current)).it_i4);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7141, dtype))(Current)).it_i4);
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7142, dtype))(Current)).it_i4);
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7143, dtype))(Current)).it_i4);
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7144, dtype))(Current)).it_i4);
		ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7145, dtype))(Current)).it_i4);
		ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7146, dtype))(Current)).it_i4);
		ti4_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((arg1 == ti4_1) || (arg1 == ti4_2)) || (arg1 == ti4_3)) || (arg1 == ti4_4)) || (arg1 == ti4_5)) || (arg1 == ti4_6)) || (arg1 == ti4_7)) || (arg1 == ti4_8)) || (arg1 == ti4_9)) || (arg1 == ti4_10))))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_column */
EIF_TYPED_VALUE F1088_9415 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_column";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15678);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15678);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: COLUMN = 1 .. 30\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: COLUMN = 1 .. 30",23,1501284400);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 30L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 30)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 30L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_threshold */
EIF_TYPED_VALUE F1088_9416 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_threshold";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15679);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15679);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: THRESHOLD = 1 .. 101\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: THRESHOLD = 1 .. 101",27,787488049);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 101L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 101)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 101L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.a */
EIF_TYPED_VALUE F1088_9417 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.b */
EIF_TYPED_VALUE F1088_9418 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.c */
EIF_TYPED_VALUE F1088_9419 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.d */
EIF_TYPED_VALUE F1088_9420 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.e */
EIF_TYPED_VALUE F1088_9421 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.f */
EIF_TYPED_VALUE F1088_9422 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.g */
EIF_TYPED_VALUE F1088_9423 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.h */
EIF_TYPED_VALUE F1088_9424 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.i */
EIF_TYPED_VALUE F1088_9425 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.j */
EIF_TYPED_VALUE F1088_9426 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1088_9427 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
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
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 0, 15668);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15668);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800035F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,863,221,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(8);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1088_9428 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
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
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 0, 15669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800029F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,671,0xFF01,232,221,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1088_9429 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(20);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,loc6);
	RTLR(13,loc7);
	RTLR(14,tr4);
	RTLR(15,tr5);
	RTLR(16,tr6);
	RTLR(17,loc8);
	RTLR(18,loc9);
	RTLR(19,loc10);
	RTLIU(20);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1087, Current, 10, 0, 15670);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15670);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800029C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,668,0xFF01,1072,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF800029C, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("MAX_ROW",7,1828433239);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("row",3,7499639);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("MAX_COLUMN",10,269687118);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	ui4_2 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(7,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("g_threshold",11,271106916);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(8,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(8,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("f_threshold",11,264194916);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("c_threshold",11,243458916);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(10);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(10,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(10,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("i_threshold",11,284930916);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("p_threshold",11,333314916);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(12);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("play",4,1886151033);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(13);
	RTDBGAL(2, 0xF800029C, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(13,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc2))(loc2);
	RTHOOK(15);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("INPUT_VALUE",11,353888837);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(15,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(15,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("value",5,1635404133);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(16);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("setup_select",12,327432308);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(17);
	RTDBGAL(3, 0xF800029C, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(17,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc3))(loc3);
	RTHOOK(19);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("STATE",5,1414204997);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(19,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(19,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("state",5,1953427045);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(20);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("setup_next",10,1651348340);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(21);
	RTDBGAL(4, 0xF800029C, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(21,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(22);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc4))(loc4);
	RTHOOK(23);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("STATE",5,1414204997);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(23,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(23,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("state",5,1953427045);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(24);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("setup_back",10,1449754219);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(25);
	RTDBGAL(5, 0xF800029C, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(25,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc5))(loc5);
	RTHOOK(27);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("toggle_debug_mode",17,624841829);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(28);
	RTDBGAL(6, 0xF800029C, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(28,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(29);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc6))(loc6);
	RTHOOK(30);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("abort",5,1652215924);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(31);
	RTDBGAL(7, 0xF800029C, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(31,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(32);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc7))(loc7);
	RTHOOK(33);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("ROW",3,5394263);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1078, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 10L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr5+4) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr5+5) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr5+6) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr5+7) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr5+8) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr5+9) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7121, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(33,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(33,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("row",3,7499639);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("COLUMN",6,1412992846);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(34,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(34,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(35);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("move",4,1836021349);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(36);
	RTDBGAL(8, 0xF800029C, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(36,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc8))(loc8);
	RTHOOK(38);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("pass",4,1885434739);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(39);
	RTDBGAL(9, 0xF800029C, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(39,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(40);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc9))(loc9);
	RTHOOK(41);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(42);
	RTDBGAL(10, 0xF800029C, 0, 0); /* loc10 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(42,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(43);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc10))(loc10);
	RTHOOK(44);
	ur1 = RTCCL(loc10);
	tr1 = RTMS_EX_H("special",7,1788267628);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1088_9430 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(20);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,loc6);
	RTLR(13,loc7);
	RTLR(14,tr4);
	RTLR(15,tr5);
	RTLR(16,tr6);
	RTLR(17,loc8);
	RTLR(18,loc9);
	RTLR(19,loc10);
	RTLIU(20);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1087, Current, 10, 0, 15671);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15671);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800029C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,668,0xFF01,631,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000277, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("MAX_ROW",7,1828433239);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("MAX_COLUMN",10,269687118);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	ui4_2 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(7,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(8);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(8,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(8,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(10);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(10,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(10,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 101L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc1))(loc1, ur1x);
	RTHOOK(12);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("play",4,1886151033);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(13);
	RTDBGAL(2, 0xF8000277, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(13,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc2))(loc2);
	RTHOOK(15);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("INPUT_VALUE",11,353888837);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(15,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(15,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc2))(loc2, ur1x);
	RTHOOK(16);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("setup_select",12,327432308);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(17);
	RTDBGAL(3, 0xF8000277, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(17,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc3))(loc3);
	RTHOOK(19);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("STATE",5,1414204997);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(19,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(19,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc3))(loc3, ur1x);
	RTHOOK(20);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("setup_next",10,1651348340);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(21);
	RTDBGAL(4, 0xF8000277, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(21,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(22);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc4))(loc4);
	RTHOOK(23);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("STATE",5,1414204997);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(23,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(23,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc4))(loc4, ur1x);
	RTHOOK(24);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("setup_back",10,1449754219);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(25);
	RTDBGAL(5, 0xF8000277, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(25,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc5))(loc5);
	RTHOOK(27);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("toggle_debug_mode",17,624841829);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(28);
	RTDBGAL(6, 0xF8000277, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(28,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(29);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc6))(loc6);
	RTHOOK(30);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("abort",5,1652215924);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(31);
	RTDBGAL(7, 0xF8000277, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(31,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(32);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc7))(loc7);
	RTHOOK(33);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("ROW",3,5394263);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1078, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 10L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr5+4) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr5+5) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr5+6) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr5+7) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr5+8) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr5+9) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7121, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(33,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(33,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc7))(loc7, ur1x);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1081, 0x01).id);
	tr2 = RTMS_EX_H("COLUMN",6,1412992846);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1085, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(34,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7123, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(34,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc7))(loc7, ur1x);
	RTHOOK(35);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("move",4,1836021349);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(36);
	RTDBGAL(8, 0xF8000277, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(36,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc8))(loc8);
	RTHOOK(38);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("pass",4,1885434739);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(39);
	RTDBGAL(9, 0xF8000277, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(39,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(40);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc9))(loc9);
	RTHOOK(41);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(42);
	RTDBGAL(10, 0xF8000277, 0, 0); /* loc10 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(42,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(43);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc10))(loc10);
	RTHOOK(44);
	ur1 = RTCCL(loc10);
	tr1 = RTMS_EX_H("special",7,1788267628);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1088_9431 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15672);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15672);
	RTCC(arg1, 1087, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1088 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
