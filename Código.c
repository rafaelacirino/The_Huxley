#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  char letras[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char frase[100];
  char significado[100];
    
  for (int i = 0; i < 40; i++){
    significado[i] = '\0';
  }
    
  while(1){
    int i, cont = 0;
    char *aux;
        
        
    gets(frase);
    
    aux = strtok(frase," ");
        
    while(aux != NULL){
      i = atoi(aux);
      significado[cont]= letras[i];
      aux = strtok(NULL," ");
      cont++;
    }
        
    if(strcmp(significado,"fim") == 0){
      break;
    }
    else{
      printf("%s\n", significado);
      for (int i = 0; i < 40; i++){
        significado[i] = '\0';
      }
    }
  }

  return 0;
}