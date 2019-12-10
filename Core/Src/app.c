

#include "Gamecube.h"
#include "string.h"
#include "main.h"
#include "app.h"



void main_fn(void){
	Gamecube gc;
	new_gc(&gc);
	while (1){

		  // HAL_UART_Transmit(&huart4, (uint8_t*)msg, strlen(msg), 0xFFFF);
		  // TX4_print("Nyanpasu!");
		  print_id(&gc);
		  HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
		  // HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
		  // HAL_GPIO_TogglePin(LED_Y_GPIO_Port, LED_Y_Pin);
		  HAL_Delay(100);
	  }
}


