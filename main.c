#include "xswift_utils.h"

int main(int argc, char *argv[]){
  init();
  command *command = handle_input();
  if(command != NULL){
    command->execute(player);
  }
}
