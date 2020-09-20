#include <stdio.h>
#include <stdlib.h>

int tamanho(char *str){
	int i;

	for(i=0; str[i] != '\0'; i++);
	
  return i;
}

void maiuscula(char *str){
  int i;
    
  for(i=0; str[i]!='\0'; i++){
    if(str[i] > 96 && str[i] < 123){
      str[i]-=32;
    }
  }
}

int tam(char *str, char *str2){
	int i;

	if(str == NULL){		
		return 0;    			
	}
  else if(tamanho(str) != tamanho(str2)){
		return 0;
	}
  else{
		for(i=0; i<tamanho(str); i++){			
			if(str[i] != str2[i]){
				return 0;
      }    
		}
	}

	return 1;
}

char *concatenar(char *dest, char *concat){
	char *pal = (char*) malloc(tamanho(dest) + tamanho(concat) + 1);
	char *res = pal;
	
  for (; *dest ; *pal++ = *dest++);
	for (; *concat ; *pal++ = *concat++);
	*pal = '\0';
	
  return res;  
}

void espaco(char *str){
	char c;
	
  while(c != 10){
		scanf("%c", &c);
		if(c!=10){
			*str = c;
			str++;
		}
	}
	*str = '\0';
}

int main(){
	int i, tamtexto=1;
	char *entrada = (char*) malloc(sizeof(char) * 76);
	char *frase  = (char*) calloc('\0',sizeof(char));	
	
  for(i=0; 1; i++){		
		espaco(entrada);		
		if(tam(entrada, "the end!")){
			break;
		}
    else{
			maiuscula(entrada);			
			tamtexto += (sizeof(char) * tamanho(entrada));
			frase = (char*) realloc(frase, tamtexto);
			if(tamanho(frase) > 0){
				frase = concatenar(frase, "\n");
				frase = concatenar(frase,entrada);
			}else{
				frase = concatenar(frase,entrada);
			}
		}
	}
	printf("%s", frase);
	free(entrada);
	free(frase);
	
  return 0;
}