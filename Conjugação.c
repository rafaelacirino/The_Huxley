#include <stdio.h>
#include <string.h>

int main(void) {
  char verbo[20];
  char verbof[19];
  char verbog[40];

  scanf("%s", verbo);
  
  int ultimo = strlen(verbo) - 1;

  for(int i = 0; i < ultimo; i++){
    verbof[i]= verbo[i];
    verbog[i] = verbof[i];
  }
 
  printf("%s %s", verbof, strcat(verbog,"ndo"));
  
  return 0;
}