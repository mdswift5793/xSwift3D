#ifndef GAMEACTOR_H
#define GAMEACTOR_H 0x0003
#define MAX_NUM 128
#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

struct game_actor *player;
struct game_actor *actors[MAX_NUM];

typedef void (*move)(struct vector *v);
typedef struct game_actor {
    char* tag;
    struct vector *world_position;
    move move;
} game_actor;

void init(){
    player = malloc(sizeof(game_actor));
}

game_actor set_actor(char* id){
    player->tag == id;
}

game_actor *get_actor(){
    return player;
}

void move_char(struct vector *v){
  char* str = "Congratulations, your character moved!";
  printf("%s\n", str);
}

#endif
