#include <stdio.h>

int main() {
  float sal_atual, desconto;

  scanf("%f", &sal_atual);

  if (sal_atual <= 1751.81){
    desconto = sal_atual * 0.08;
    printf("Desconto do INSS: R$ %.6f", desconto);
  }
  else if ((sal_atual >= 1751.82) && (sal_atual <= 2919.72)){
    desconto = sal_atual * 0.09;
    printf("Desconto do INSS: R$ %.6f", desconto);
  }
  else if ((sal_atual >= 2919.73) && (sal_atual <= 5839.45)){
    desconto = sal_atual * 0.11;
    printf("Desconto do INSS: R$ %.6f", desconto);
  }
  else{
    desconto = 5839.45 * 0.11;
    printf("Desconto do INSS: R$ %.6f", desconto);
  }
  
  return 0;
}