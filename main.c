/*
 * Kalman_Test.c
 *
 * Created: 6/27/2024 6:13:28 AM
 * Author : ahmed
 */ 

#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "ADC_interface.h"
#include "ADC_reg.h"
#include "DIO_interface.h"
#include "GI_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"

static u8 Temprature=0;
void Get_Temp_Val(void);

typedef struct {
	float Q;  // Process noise covariance
	float R;  // Measurement noise covariance
	float x;  // Value
	float P;  // Estimation error covariance
	float K;  // Kalman gain
} KalmanFilter;

// Initialize Kalman filter


void Kalman_Init(KalmanFilter *kf, float Q, float R, float initial_value) {
	
	kf->Q = Q;
	kf->R = R;
	kf->x = initial_value;
	kf->P = 1.0;
}

// Apply Kalman filter
float Kalman_Update(KalmanFilter* kf, float measurement) {
	// Prediction update
	kf->P = kf->P + kf->Q;  //P=P+Q
	// Measurement update
	kf->K = kf->P / (kf->P + kf->R); //K=P/(P+R)
	kf->x = kf->x + kf->K * (measurement - kf->x);//X=X+K(Z-X)
	kf->P = (1 - kf->K) * kf->P;//P=(1-K)P
	return kf->x;
}



int main(void)
{
	/******** LCD Initialization ************/ 
    DIO_voidSetPortDir(LCD_DPORT,0xF0);
	DIO_voidSetPortDir(LCD_CPORT,0x0E);
	LCD_voidInit();
	/****** Global Interrupt Enable ********/
	GI_voidEnable();
	/****** Analog To Digital Converter Initialization *******/
	ADC_voidInit();
	// ADC call back Function
	ADC_voidSetCallBack(Get_Temp_Val);
	/****** Kalman Filter Initialization *********************/
	KalmanFilter kf;
	Kalman_Init(&kf, 0.1, 5.0, 0.0);
	float filtered_temp =0;
	
	
    while (1) 
    {
		filtered_temp = Kalman_Update(&kf,Temprature);
		LCD_SetGridPos(0,0);
		LCD_voidSendString("Non-Filtered:");
		LCD_SetGridPos(13,0);
		LCD_voidSendNum(Temprature);
		LCD_SetGridPos(0,1);
		LCD_voidSendString("Filtered:");
		LCD_SetGridPos(10,1);
		LCD_voidSendNum(filtered_temp);
		
    }
}

void Get_Temp_Val(void){
	
	Temprature=((ADC_REG*500)/1023);
	
}