#include <stdio.h>

int main(void) {
  float sal_anterior, val_aumento, novo_sal, aumento;
  int perc;

  scanf("%f", &sal_anterior);

  if (sal_anterior <= 280){
    novo_sal = sal_anterior + sal_anterior * 0.20;
    aumento = sal_anterior * 0.20;
    printf("%.2f", sal_anterior);
    printf("\n20");
    printf("\n%.2f", aumento);
    printf("\n%.2f", novo_sal);  
  }
  else if((sal_anterior > 280) && (sal_anterior <= 700)){
    novo_sal = sal_anterior + sal_anterior * 0.15;
    aumento = sal_anterior * 0.15;
    printf("%.2f\n", sal_anterior);
    printf("15\n");
    printf("%.2f\n", aumento);
    printf("%.2f", novo_sal);
  }
  else if((sal_anterior > 700) && (sal_anterior < 1500)){
    novo_sal = sal_anterior + sal_anterior * 0.10;
    aumento = sal_anterior * 0.10;
    printf("%.2f\n", sal_anterior);
    printf("10\n");
    printf("%.2f\n", aumento);
    printf("%.2f", novo_sal);
  }
  else{
    novo_sal = sal_anterior + sal_anterior * 0.05;
    aumento = sal_anterior * 0.05;
    printf("%.2f\n", sal_anterior);
    printf("5\n");
    printf("%.2f\n", aumento);
    printf("%.2f", novo_sal);
  }
  return 0;
}