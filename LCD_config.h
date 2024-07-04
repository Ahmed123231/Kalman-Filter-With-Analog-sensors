/*
 * LCD_config.h
 *
 * Created: 5/11/2024 11:48:54 PM
 *  Author: ahmed
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


/********** LCD Control Pins **********/

#define LCD_CPORT	                                  DIO_PORTB					                                  
#define LCD_RS_PIN                                    DIO_PIN1
#define LCD_RW_PIN	                                  DIO_PIN2
#define LCD_EN_PIN	                                  DIO_PIN3		

/********** LCD Mode Select *******************/

#if     LCD_MODE == _8_BITMODE	           
#define LCD_DPORT	                                  DIO_PORTA

/***********/
#elif   LCD_MODE == _4_BITMODE

#define LCD_DPORT                                     DIO_PORTA
#define	LCD_D4_PIN									  DIO_PIN4
#define LCD_D5_PIN									  DIO_PIN5
#define	LCD_D6_PIN									  DIO_PIN6
#define	LCD_D7_PIN									  DIO_PIN7

#endif

#endif /* LCD_CONFIG_H_ */