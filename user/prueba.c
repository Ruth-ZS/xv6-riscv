#include "kernel/types.h"
#include "user/user.h"

int main(void) {
  for (int i = 0; i < 20; i++) {
    int pid = fork();
    if (pid < 0) {
      printf("Error: ha fallado %d\n", i);
      exit(1);
    }
    if (pid == 0) {  
      printf("Ejecutando proceso %d\n", i);
      sleep(10);  
      printf("Proceso %d terminado\n", i);
      exit(0);
    }
    
 
    sleep(2);
  }

 
  for (int i = 0; i < 20; i++) {
    wait(0);  
  
  printf("Todos los procesos hijos han terminado.\n");
  exit(0);
}
}