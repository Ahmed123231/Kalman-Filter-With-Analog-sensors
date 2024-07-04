/*
 * LCD_interface.h
 *
 * Created: 5/11/2024 11:48:36 PM
 *  Author: Ahmed Atef
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


#define  _4_BITMODE    0
#define  _8_BITMODE    1


#define  LCD_MODE    _4_BITMODE



/************* LCD initialization Function 8-bit Mode*************/

void LCD_voidInit(void);

/************* LCD initialization Function 8-bit Mode*************/

void LCD_voidInit_4bit_Mode(void);

/************* LCD Command Send Function *************/

void LCD_voidSendCommand(u8 copy_u8command);

/************* LCD Command Send 4bit-Mode  Function *************/

void LCD_voidSendCommand_4Bit_Mode(u8 copy_u8command);

/************* LCD Data Send Function *************/

void LCD_voidSendData(u8 copy_u8data);


/************* LCD Data Send 4Bit-Mode Function *************/

void LCD_voidSendData_4Bit_Mode(u8 copy_u8data);

/************* LCD String Display Function *************/

void LCD_voidSendString(u8 *copy_u8data);

/************* LCD String Display 4bit-Mode Function *************/

void LCD_voidSendString_4Bit_Mode(u8 *copy_u8data);


/************* LCD Number Display Function *************/

void LCD_voidSendNum(u16 copy_u8data);


/************* LCD Number Display Function *************/

void LCD_voidSendNum_4Bit_Mode(u8 copy_u8data);


/************* LCD Cursor Position Function *************/

void LCD_voidSetCursorPos(u8 copy_u8row ,u8 copy_u8column);

/************* LCD Cursor Position 4bit-Mode Function *************/

void LCD_voidSetCursorPos_4Bit_Mode(u8 copy_u8row ,u8 copy_u8column);


/************* LCD ZigZag Display Function *************/

void LCD_voidZigZagDisp(u8 *copy_u8data);


/************* LCD ZigZag Display Function *************/

void LCD_voidZigZagDisp_4Bit_Mode(u8 *copy_u8data);

/************* Function so send the lower nibble of Data ****/
void  LCD_voidSendLowerNibble(u8 copy_u8data);

/****** Function to Set Enable Pin ************/

void LCD_voidSetEnable(void);

/********** Function to Set Grid position on LCD ****/

void LCD_SetGridPos(u8 copy_u8column , u8 copy_u8row);


/********** Function To Draw shape On CGRAM ****/

void LCD_voidDrawShape(u8 *data , u8 pattern ,u8 copy_u8column ,u8 copy_u8row);

#endif /* LCD_INTERFACE_H_ */