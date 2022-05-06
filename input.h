#ifndef INPUT_H
#define INPUT_H
#include "command.h"

command* KEY_W = &JUMP;
command* KEY_A = &MOVE_LEFT;
command* KEY_S = &MOVE_RIGHT;
command* KEY_D = &CROUCH;

void handle_input(){
  if(getchar() == 'w') return KEY_W;
  if(getchar() == 'a') return KEY_A;
  if(getchar() == 's') return KEY_S;
  if(getchar() == 'd') return KEY_D;
}
#endif
