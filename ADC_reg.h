/*
 * ADC_reg.h
 *
 * Created: 5/25/2024 11:45:15 AM
 *  Author: ahmed
 */ 


#ifndef ADC_REG_H_
#define ADC_REG_H_

#include "STD_TYPE.h"



#define ACSR_REG      *((volatile u8*)0x28)

#define ADMUX_REG     *((volatile u8*)0x27)

#define ADCSRA_REG    *((volatile u8*)0x26)

#define ADC_REG       *((volatile u16*)0x24) // Register for ADCH & ADCL



#endif /* ADC_REG_H_ */