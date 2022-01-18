
#include "joystick.h"
#include "ads1115.h"

joystickParams_typedef jParams;


float Read_Joystick_X(void)
{
//	float temp_x;
	float joystick_x;
	

//	for(int i=0;i<100;i++){
//		
//		
//	jParams.Scale_Data[i] = ((Read_Ads1115(2))-1660)*(200.0/1660.0);
//		
//	temp_x += jParams.Scale_Data[i];
//	
//	}
//	joystick_x = temp_x/100;
	

	joystick_x = ((Read_Ads1115(2))-1297)*(200.0/1297.0);
	HAL_Delay(50);
	
	return ((joystick_x-200));
	
}

float Read_Joystick_Y(void)
{
	//float temp_y;
	float joystick_y;

//	for(int i=0;i<1000;i++){
//	jParams.Scale_Data[i] = ((Read_Ads1115(1))-1640)*(200.0/1640.0);
//		
//	temp_y += jParams.Scale_Data[i];
//			
//	}
//	joystick_y = temp_y/1000;
	
	joystick_y = ((Read_Ads1115(1))-1285)*(200.0/1285.0);
	HAL_Delay(50);
	
	return ((joystick_y-200));
	
}


