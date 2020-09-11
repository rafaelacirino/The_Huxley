#include <stdio.h>
#include <stdlib.h>
	 
struct passageiro{
	  int numeroPassagem;
    char data[11];
    char localSaida[100];
	  char localChegada[100];
	  char horario[6];
	  int poltrona;
	  int idade;
    char nome[100];
};
	 
typedef struct passageiro passageiros;
	 
int main(void) {
  char nomesPassageiros[23][100];
  int idades[23];
  int idadesPassageiros = 0;
  int pos = 0;
  int mediaIdade = 0;
	   
	while(1){
    passageiros passageiros;
    scanf("%d", &passageiros.numeroPassagem);
    if(passageiros.numeroPassagem == - 1)break;
    scanf("%s", passageiros.data);
    scanf(" %[^\n]s", passageiros.localSaida);
    scanf(" %[^\n]s", passageiros.localChegada);
    scanf("%s", passageiros.horario);
    scanf("%d", &passageiros.poltrona);
    scanf("%d", &passageiros.idade);
    scanf(" %[^\n]s", passageiros.nome);

    if (passageiros.poltrona % 2 == 0){  
      strcpy(nomesPassageiros[pos], passageiros.nome);   
      idades[pos] = passageiros.idade;
    }
    idadesPassageiros += passageiros.idade;
    pos++;
	} 
  mediaIdade = idadesPassageiros/pos;
  for(int i = 0; i < pos; i++){
    if (idades[i] > mediaIdade)
     printf("%s\n",nomesPassageiros[i]);
  }
	return 0;
}