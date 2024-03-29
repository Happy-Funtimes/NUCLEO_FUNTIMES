#ifndef GAMECUBE_H
#define GAMECUBE_H

#include <stdint.h>
#include <stdbool.h>
// #include <mbed.h>

//================================================================================
// Gamecube
//================================================================================

// gamecube controller device status ids
#define NINTENDO_DEVICE_GC_WIRED 0x0900

typedef struct Gamecube{
    bool A;
    bool B;
    bool X;
    bool Y;
    bool START;
    bool L;
    bool R;
    bool Z;
    bool D_UP;
    bool D_DOWN;
    bool D_LEFT;
    bool D_RIGHT;

    int JOYSTICK_X;
    int JOYSTICK_Y;
    int C_STICK_X;
    int C_STICK_Y;
    int LEFT_TRIGGER;
    int RIGHT_TRIGGER;

    // DigitalOut data_line; // Needs mbed.h probably
    int data_pin;
    bool _rumble;
}Gamecube;


// Gamecube(PinName _data_line);
void new_gc(Gamecube *gc);
int get_device_id(Gamecube *gc);
void rumble(Gamecube *gc, bool r);
void update(Gamecube *gc);

void print_id(Gamecube *gc);
void print_properties(Gamecube *gc);
// void gc_write_read(uint32_t* wbuff, uint8_t wbuff_len, uint32_t *rbuff, uint8_t rbuff_len);
// void rumble(bool r);
// void update(void);

/*
class Gamecube{
public:
    Gamecube(PinName _data_line);
    int get_device_id();
    void gc_write_read(uint32_t* wbuff, uint8_t wbuff_len, uint32_t *rbuff, uint8_t rbuff_len);
    void rumble(bool r);
    void update(void);

    bool A;
    bool B;
    bool X;
    bool Y;
    bool START;
    bool L;
    bool R;
    bool Z;
    bool D_UP;
    bool D_DOWN;
    bool D_LEFT;
    bool D_RIGHT;

    int JOYSTICK_X;
    int JOYSTICK_Y;
    int C_STICK_X;
    int C_STICK_Y;
    int LEFT_TRIGGER;
    int RIGHT_TRIGGER;

private:
    DigitalOut data_line;
    bool _rumble;
};*/
#endif // include guard
