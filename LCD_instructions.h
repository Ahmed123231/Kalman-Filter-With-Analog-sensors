/*
 * LCD_instructions.h
 *
 * Created: 5/12/2024 9:04:13 AM
 *  Author: ahmed
 */ 


#ifndef LCD_INSTRUCTIONS_H_
#define LCD_INSTRUCTIONS_H_

/********* LCD Function Set Instructions ****************/
#define LCD_Function_Set_8_bit_Font_5x7                   0b00110000  //0x30
#define LCD_Function_Set_8_bit_Font_5x7_2Line             0b00111000	//0x38
#define LCD_Function_Set_8_bit_Font_5x10                  0b00110100	//0x34
#define LCD_Function_Set_8_bit_Font_5x10_2Line            0b00111100	//0x3C
																		
																		
/********* LCD Display On/Off Instructions ****************/			
#define LCD_Display_On_Off_ON_Cursor_On_Char_Blink		  0b00001111	//0x0F
#define LCD_Display_On_Off_ON_Cursor_Off_Char_Blink		  0b00001101	//0x0D
#define LCD_Display_On_Off_ON_Cursor_On_Char_NO_Blink	  0b00001110	//0x0E
#define LCD_Display_On_Off_ON_Cursor_Off_Char_NO_Blink	  0b00001100	//0x0C
               /* Display Off */						  				
#define LCD_Display_On_Off_Off_Cursor_On_Char_Blink		  0b00001011	//0x0B
#define LCD_Display_On_Off_Off_Cursor_Off_Char_Blink	  0b00001001	//0x09
#define LCD_Display_On_Off_Off_Cursor_On_Char_NO_Blink	  0b00001010	//0x0A
#define LCD_Display_On_Off_Off_Cursor_Off_Char_NO_Blink	  0b00001000	//0x08
																	
/********* LCD Entry Mode Set Instructions ****************/		
#define LCD_Entry_Mode_8_bit_Cursor_R_Display_Shift       0b00000111	//0x07
#define LCD_Entry_Mode_8_bit_Cursor_L_Display_Shift	      0b00000101	//0x05
#define LCD_Entry_Mode_8_bit_Cursor_R_Display_No_Shift    0b00000110	//0x06
#define LCD_Entry_Mode_8_bit_Cursor_L_Display_No_Shift    0b00000100	//0x04
																		
/********* LCD Cursor Display Shift Instructions ****************/		
																		
#define LCD_Cusor_R			                              0b00010100	//0x14
#define LCD_Cusor_L							              0b00010000	//0x10
#define LCD_Display_R									  0b00011100	//0x1C
#define LCD_Display_L							          0b00011000	//0x18

/**********************************/
#define LCD_Go_Home                                       0x02
#define LCD_GO_1st_Line								      0x80

#endif /* LCD_INSTRUCTIONS_H_ */