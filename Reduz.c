#include <stdio.h>

float *reduz(float *px, float *py){
  *px = *px - *py;
  return px;
}

int main(void) {
  float x, y, *p_x = &x, *p_y = &y;
  scanf("%f %f", &x,&y);
  p_x = reduz(p_x,p_y);
  printf("%.2f %.2f",*p_x ,*p_y);
  return 0;
}