#ifndef INPUT_H
#define INPUT_H 0x0004
#include "command.h"
#include <stdio.h>

command *KEY_W = &JUMP;
command *KEY_A = &MOVE_LEFT;
command *KEY_S = &MOVE_RIGHT;
command *KEY_D = &CROUCH;

command *handle_input(){
  if(getchar() == 'w') return KEY_W;
  if(getchar() == 'a') return KEY_A;
  if(getchar() == 's') return KEY_S;
  if(getchar() == 'd') return KEY_D;
}
#endif
