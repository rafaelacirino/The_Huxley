#include <stdio.h>
#include <stdlib.h>


int main(){
  char str[50];

  scanf("%s",str);

  char significado[] = "Aquilo que ";
  strcat(significado,str);
  
  for(int i = 0; i < strlen(significado) - 3;i++){
    printf("%c",significado[i]);
  }
  printf(".");
  return 0;
}