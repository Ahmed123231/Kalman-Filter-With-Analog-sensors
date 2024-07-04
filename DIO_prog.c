/*
 * DIO_prog.c
 *
 * Created: 5/10/2024 3:22:28 PM
 *  Author: Ahmed Atef
 */ 
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "DIO_reg.h"
/************* Pin Direction Set Function *************/
void DIO_voidSetPinDir(u8 copy_u8port , u8 copy_u8pin ,u8 copy_u8dir){
	
	if(copy_u8dir == OUTPUT){
		switch(copy_u8port){
			
			case DIO_PORTA : SET_BIT(DDRA_REG,copy_u8pin) ; break;
			case DIO_PORTB : SET_BIT(DDRB_REG,copy_u8pin) ; break;
			case DIO_PORTC : SET_BIT(DDRC_REG,copy_u8pin) ; break;
			case DIO_PORTD : SET_BIT(DDRD_REG,copy_u8pin) ; break;
			
		}
	}
	else if (copy_u8dir == INPUT){
		switch(copy_u8port){
			
			case DIO_PORTA : CLR_BIT(DDRA_REG,copy_u8pin) ; break;
			case DIO_PORTB : CLR_BIT(DDRB_REG,copy_u8pin) ; break;
			case DIO_PORTC : CLR_BIT(DDRC_REG,copy_u8pin) ; break;
			case DIO_PORTD : CLR_BIT(DDRD_REG,copy_u8pin) ; break;
			
		}
				
	}
}

/************* Pin Value Set Function *************/

void DIO_voidSetPinVal(u8 copy_u8port , u8 copy_u8pin ,u8 copy_u8val){
	if(copy_u8val == HIGH){
		
		switch(copy_u8port){
			case DIO_PORTA : SET_BIT(PORTA_REG,copy_u8pin) ; break;
			case DIO_PORTB : SET_BIT(PORTB_REG,copy_u8pin) ; break; 
			case DIO_PORTC : SET_BIT(PORTC_REG,copy_u8pin) ; break; 
			case DIO_PORTD : SET_BIT(PORTD_REG,copy_u8pin) ; break;  
		}
		
	}
	else if(copy_u8val == LOW){
		
		switch(copy_u8port){
			case DIO_PORTA : CLR_BIT(PORTA_REG,copy_u8pin) ; break;
			case DIO_PORTB : CLR_BIT(PORTB_REG,copy_u8pin) ; break;
			case DIO_PORTC : CLR_BIT(PORTC_REG,copy_u8pin) ; break;
			case DIO_PORTD : CLR_BIT(PORTD_REG,copy_u8pin) ; break;
		}
	}
	
}

/************* Pin Get Value Function *************/

u8	 DIO_u8GetPinVal(u8 copy_u8port , u8 copy_u8pin){
	
	u8 Loc_u8value=0;
	
	switch(copy_u8port){
		
		case DIO_PORTA : Loc_u8value = GET_BIT(PINA_REG ,copy_u8pin); break;
		case DIO_PORTB : Loc_u8value = GET_BIT(PINB_REG ,copy_u8pin); break;
		case DIO_PORTC : Loc_u8value = GET_BIT(PINC_REG ,copy_u8pin); break;
		case DIO_PORTD : Loc_u8value = GET_BIT(PIND_REG ,copy_u8pin); break;
	}
	return Loc_u8value ;
	
}

/************* Port Direction set Function *************/

void DIO_voidSetPortDir(u8 copy_u8port , u8 copy_u8dir){
	
	
		
		switch(copy_u8port){
			
			case DIO_PORTA : DDRA_REG = copy_u8dir ; break ;
			case DIO_PORTB : DDRB_REG = copy_u8dir ; break ;
			case DIO_PORTC : DDRC_REG = copy_u8dir ; break ;
			case DIO_PORTD : DDRD_REG = copy_u8dir ; break ;
		}		
}


/************* Port Value set Function *************/

void DIO_voidSetPortVal(u8 copy_u8port , u8 copy_u8val){
	
	
		
		switch(copy_u8port){
			
			case DIO_PORTA : PORTA_REG = copy_u8val ; break;
			case DIO_PORTB : PORTB_REG = copy_u8val ; break;
			case DIO_PORTC : PORTC_REG = copy_u8val ; break;
			case DIO_PORTD : PORTD_REG = copy_u8val ; break;
		}
	

}