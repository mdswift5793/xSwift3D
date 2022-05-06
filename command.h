#ifndef COMMAND_H
#define COMMAND_H 0x0001
#include "game_actor.h"

void jump(game_actor *a){
    a->move(UP);
}
void move_left(game_actor *a){
    a->move(LEFT);
}
void move_right(game_actor *a){
    a->move(RIGHT);
}
void crouch(game_actor *a){
    a->move(DOWN);
}

typedef void (*execute)(game_actor *a);
typedef struct command {
    execute execute;
} command;

command JUMP {jump};
command MOVE_LEFT {move_left};
command MOVE_RIGHT {move_right};
command CROUCH {crouch};

#endif
