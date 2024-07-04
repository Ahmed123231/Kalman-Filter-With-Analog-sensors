/*
 * ADC_prog.c
 *
 * Created: 5/25/2024 11:45:28 AM
 *  Author: ahmed
 */ 

#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "ADC_interface.h"
#include "ADC_reg.h"
#include "INT_Vector.h"

static void(*ADC_Ptr)(void)=0;


void ADC_voidInit(void){
	
	#if  ADCMODE == POLLING
	/********* VREF Selection ***************/
	SET_BIT(ADMUX_REG,6);
	CLR_BIT(ADMUX_REG,7);
	
	/************ Selecting Prescaler *************/
	ADCSRA_REG &= 0b11111000;
	ADCSRA_REG |= ADC_PRESCALER;
	
	/***** Enable ADC *******/
	SET_BIT(ADCSRA_REG,7);
	
	#elif ADCMODE ==INTERRUPT
	
	/********* VREF Selection ***************/
	SET_BIT(ADMUX_REG,6);
	CLR_BIT(ADMUX_REG,7);
	
	/************ Selecting Prescaler *************/
	ADCSRA_REG &= 0b11111000;
	ADCSRA_REG |= ADC_PRESCALER;
	
	
	/***** Enable ADC *******/
	SET_BIT(ADCSRA_REG,7);
	/********** Start Conversion ********/
	SET_BIT(ADCSRA_REG ,3);
	SET_BIT(ADCSRA_REG ,5);
	SET_BIT(ADCSRA_REG ,6);
	
	#endif
}

u16 ADC_u16ReadChannel(u8 copy_u8channel){
	/***** Secting ADC Channel **********/
	
	ADMUX_REG &= 0b11100000;
	ADMUX_REG |= copy_u8channel;
	
	/********** Start Conversion ********/
	
	SET_BIT(ADCSRA_REG ,6);
	while(GET_BIT(ADCSRA_REG,4)==0);
	SET_BIT(ADCSRA_REG,4);  // CLR Flag 
	
	return ADC_REG;
	
}





void ADC_voidSetCallBack(void(*ptr)(void)){
	
	ADC_Ptr=ptr;
	
	
	
}

ISR(_ADC){
	
	ADC_Ptr();
	
}