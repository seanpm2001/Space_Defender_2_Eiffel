/*
 * Code for class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1089_9432(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1089_9433(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1089_9434(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1089_9435(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9436(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9437(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9438(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9439(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9440(EIF_REFERENCE);
extern void F1089_9441(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1089_9442(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1089_9443(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1089(void);

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

/* {ETF_INPUT_HANDLER_INTERFACE}.make_without_running */
void F1089_9432 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_without_running";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1088, Current, 0, 2, 15687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15687);
	RTCC(arg1, 1088, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1088, l_feature_name, 2, eif_new_type(1037, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7159, 0xF8000631, 0); /* on_error */
	tr1 = RTLNSMART(RTWCT(7159, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7159, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7157, 0xF80000E8, 0); /* input_string */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7157, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7158, 0xF800040D, 0); /* abstract_ui */
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7158, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.make */
void F1089_9433 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1088, Current, 0, 2, 15688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15688);
	RTCC(arg1, 1088, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1088, l_feature_name, 2, eif_new_type(1037, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7153, dtype))(Current, ur1x, ur2x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7162, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_evt_out */
EIF_TYPED_VALUE F1089_9434 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "etf_evt_out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Result);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1088, Current, 3, 1, 15689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15689);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,334,0xFF01,1090,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1088, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0xF800014E, 0, 0); /* loc3 */
	tr1 = eif_boxed_item(arg1,2);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("(",1,40);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2781, "lower", loc3));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2780, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7165, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr2))(tr2)).it_b);
		if (tb1) {
			RTHOOK(8);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(9);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7165, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		}
		RTHOOK(10);
		ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2780, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			RTHOOK(11);
			tr1 = RTMS_EX_H(", ",2,11296);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
		}
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(13);
	tr1 = RTMS_EX_H(")",1,41);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_error */
EIF_TYPED_VALUE F1089_9435 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7156,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_string */
EIF_TYPED_VALUE F1089_9436 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7157,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.abstract_ui */
EIF_TYPED_VALUE F1089_9437 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7158,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.on_error */
EIF_TYPED_VALUE F1089_9438 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7159,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_syntax_err_msg */
RTOID (F1089_9439)


EIF_TYPED_VALUE F1089_9439 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1089_9439,15695,RTMS_EX_H("Syntax Error: specification of command executions cannot be parsed",66,187532644));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_type_err_msg */
RTOID (F1089_9440)


