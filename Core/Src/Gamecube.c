#include "Gamecube.h"
#include <stdbool.h>


void new_gc(Gamecube *gc){
	gc->A = false;
	gc->B = false;
	gc->X = false;
	gc->Y = false;
	gc->START = false;
	gc->L = false;
	gc->R = false;
	gc->Z = false;
	gc->D_UP = false;
	gc->D_LEFT = false;
	gc->D_RIGHT = false;
	gc->D_UP = false;

	gc->JOYSTICK_X = 0;
	gc->JOYSTICK_Y = 0;
	gc->C_STICK_X = 0;
	gc->C_STICK_Y = 0;
	gc->LEFT_TRIGGER = 0;
	gc->RIGHT_TRIGGER = 0;

	gc->data_pin = 0;
	gc->_rumble = false;

}

void print_properties(Gamecube *gc){
	char str[50];
	fprintf(str, "X: %d\0", gc->X);
	// printf(str);

	TX4_print(str);
}


int get_device_id(Gamecube *gc){

}


void rumble(Gamecube *gc, bool r){

}
