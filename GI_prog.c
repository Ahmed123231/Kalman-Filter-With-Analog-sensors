/*
 * GI_prog.c
 *
 * Created: 5/21/2024 6:07:11 PM
 *  Author: ahmed
 */ 


#include "BIT_MATH.h"
#include "STD_TYPE.h"

#include "GI_reg.h"

/*************** Function to enable global interrupt ******************/

void GI_voidEnable(void){
	
	
	SET_BIT(SREG,7);
	
	
}


/*************** Function to disable global interrupt ******************/
void GI_voidDisable(void){
	
	CLR_BIT(SREG,7);
	
}