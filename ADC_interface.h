/*
 * ADC_interface.h
 *
 * Created: 5/25/2024 11:44:53 AM
 *  Author: ahmed
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#include "STD_TYPE.h"


/********* Select Prescalar **************/

#define DIVISION_2       1  
#define DIVISION_4		 2 
#define DIVISION_8       3
#define DIVISION_16      4
#define DIVISION_32      5
#define DIVISION_64      6
#define DIVISION_128     7

/********* Select ADC Channel **************/

#define ADC0             0
#define ADC1             1
#define ADC2             2
#define ADC3             3
#define ADC4             4
#define ADC5             5
#define ADC6             6
#define ADC7             7

/******* To Reduce Power Consumtion ************/

#define ADC_PRESCALER  DIVISION_128

/********* ADC Mode Selection ***************/

#define POLLING         0
#define INTERRUPT       1
#define ADCMODE         INTERRUPT

/******* ADC converstion Value ***********/



void ADC_voidInit(void);

u16 ADC_u16ReadChannel(u8 copy_u8channel);

void ADC_voidSetCallBack(void(*ptr)(void));

#endif /* ADC_INTERFACE_H_ */