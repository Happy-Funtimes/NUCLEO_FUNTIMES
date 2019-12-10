#include "Gamecube.h"
#include <stdbool.h>
#include "main.h"
#include <stdio.h>

void reverse_array(uint32_t *arr, uint8_t count) {
    int temp, i;
    for (i = 0; i < count/2; ++i) {
        temp = arr[count-i-1];
        arr[count-i-1] = arr[i];
        arr[i] = temp;
    }
}


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
	/*
	char str[50];
	fprintf(str, "X: %d\0", gc->X);
	// printf(str);

	TX4_print(str);
	*/
}


int get_device_id(Gamecube *gc){

    uint32_t start_sequence[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int num_bits = 2 * 8;
    uint32_t data[num_bits];
    int ret_val;

    gc_write_read(start_sequence, 8, data, num_bits);

    for (int i=0; i < num_bits; i++) {
        ret_val <<= 1;
        ret_val |= data[i];
    }

#ifdef DEBUG
    for (int i=0; i < num_bits; i++) {
        pc.printf("%d", data[i]!=0);
        if (i>0 && (i+1)%8 == 0) {
            pc.printf(" ");
        }
    }
    pc.printf("\n\r");
#endif

    return ret_val;

	// return 0x0900;
}


void print_id(Gamecube *gc){
	char dev_id[50];
	sprintf(dev_id, "This device has an ID of 0900");
	TX4_print(dev_id);
}


void rumble(Gamecube *gc, bool r){

}
