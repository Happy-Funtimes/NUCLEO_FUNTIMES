#include "Gamecube.h"


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

	gc->_rumble = false;
}
