#include <stdio.h>

int main(void) {
  int NComp, MVolta;
  scanf("%d %d", &NComp, &MVolta);

  int matriz[NComp][MVolta];
  int soma = 0;
  int tempoVenc = 0;
  int venc = 0;

  for(int linha = 0; linha < NComp; linha ++){
    soma = 0;
    for(int coluna = 0; coluna < MVolta; coluna++){
      scanf("%d", &matriz[linha][coluna]);
      soma+= matriz[linha][coluna];
    }
    if (linha == 0){
      tempoVenc = soma;
    }
    else if (linha != 0 ){
      if (soma < tempoVenc){
        tempoVenc = soma;
        venc = linha;
      }
    }

  }
  printf("%d", venc + 1);
  return 0;
}