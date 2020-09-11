#include <stdio.h>

int main() {
  int tam;

  scanf("%d", &tam);
  int mat[tam][tam];
  for(int i = 0; i < tam; i++){
    for(int j= 0; j < tam; j++){
      scanf("%d", &mat[i][j]);
      if (mat[i][j] < 0){
        mat[i][j] *= 2;
      }
    }
  }
  for (int i = 0 ; i < tam ; i++){
    for (int j = 0; j < tam ; j++){
      if(j == (tam - 1)){
        printf("%d", mat[j][i]);
      }
      else{
        printf("%d ", mat[j][i]);
      }
    }
    printf("\n");
    }

  return 0;
}