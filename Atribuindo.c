#include <string.h>
#include<stdlib.h>


int main(void) {
  int tamanho, contResposta = 0,cont;
  char gabarito[100];
  char resposta[100];

  scanf("%d", &tamanho);

  while(1){
    scanf(" %[^\n]s",gabarito);
    for (int i = 0, posicao = 0; i < strlen(gabarito); i++, posicao++) {
        if (gabarito[posicao] == ' ') posicao++;
        gabarito[i] = gabarito[posicao];
    }
    if(strlen(gabarito) != tamanho)
      printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
    else break;
  }


  while(1){
    scanf(" %[^\n]s",resposta);
    if(strcmp(resposta, "sair") == 0) break;

    for (int i = 0, posicao = 0; i < strlen(resposta); i++, posicao++) {
      if (resposta[posicao] == ' '){
          posicao++;
          cont++;
      }
      resposta[i] = resposta[posicao];
    }
    if (cont != (tamanho-1)) printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
    else if(strlen(resposta) != strlen(gabarito)){
      printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
    }
    
    else {
      for(int i = 0; i < tamanho; i++){
        if(gabarito[i] == resposta[i]){
            contResposta += 1;
        }
      }
      float porcentagemAcertos = 0.0;
      porcentagemAcertos = (contResposta * 100.0)/tamanho;
      printf("Percentual de acertos: %.1f", porcentagemAcertos);
      break;
    }
  }
  return 0;
}