EIF_TYPED_VALUE F1089_9440 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1089_9440,15696,RTMS_EX_H("Type Error: specification of command executions is not type-correct",67,295559028));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.parse_and_validate_input_string */
void F1089_9441 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_and_validate_input_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc2);
	RTLR(10,tr4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1088, Current, 4, 0, 15696);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15696);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800061F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1567, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7151, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7148, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11894, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7157, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11908, "parse_string", loc1))(loc1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11896, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(3, 0xF80000E8, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11895, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7164, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc3))(loc3)).it_b);
		if (tb1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11895, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr2);
			for (;;) {
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3146, "after", loc4))(loc4)).it_b);
				if (tb1) break;
				RTHOOK(7);
				RTDBGAL(2, 0xF8000493, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7163, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6757, "put", tr1))(tr1, ur1x);
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3147, "forth", loc4))(loc4);
			}
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 7156, 0x04000000, 1); /* etf_error */
			*(EIF_BOOLEAN *)(Current + RTWA(7156, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7161, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr4 = RTMS_EX_H("\012",1,10);
			ur1 = tr4;
			tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			ur1 = RTCCL(loc3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "notify", tr1))(tr1, ur1x);
		}
	} else {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 7156, 0x04000000, 1); /* etf_error */
		*(EIF_BOOLEAN *)(Current + RTWA(7156, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7160, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr4 = RTMS_EX_H("\012",1,10);
		ur1 = tr4;
		tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11896, "last_error", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "notify", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
}

/* {ETF_INPUT_HANDLER_INTERFACE}.evt_to_cmd */
EIF_TYPED_VALUE F1089_9442 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "evt_to_cmd";
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
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(25);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Current);
	RTLR(8,tr3);
	RTLR(9,ur2);
	RTLR(10,tr4);
	RTLR(11,ur3);
	RTLR(12,loc4);
	RTLR(13,loc5);
	RTLR(14,loc6);
	RTLR(15,loc7);
	RTLR(16,loc8);
	RTLR(17,loc9);
	RTLR(18,loc10);
	RTLR(19,Result);
	RTLR(20,loc11);
	RTLR(21,loc12);
	RTLR(22,loc13);
	RTLR(23,loc14);
	RTLR(24,loc15);
	RTLIU(25);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
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
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	
	RTEAA(l_feature_name, 1088, Current, 15, 1, 15697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15697);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,334,0xFF01,1090,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 1088, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = eif_boxed_item(arg1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800014E, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000495, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1173, 0x01).id);
	tr2 = RTMS_EX_H("dummy",5,1970873721);
	ur1 = tr2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 1, 1);
	}
	ur2 = tr3;
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if (RTEQ(loc1, RTMS_EX_H("play",4,1886151033))) {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tb7 = '\0';
		tb8 = '\0';
		tb9 = '\0';
		tb10 = '\0';
		tb11 = '\0';
		tb12 = '\0';
		tb13 = '\0';
		tb14 = '\0';
		tb15 = '\0';
		tb16 = '\0';
		tb17 = '\0';
		tb18 = '\0';
		tb19 = '\0';
		tb20 = '\0';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		loc4 = RTRV(eif_new_type(1102, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7193, "value", loc4));
			tb20 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= ti4_1);
		}
		if (tb20) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7193, "value", loc4));
			tb19 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 10L));
		}
		if (tb19) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = RTCCL(tr1);
			loc5 = RTRV(eif_new_type(1102, 0x01),loc5);
			tb18 = EIF_TEST(loc5);
		}
		if (tb18) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(7193, "value", loc5));
			tb17 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) <= ti4_1);
		}
		if (tb17) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(7193, "value", loc5));
			tb16 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 30L));
		}
		if (tb16) {
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = RTCCL(tr1);
			loc6 = RTRV(eif_new_type(1102, 0x01),loc6);
			tb15 = EIF_TEST(loc6);
		}
		if (tb15) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7193, "value", loc6));
			tb14 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb14) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7193, "value", loc6));
			tb13 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb13) {
			ui4_1 = ((EIF_INTEGER_32) 4L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = RTCCL(tr1);
			loc7 = RTRV(eif_new_type(1102, 0x01),loc7);
			tb12 = EIF_TEST(loc7);
		}
		if (tb12) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7193, "value", loc7));
			tb11 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb11) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7193, "value", loc7));
			tb10 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb10) {
			ui4_1 = ((EIF_INTEGER_32) 5L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = RTCCL(tr1);
			loc8 = RTRV(eif_new_type(1102, 0x01),loc8);
			tb9 = EIF_TEST(loc8);
		}
		if (tb9) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7193, "value", loc8));
			tb8 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb8) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7193, "value", loc8));
			tb7 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb7) {
			ui4_1 = ((EIF_INTEGER_32) 6L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = RTCCL(tr1);
			loc9 = RTRV(eif_new_type(1102, 0x01),loc9);
			tb6 = EIF_TEST(loc9);
		}
		if (tb6) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7193, "value", loc9));
			tb5 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb5) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7193, "value", loc9));
			tb4 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb4) {
			ui4_1 = ((EIF_INTEGER_32) 7L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc10 = RTCCL(tr1);
			loc10 = RTRV(eif_new_type(1102, 0x01),loc10);
			tb3 = EIF_TEST(loc10);
		}
		if (tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7193, "value", loc10));
			tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7193, "value", loc10));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000493, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(1189, 0x01).id);
			tr2 = RTMS_EX_H("play",4,1886151033);
			ur1 = tr2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,186,221,221,221,221,221,221,221,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNTS(typres0.id, 8, 1);
			}
			ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7193, "value", loc4));
			((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(7193, "value", loc5));
			((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7193, "value", loc6));
			((EIF_TYPED_VALUE *)tr3+3)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7193, "value", loc7));
			((EIF_TYPED_VALUE *)tr3+4)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7193, "value", loc8));
			((EIF_TYPED_VALUE *)tr3+5)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7193, "value", loc9));
			((EIF_TYPED_VALUE *)tr3+6)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7193, "value", loc10));
			((EIF_TYPED_VALUE *)tr3+7)->it_i4 = ti4_1;
			ur2 = RTCCL(tr3);
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur3 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF8000493, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc3);
		}
	} else {
		RTHOOK(8);
		if (RTEQ(loc1, RTMS_EX_H("setup_select",12,327432308))) {
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc11 = RTCCL(tr1);
			loc11 = RTRV(eif_new_type(1102, 0x01),loc11);
			if (EIF_TEST(loc11)) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7193, "value", loc11));
				tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
			}
			if (tb2) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7193, "value", loc11));
				tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 5L));
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(0, 0xF8000493, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(1187, 0x01).id);
				tr2 = RTMS_EX_H("setup_select",12,327432308);
				ur1 = tr2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,221,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr3 = RTLNTS(typres0.id, 2, 1);
				}
				ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7193, "value", loc11));
				((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ti4_1;
				ur2 = RTCCL(tr3);
				tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur3 = RTCCL(tr4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
				RTNHOOK(10,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(11);
				RTDBGAL(0, 0xF8000493, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc3);
			}
		} else {
			RTHOOK(12);
			if (RTEQ(loc1, RTMS_EX_H("setup_next",10,1651348340))) {
				RTHOOK(13);
				tb1 = '\0';
				tb2 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc12 = RTCCL(tr1);
				loc12 = RTRV(eif_new_type(1102, 0x01),loc12);
				if (EIF_TEST(loc12)) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7193, "value", loc12));
					tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
				}
				if (tb2) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7193, "value", loc12));
					tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 5L));
				}
				if (tb1) {
					RTHOOK(14);
					RTDBGAL(0, 0xF8000493, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(1185, 0x01).id);
					tr2 = RTMS_EX_H("setup_next",10,1651348340);
					ur1 = tr2;
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,221,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3 = RTLNTS(typres0.id, 2, 1);
					}
					ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7193, "value", loc12));
					((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ti4_1;
					ur2 = RTCCL(tr3);
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur3 = RTCCL(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
					RTNHOOK(14,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(15);
					RTDBGAL(0, 0xF8000493, 0,0); /* Result */
					Result = (EIF_REFERENCE) RTCCL(loc3);
				}
			} else {
				RTHOOK(16);
				if (RTEQ(loc1, RTMS_EX_H("setup_back",10,1449754219))) {
					RTHOOK(17);
					tb1 = '\0';
					tb2 = '\0';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc13 = RTCCL(tr1);
					loc13 = RTRV(eif_new_type(1102, 0x01),loc13);
					if (EIF_TEST(loc13)) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7193, "value", loc13));
						tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
					}
					if (tb2) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7193, "value", loc13));
						tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 5L));
					}
					if (tb1) {
						RTHOOK(18);
						RTDBGAL(0, 0xF8000493, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1191, 0x01).id);
						tr2 = RTMS_EX_H("setup_back",10,1449754219);
						ur1 = tr2;
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,221,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr3 = RTLNTS(typres0.id, 2, 1);
						}
						ti4_1 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7193, "value", loc13));
						((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ti4_1;
						ur2 = RTCCL(tr3);
						tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur3 = RTCCL(tr4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
						RTNHOOK(18,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(19);
						RTDBGAL(0, 0xF8000493, 0,0); /* Result */
						Result = (EIF_REFERENCE) RTCCL(loc3);
					}
				} else {
					RTHOOK(20);
					if (RTEQ(loc1, RTMS_EX_H("toggle_debug_mode",17,624841829))) {
						RTHOOK(21);
						if ((EIF_BOOLEAN) 1) {
							RTHOOK(22);
							RTDBGAL(0, 0xF8000493, 0,0); /* Result */
							tr1 = RTLN(eif_new_type(1183, 0x01).id);
							tr2 = RTMS_EX_H("toggle_debug_mode",17,624841829);
							ur1 = tr2;
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr3 = RTLNTS(typres0.id, 1, 1);
							}
							ur2 = tr3;
							tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur3 = RTCCL(tr4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
							RTNHOOK(22,1);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(23);
							RTDBGAL(0, 0xF8000493, 0,0); /* Result */
							Result = (EIF_REFERENCE) RTCCL(loc3);
						}
					} else {
						RTHOOK(24);
						if (RTEQ(loc1, RTMS_EX_H("abort",5,1652215924))) {
							RTHOOK(25);
							if ((EIF_BOOLEAN) 1) {
								RTHOOK(26);
								RTDBGAL(0, 0xF8000493, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(1179, 0x01).id);
								tr2 = RTMS_EX_H("abort",5,1652215924);
								ur1 = tr2;
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr3 = RTLNTS(typres0.id, 1, 1);
								}
								ur2 = tr3;
								tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur3 = RTCCL(tr4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
								RTNHOOK(26,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(27);
								RTDBGAL(0, 0xF8000493, 0,0); /* Result */
								Result = (EIF_REFERENCE) RTCCL(loc3);
							}
						} else {
							RTHOOK(28);
							if (RTEQ(loc1, RTMS_EX_H("move",4,1836021349))) {
								RTHOOK(29);
								tb1 = '\0';
								tb2 = '\0';
								tb3 = '\0';
								tb4 = '\0';
								ui4_1 = ((EIF_INTEGER_32) 1L);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc14 = RTCCL(tr1);
								loc14 = RTRV(eif_new_type(1101, 0x01),loc14);
								if (EIF_TEST(loc14)) {
									tb5 = '\01';
									tb6 = '\01';
									tb7 = '\01';
									tb8 = '\01';
									tb9 = '\01';
									tb10 = '\01';
									tb11 = '\01';
									tb12 = '\01';
									tb13 = '\01';
									ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
									ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7138, dtype))(Current)).it_i4);
									if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7139, dtype))(Current)).it_i4);
										tb13 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb13) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7140, dtype))(Current)).it_i4);
										tb12 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb12) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7141, dtype))(Current)).it_i4);
										tb11 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb11) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7142, dtype))(Current)).it_i4);
										tb10 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb10) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7143, dtype))(Current)).it_i4);
										tb9 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb9) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7144, dtype))(Current)).it_i4);
										tb8 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb8) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7145, dtype))(Current)).it_i4);
										tb7 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb7) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7146, dtype))(Current)).it_i4);
										tb6 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									if (!tb6) {
										ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7147, dtype))(Current)).it_i4);
										tb5 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
									}
									tb4 = tb5;
								}
								if (tb4) {
									ui4_1 = ((EIF_INTEGER_32) 2L);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc15 = RTCCL(tr1);
									loc15 = RTRV(eif_new_type(1102, 0x01),loc15);
									tb3 = EIF_TEST(loc15);
								}
								if (tb3) {
									ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(7193, "value", loc15));
									tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
								}
								if (tb2) {
									ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(7193, "value", loc15));
									tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 30L));
								}
								if (tb1) {
									RTHOOK(30);
									RTDBGAL(0, 0xF8000493, 0,0); /* Result */
									tr1 = RTLN(eif_new_type(1175, 0x01).id);
									tr2 = RTMS_EX_H("move",4,1836021349);
									ur1 = tr2;
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,221,221,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr3 = RTLNTS(typres0.id, 3, 1);
									}
									ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7191, "value", loc14));
									((EIF_TYPED_VALUE *)tr3+1)->it_i4 = ti4_1;
									ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(7193, "value", loc15));
									((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ti4_1;
									ur2 = RTCCL(tr3);
									tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur3 = RTCCL(tr4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
									RTNHOOK(30,1);
									Result = (EIF_REFERENCE) RTCCL(tr1);
								} else {
									RTHOOK(31);
									RTDBGAL(0, 0xF8000493, 0,0); /* Result */
									Result = (EIF_REFERENCE) RTCCL(loc3);
								}
							} else {
								RTHOOK(32);
								if (RTEQ(loc1, RTMS_EX_H("pass",4,1885434739))) {
									RTHOOK(33);
									if ((EIF_BOOLEAN) 1) {
										RTHOOK(34);
										RTDBGAL(0, 0xF8000493, 0,0); /* Result */
										tr1 = RTLN(eif_new_type(1177, 0x01).id);
										tr2 = RTMS_EX_H("pass",4,1885434739);
										ur1 = tr2;
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr3 = RTLNTS(typres0.id, 1, 1);
										}
										ur2 = tr3;
										tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur3 = RTCCL(tr4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
										RTNHOOK(34,1);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									} else {
										RTHOOK(35);
										RTDBGAL(0, 0xF8000493, 0,0); /* Result */
										Result = (EIF_REFERENCE) RTCCL(loc3);
									}
								} else {
									RTHOOK(36);
									if (RTEQ(loc1, RTMS_EX_H("fire",4,1718186597))) {
										RTHOOK(37);
										if ((EIF_BOOLEAN) 1) {
											RTHOOK(38);
											RTDBGAL(0, 0xF8000493, 0,0); /* Result */
											tr1 = RTLN(eif_new_type(1193, 0x01).id);
											tr2 = RTMS_EX_H("fire",4,1718186597);
											ur1 = tr2;
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
												EIF_TYPE typres0;
												static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
												
												typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr3 = RTLNTS(typres0.id, 1, 1);
											}
											ur2 = tr3;
											tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur3 = RTCCL(tr4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
											RTNHOOK(38,1);
											Result = (EIF_REFERENCE) RTCCL(tr1);
										} else {
											RTHOOK(39);
											RTDBGAL(0, 0xF8000493, 0,0); /* Result */
											Result = (EIF_REFERENCE) RTCCL(loc3);
										}
									} else {
										RTHOOK(40);
										if (RTEQ(loc1, RTMS_EX_H("special",7,1788267628))) {
											RTHOOK(41);
											if ((EIF_BOOLEAN) 1) {
												RTHOOK(42);
												RTDBGAL(0, 0xF8000493, 0,0); /* Result */
												tr1 = RTLN(eif_new_type(1181, 0x01).id);
												tr2 = RTMS_EX_H("special",7,1788267628);
												ur1 = tr2;
												{
													static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
													EIF_TYPE typres0;
													static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
													
													typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
													tr3 = RTLNTS(typres0.id, 1, 1);
												}
												ur2 = tr3;
												tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur3 = RTCCL(tr4);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7906, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
												RTNHOOK(42,1);
												Result = (EIF_REFERENCE) RTCCL(tr1);
											} else {
												RTHOOK(43);
												RTDBGAL(0, 0xF8000493, 0,0); /* Result */
												Result = (EIF_REFERENCE) RTCCL(loc3);
											}
										} else {
											RTHOOK(44);
											RTDBGAL(0, 0xF8000493, 0,0); /* Result */
											Result = (EIF_REFERENCE) RTCCL(loc3);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.find_invalid_evt_trace */
EIF_TYPED_VALUE F1089_9443 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "find_invalid_evt_trace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(22);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc6);
	RTLR(10,loc7);
	RTLR(11,loc8);
	RTLR(12,loc9);
	RTLR(13,loc10);
	RTLR(14,loc11);
	RTLR(15,loc12);
	RTLR(16,tr2);
	RTLR(17,loc13);
	RTLR(18,loc14);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLR(21,loc17);
	RTLIU(22);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 1088, Current, 17, 1, 15698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1088, Current, 15698);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,334,0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,334,0xFF01,1090,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1088, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(2, 0xF80000BA, 0, 0); /* loc2 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
		ur1 = RTCCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7155, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(3, 0xF80000E8, 0, 0); /* loc3 */
		tr1 = eif_boxed_item(loc2,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(4, 0xF800014E, 0, 0); /* loc4 */
		tr1 = eif_boxed_item(loc2,2);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		if (RTEQ(loc3, RTMS_EX_H("play",4,1886151033))) {
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tb5 = '\0';
			tb6 = '\0';
			tb7 = '\0';
			tb8 = '\0';
			tb9 = '\0';
			tb10 = '\0';
			tb11 = '\0';
			tb12 = '\0';
			tb13 = '\0';
			tb14 = '\0';
			tb15 = '\0';
			tb16 = '\0';
			tb17 = '\0';
			tb18 = '\0';
			tb19 = '\0';
			tb20 = '\0';
			tb21 = '\0';
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 7L))) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				loc6 = RTRV(eif_new_type(1102, 0x01),loc6);
				tb21 = EIF_TEST(loc6);
			}
			if (tb21) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7193, "value", loc6));
				tb20 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= ti4_2);
			}
			if (tb20) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7193, "value", loc6));
				tb19 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 10L));
			}
			if (tb19) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = RTCCL(tr1);
				loc7 = RTRV(eif_new_type(1102, 0x01),loc7);
				tb18 = EIF_TEST(loc7);
			}
			if (tb18) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7193, "value", loc7));
				tb17 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 10L) <= ti4_2);
			}
			if (tb17) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7193, "value", loc7));
				tb16 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 30L));
			}
			if (tb16) {
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc8 = RTCCL(tr1);
				loc8 = RTRV(eif_new_type(1102, 0x01),loc8);
				tb15 = EIF_TEST(loc8);
			}
			if (tb15) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7193, "value", loc8));
				tb14 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb14) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7193, "value", loc8));
				tb13 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if (tb13) {
				ui4_1 = ((EIF_INTEGER_32) 4L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc9 = RTCCL(tr1);
				loc9 = RTRV(eif_new_type(1102, 0x01),loc9);
				tb12 = EIF_TEST(loc9);
			}
			if (tb12) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7193, "value", loc9));
				tb11 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb11) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7193, "value", loc9));
				tb10 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if (tb10) {
				ui4_1 = ((EIF_INTEGER_32) 5L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc10 = RTCCL(tr1);
				loc10 = RTRV(eif_new_type(1102, 0x01),loc10);
				tb9 = EIF_TEST(loc10);
			}
			if (tb9) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7193, "value", loc10));
				tb8 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb8) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7193, "value", loc10));
				tb7 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if (tb7) {
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc11 = RTCCL(tr1);
				loc11 = RTRV(eif_new_type(1102, 0x01),loc11);
				tb6 = EIF_TEST(loc11);
			}
			if (tb6) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7193, "value", loc11));
				tb5 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb5) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7193, "value", loc11));
				tb4 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if (tb4) {
				ui4_1 = ((EIF_INTEGER_32) 7L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc12 = RTCCL(tr1);
				loc12 = RTRV(eif_new_type(1102, 0x01),loc12);
				tb3 = EIF_TEST(loc12);
			}
			if (tb3) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7193, "value", loc12));
				tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb2) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7193, "value", loc12));
				tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					tr1 = RTMS_EX_H("\012",1,10);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
				}
				RTHOOK(12);
				tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTMS_EX_H("play(row: MAX_ROW = 5 .. 10 ; column: MAX_COLUMN = 10 .. 30 ; g_threshold: THRESHOLD = 1 .. 101 ; f_threshold: THRESHOLD = 1 .. 101 ; c_threshold: THRESHOLD = 1 .. 101 ; i_threshold: THRESHOLD = 1 .. 101 ; p_threshold: THRESHOLD = 1 .. 101)",240,1516329257);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
			}
		} else {
			RTHOOK(13);
			if (RTEQ(loc3, RTMS_EX_H("setup_select",12,327432308))) {
				RTHOOK(14);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc13 = RTCCL(tr1);
					loc13 = RTRV(eif_new_type(1102, 0x01),loc13);
					tb3 = EIF_TEST(loc13);
				}
				if (tb3) {
					ti4_2 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7193, "value", loc13));
					tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
				}
				if (tb2) {
					ti4_2 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7193, "value", loc13));
					tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 5L));
				}
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(15);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(16);
						tr1 = RTMS_EX_H("\012",1,10);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
					}
					RTHOOK(17);
					tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = RTMS_EX_H("setup_select(value: INPUT_VALUE = 1 .. 5)",41,130228521);
					ur1 = tr2;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
				}
			} else {
				RTHOOK(18);
				if (RTEQ(loc3, RTMS_EX_H("setup_next",10,1651348340))) {
					RTHOOK(19);
					tb1 = '\0';
					tb2 = '\0';
					tb3 = '\0';
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
					if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc14 = RTCCL(tr1);
						loc14 = RTRV(eif_new_type(1102, 0x01),loc14);
						tb3 = EIF_TEST(loc14);
					}
					if (tb3) {
						ti4_2 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7193, "value", loc14));
						tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
					}
					if (tb2) {
						ti4_2 = *(EIF_INTEGER_32 *)(loc14 + RTVA(7193, "value", loc14));
						tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 5L));
					}
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(20);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(21);
							tr1 = RTMS_EX_H("\012",1,10);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
						}
						RTHOOK(22);
						tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = RTMS_EX_H("setup_next(state: STATE = 1 .. 5)",33,625560617);
						ur1 = tr2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
					}
				} else {
					RTHOOK(23);
					if (RTEQ(loc3, RTMS_EX_H("setup_back",10,1449754219))) {
						RTHOOK(24);
						tb1 = '\0';
						tb2 = '\0';
						tb3 = '\0';
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
						if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc15 = RTCCL(tr1);
							loc15 = RTRV(eif_new_type(1102, 0x01),loc15);
							tb3 = EIF_TEST(loc15);
						}
						if (tb3) {
							ti4_2 = *(EIF_INTEGER_32 *)(loc15 + RTVA(7193, "value", loc15));
							tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
						}
						if (tb2) {
							ti4_2 = *(EIF_INTEGER_32 *)(loc15 + RTVA(7193, "value", loc15));
							tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 5L));
						}
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(25);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(26);
								tr1 = RTMS_EX_H("\012",1,10);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
							}
							RTHOOK(27);
							tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr2 = RTMS_EX_H("setup_back(state: STATE = 1 .. 5)",33,1196724265);
							ur1 = tr2;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
						}
					} else {
						RTHOOK(28);
						if (RTEQ(loc3, RTMS_EX_H("toggle_debug_mode",17,624841829))) {
							RTHOOK(29);
							if ((EIF_BOOLEAN) 0) {
								RTHOOK(30);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
								if ((EIF_BOOLEAN) !tb1) {
									RTHOOK(31);
									tr1 = RTMS_EX_H("\012",1,10);
									ur1 = tr1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
								}
								RTHOOK(32);
								tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
								ur1 = tr1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								tr2 = RTMS_EX_H("toggle_debug_mode",17,624841829);
								ur1 = tr2;
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
							}
						} else {
							RTHOOK(33);
							if (RTEQ(loc3, RTMS_EX_H("abort",5,1652215924))) {
								RTHOOK(34);
								if ((EIF_BOOLEAN) 0) {
									RTHOOK(35);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(36);
										tr1 = RTMS_EX_H("\012",1,10);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
									}
									RTHOOK(37);
									tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
									ur1 = tr1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									tr2 = RTMS_EX_H("abort",5,1652215924);
									ur1 = tr2;
									tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr2);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
								}
							} else {
								RTHOOK(38);
								if (RTEQ(loc3, RTMS_EX_H("move",4,1836021349))) {
									RTHOOK(39);
									tb1 = '\0';
									tb2 = '\0';
									tb3 = '\0';
									tb4 = '\0';
									tb5 = '\0';
									ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
									if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L))) {
										ui4_1 = ((EIF_INTEGER_32) 1L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc16 = RTCCL(tr1);
										loc16 = RTRV(eif_new_type(1101, 0x01),loc16);
										tb5 = EIF_TEST(loc16);
									}
									if (tb5) {
										tb5 = '\01';
										tb6 = '\01';
										tb7 = '\01';
										tb8 = '\01';
										tb9 = '\01';
										tb10 = '\01';
										tb11 = '\01';
										tb12 = '\01';
										tb13 = '\01';
										ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
										ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7138, dtype))(Current)).it_i4);
										if (!(EIF_BOOLEAN)(ti4_2 == ti4_3)) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7139, dtype))(Current)).it_i4);
											tb13 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb13) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7140, dtype))(Current)).it_i4);
											tb12 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb12) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7141, dtype))(Current)).it_i4);
											tb11 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb11) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7142, dtype))(Current)).it_i4);
											tb10 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb10) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7143, dtype))(Current)).it_i4);
											tb9 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb9) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7144, dtype))(Current)).it_i4);
											tb8 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb8) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7145, dtype))(Current)).it_i4);
											tb7 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb7) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7146, dtype))(Current)).it_i4);
											tb6 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										if (!tb6) {
											ti4_2 = *(EIF_INTEGER_32 *)(loc16 + RTVA(7191, "value", loc16));
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7147, dtype))(Current)).it_i4);
											tb5 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
										}
										tb4 = tb5;
									}
									if (tb4) {
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc17 = RTCCL(tr1);
										loc17 = RTRV(eif_new_type(1102, 0x01),loc17);
										tb3 = EIF_TEST(loc17);
									}
									if (tb3) {
										ti4_2 = *(EIF_INTEGER_32 *)(loc17 + RTVA(7193, "value", loc17));
										tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
									}
									if (tb2) {
										ti4_2 = *(EIF_INTEGER_32 *)(loc17 + RTVA(7193, "value", loc17));
										tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 30L));
									}
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(40);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(41);
											tr1 = RTMS_EX_H("\012",1,10);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
										}
										RTHOOK(42);
										tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr2 = RTMS_EX_H("move(row: ROW = {A, B, C, D, E, F, G, H, I, J} ; column: COLUMN = 1 .. 30)",74,1758917417);
										ur1 = tr2;
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
									}
								} else {
									RTHOOK(43);
									if (RTEQ(loc3, RTMS_EX_H("pass",4,1885434739))) {
										RTHOOK(44);
										if ((EIF_BOOLEAN) 0) {
											RTHOOK(45);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
											if ((EIF_BOOLEAN) !tb1) {
												RTHOOK(46);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
											}
											RTHOOK(47);
											tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = RTMS_EX_H("pass",4,1885434739);
											ur1 = tr2;
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
										}
									} else {
										RTHOOK(48);
										if (RTEQ(loc3, RTMS_EX_H("fire",4,1718186597))) {
											RTHOOK(49);
											if ((EIF_BOOLEAN) 0) {
												RTHOOK(50);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
												if ((EIF_BOOLEAN) !tb1) {
													RTHOOK(51);
													tr1 = RTMS_EX_H("\012",1,10);
													ur1 = tr1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
												}
												RTHOOK(52);
												tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
												ur1 = tr1;
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												tr2 = RTMS_EX_H("fire",4,1718186597);
												ur1 = tr2;
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
											}
										} else {
											RTHOOK(53);
											if (RTEQ(loc3, RTMS_EX_H("special",7,1788267628))) {
												RTHOOK(54);
												if ((EIF_BOOLEAN) 0) {
													RTHOOK(55);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
													if ((EIF_BOOLEAN) !tb1) {
														RTHOOK(56);
														tr1 = RTMS_EX_H("\012",1,10);
														ur1 = tr1;
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
													}
													RTHOOK(57);
													tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
													ur1 = tr1;
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													tr2 = RTMS_EX_H("special",7,1788267628);
													ur1 = tr2;
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr2);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
												}
											} else {
												RTHOOK(58);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
												if ((EIF_BOOLEAN) !tb1) {
													RTHOOK(59);
													tr1 = RTMS_EX_H("\012",1,10);
													ur1 = tr1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
												}
												RTHOOK(60);
												tr1 = RTMS_EX_H("Error: unknown event name ",26,1919922208);
												ur1 = RTCCL(loc3);
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(61);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit1089 (void)
{
	GTCX
	RTOTS (9439,F1089_9439)
	RTOTS (9440,F1089_9440)
}


#ifdef __cplusplus
}
#endif
