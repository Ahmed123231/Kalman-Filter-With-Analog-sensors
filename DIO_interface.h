/*
 * DIO_interface.h
 *
 * Created: 5/10/2024 3:21:48 PM
 *  Author: Ahmed Atef 
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/* DIRECTION */

#define OUTPUT        1
#define INPUT         0

/* VALUE */

#define HIGH          1
#define LOW           0

/*************             PORTS            *************/

#define DIO_PORTA     0
#define DIO_PORTB     1
#define DIO_PORTC     2
#define DIO_PORTD     3

/*************             PINS            *************/

#define DIO_PIN0      0
#define DIO_PIN1      1
#define DIO_PIN2      2
#define DIO_PIN3      3
#define DIO_PIN4      4
#define DIO_PIN5      5
#define DIO_PIN6      6
#define DIO_PIN7      7




/************* Pin Direction Set Function *************/

void DIO_voidSetPinDir(u8 copy_u8port , u8 copy_u8pin ,u8 copy_u8dir);

/************* Pin Value Set Function *************/

void DIO_voidSetPinVal(u8 copy_u8port , u8 copy_u8pin ,u8 copy_u8val);

/************* Pin Get Value Function *************/

u8	 DIO_u8GetPinVal(u8 copy_u8port , u8 copy_u8pin);

/************* Port Direction set Function *************/

void DIO_voidSetPortDir(u8 copy_u8port , u8 copy_u8dir);

/************* Port Value set Function *************/

void DIO_voidSetPortVal(u8 copy_u8port , u8 copy_u8val);

#endif /* DIO_INTERFACE_H_ */