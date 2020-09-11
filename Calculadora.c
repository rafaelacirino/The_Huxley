#include <stdio.h>
#include <string.h>

int main(void) {
  float num1;
  float num2;
  char resp[20];

  scanf("%f", &num1);
  scanf("%f", &num2);
  scanf("%s", resp);
  
  if(strcmp(resp, "multiplicacao") == 0){
    printf("resultado = %.2f", (num1 * num2));
  }
  else if(strcmp(resp, "divisao") == 0){
    printf("resultado = %.2f", (num1 / num2));
  }
  else if(strcmp(resp, "soma") == 0){
    printf("resultado = %.2f", (num1 + num2));
  }
  else{
    printf("resultado = %.2f", (num1 - num2));
  }


  return 0;
}