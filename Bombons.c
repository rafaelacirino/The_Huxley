#include <stdio.h>

int main(void) {
  int preco1, preco2, preco3;
  int qtd1, qtd2, qtd3;
  float total;

  scanf("%d", &preco1);
  scanf("%d", &preco2);
  scanf("%d", &preco3);
  scanf("%d", &qtd1);
  scanf("%d", &qtd2);
  scanf("%d", &qtd3);
  total = (preco1 * qtd1) + (preco2 * qtd2) + (preco3 * qtd3);

  printf("Valor: R$%.2f", total);

  return 0;
}