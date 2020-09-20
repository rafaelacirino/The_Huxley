#include <stdio.h>
#include <string.h>


int superior(char *pal1, char *pal2) {
  if(*pal1 < *pal2){
    return 0;
  }
  else if(*pal1 > *pal2){
    return 1;
  }
  
  return superior(++pal1, ++pal2);
}

int main() {
  char pal1[20], pal2[20];
    
  scanf("%s", pal1);
  scanf("%s", pal2);
    
  printf("%s\n", superior(pal1, pal2) ? pal1 : pal2);
    
  return 0;
}