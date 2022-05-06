#ifndef INPUT_H
#define INPUT_H
#include "command.h"

command* KEY_W = &JUMP;
command* KEY_A = &MOVE_LEFT;
command* KEY_S = &MOVE_RIGHT;
command* KEY_D = &CROUCH;

typedef void (*input_t)();
typedef struct input {
    input_t poll;

} input;

#endif