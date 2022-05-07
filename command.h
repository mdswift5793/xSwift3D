#ifndef COMMAND_H
#define COMMAND_H 0x0001
#include "gameactor.h"
#include "vector.h"

void jump(struct game_actor *a){
    a->move(&UP);
}
void move_left(struct game_actor *a){
    a->move(&LEFT);
}
void move_right(struct game_actor *a){
    a->move(&RIGHT);
}
void crouch(struct game_actor *a){
    a->move(&DOWN);
}

typedef void (*execute)(struct game_actor *a);
typedef struct command {
    execute execute;
} command;

command JUMP = {jump};
command MOVE_LEFT = {move_left};
command MOVE_RIGHT = {move_right};
command CROUCH = {crouch};

#endif
