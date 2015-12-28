#include "cdecls.h"


static int32
P_configuracao_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			am2_Flag_reserva_M1 = 0;
			EntityChanged(0x01000000);
		}
		{
			am2_Flag_reserva_M2 = 0;
			EntityChanged(0x01000000);
		}
		{
			am2_Flag_reserva_M3 = 0;
			EntityChanged(0x01000000);
		}
		{
			while (1 == 1) {
				{
					if (QueGetCurConts(am2_Space) <= 10) {
						{
							create_l(5, am2_L_p3, am2_P_P3, 0.0);
						}
						{
							create_l(2, am2_L_p1, am2_P_P1, 0.0);
						}
						{
							create_l(3, am2_L_p2, am2_P_P2, 0.0);
						}
					}
				}
				{
					if (waitfor(ToModelTime(1.0000000000000000, UNITMINUTES), this, P_configuracao_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; /* Step 2 */
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_configuracao_arriving */

static int32
P_P1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	case Step 11: goto Label11;
	case Step 12: goto Label12;
	case Step 13: goto Label13;
	case Step 14: goto Label14;
	case Step 15: goto Label15;
	case Step 16: goto Label16;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_P1_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QE);
			return Continue; /* go move into territory */
Label2: ; /* Step 2 */
		}
		{
			while (am2_Flag_reserva_M1 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P1_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; /* Step 3 */
				}
			}
		}
		{
			am2_Flag_reserva_M1 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P1_arriving, Step 4, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Entrada, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label4: ; /* Step 4 */
		}
		{
			pushppa(this, P_P1_arriving, Step 5, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq1, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label5: ; /* Step 5 */
		}
		{
			pushppa(this, P_P1_arriving, Step 6, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq1);
			return Continue; /* go move into territory */
Label6: ; /* Step 6 */
		}
		{
			return usefor(am2_r_Maquina1, 1, this, P_P1_arriving, Step 7, am_localargs, ToModelTime(2.0000000000000000, UNITMINUTES));
Label7: ; /* Step 7 */
		}
		{
			while (am2_Flag_reserva_M2 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P1_arriving, Step 8, am_localargs) == Delayed)
						return Delayed;
Label8: ; /* Step 8 */
				}
			}
		}
		{
			am2_Flag_reserva_M2 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P1_arriving, Step 9, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq1, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label9: ; /* Step 9 */
		}
		{
			am2_Flag_reserva_M1 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P1_arriving, Step 10, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq2, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label10: ; /* Step 10 */
		}
		{
			pushppa(this, P_P1_arriving, Step 11, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq2);
			return Continue; /* go move into territory */
Label11: ; /* Step 11 */
		}
		{
			return usefor(am2_r_Maquina2, 1, this, P_P1_arriving, Step 12, am_localargs, ToModelTime(1.5000000000000000, UNITMINUTES));
Label12: ; /* Step 12 */
		}
		{
			pushppa(this, P_P1_arriving, Step 13, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq2, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label13: ; /* Step 13 */
		}
		{
			pushppa(this, P_P1_arriving, Step 14, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Saisa, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label14: ; /* Step 14 */
		}
		{
			am2_Flag_reserva_M2 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P1_arriving, Step 15, am_localargs);
			pushppa(this, inqueue, Step 1, am2_q1);
			return Continue; /* go move into territory */
Label15: ; /* Step 15 */
		}
		{
			pushppa(this, P_P1_arriving, Step 16, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QF);
			return Continue; /* go move into territory */
Label16: ; /* Step 16 */
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_P1_arriving */

static int32
P_P2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	case Step 11: goto Label11;
	case Step 12: goto Label12;
	case Step 13: goto Label13;
	case Step 14: goto Label14;
	case Step 15: goto Label15;
	case Step 16: goto Label16;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_P2_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QE);
			return Continue; /* go move into territory */
Label2: ; /* Step 2 */
		}
		{
			while (am2_Flag_reserva_M1 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P2_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; /* Step 3 */
				}
			}
		}
		{
			am2_Flag_reserva_M1 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P2_arriving, Step 4, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Entrada, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label4: ; /* Step 4 */
		}
		{
			pushppa(this, P_P2_arriving, Step 5, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq1, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label5: ; /* Step 5 */
		}
		{
			pushppa(this, P_P2_arriving, Step 6, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq1);
			return Continue; /* go move into territory */
Label6: ; /* Step 6 */
		}
		{
			return usefor(am2_r_Maquina1, 1, this, P_P2_arriving, Step 7, am_localargs, ToModelTime(3.0000000000000000, UNITMINUTES));
Label7: ; /* Step 7 */
		}
		{
			while (am2_Flag_reserva_M3 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P2_arriving, Step 8, am_localargs) == Delayed)
						return Delayed;
Label8: ; /* Step 8 */
				}
			}
		}
		{
			am2_Flag_reserva_M3 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P2_arriving, Step 9, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq1, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label9: ; /* Step 9 */
		}
		{
			am2_Flag_reserva_M1 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P2_arriving, Step 10, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq3, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label10: ; /* Step 10 */
		}
		{
			pushppa(this, P_P2_arriving, Step 11, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq3);
			return Continue; /* go move into territory */
Label11: ; /* Step 11 */
		}
		{
			return usefor(am2_r_Maquina3, 1, this, P_P2_arriving, Step 12, am_localargs, ToModelTime(4.0000000000000000, UNITMINUTES));
Label12: ; /* Step 12 */
		}
		{
			pushppa(this, P_P2_arriving, Step 13, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq3, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label13: ; /* Step 13 */
		}
		{
			pushppa(this, P_P2_arriving, Step 14, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Saisa, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label14: ; /* Step 14 */
		}
		{
			am2_Flag_reserva_M3 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P2_arriving, Step 15, am_localargs);
			pushppa(this, inqueue, Step 1, am2_q2);
			return Continue; /* go move into territory */
Label15: ; /* Step 15 */
		}
		{
			pushppa(this, P_P2_arriving, Step 16, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QF);
			return Continue; /* go move into territory */
Label16: ; /* Step 16 */
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_P2_arriving */

static int32
P_P3_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	case Step 11: goto Label11;
	case Step 12: goto Label12;
	case Step 13: goto Label13;
	case Step 14: goto Label14;
	case Step 15: goto Label15;
	case Step 16: goto Label16;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_P3_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QE);
			return Continue; /* go move into territory */
Label2: ; /* Step 2 */
		}
		{
			while (am2_Flag_reserva_M2 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P3_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; /* Step 3 */
				}
			}
		}
		{
			am2_Flag_reserva_M2 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P3_arriving, Step 4, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Entrada, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label4: ; /* Step 4 */
		}
		{
			pushppa(this, P_P3_arriving, Step 5, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq2, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label5: ; /* Step 5 */
		}
		{
			pushppa(this, P_P3_arriving, Step 6, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq2);
			return Continue; /* go move into territory */
Label6: ; /* Step 6 */
		}
		{
			return usefor(am2_r_Maquina2, 1, this, P_P3_arriving, Step 7, am_localargs, ToModelTime(2.5000000000000000, UNITMINUTES));
Label7: ; /* Step 7 */
		}
		{
			while (am2_Flag_reserva_M3 == 1) {
				{
					if (waitfor(ToModelTime(0.10000000000000001, UNITSECONDS), this, P_P3_arriving, Step 8, am_localargs) == Delayed)
						return Delayed;
Label8: ; /* Step 8 */
				}
			}
		}
		{
			am2_Flag_reserva_M3 = 1;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P3_arriving, Step 9, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq2, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label9: ; /* Step 9 */
		}
		{
			am2_Flag_reserva_M2 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P3_arriving, Step 10, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq3, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label10: ; /* Step 10 */
		}
		{
			pushppa(this, P_P3_arriving, Step 11, am_localargs);
			pushppa(this, inqueue, Step 1, am2_qE_Maq3);
			return Continue; /* go move into territory */
Label11: ; /* Step 11 */
		}
		{
			return usefor(am2_r_Maquina3, 1, this, P_P3_arriving, Step 12, am_localargs, ToModelTime(1.0000000000000000, UNITMINUTES));
Label12: ; /* Step 12 */
		}
		{
			pushppa(this, P_P3_arriving, Step 13, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Maq3, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; /* go move into territory */
Label13: ; /* Step 13 */
		}
		{
			pushppa(this, P_P3_arriving, Step 14, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_agv1.am_cp_Saisa, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; /* go move to location */
Label14: ; /* Step 14 */
		}
		{
			am2_Flag_reserva_M3 = 0;
			EntityChanged(0x01000000);
		}
		{
			pushppa(this, P_P3_arriving, Step 15, am_localargs);
			pushppa(this, inqueue, Step 1, am2_q3);
			return Continue; /* go move into territory */
Label15: ; /* Step 15 */
		}
		{
			pushppa(this, P_P3_arriving, Step 16, am_localargs);
			pushppa(this, inqueue, Step 1, am2_QF);
			return Continue; /* go move into territory */
Label16: ; /* Step 16 */
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_P3_arriving */



/* init function for code.m */
void
model_code_init(struct model_struct* data)
{
	data->am_P_configuracao->aprc = P_configuracao_arriving;
	data->am_P_P1->aprc = P_P1_arriving;
	data->am_P_P2->aprc = P_P2_arriving;
	data->am_P_P3->aprc = P_P3_arriving;
}

