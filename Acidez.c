#include <stdio.h>

int main(){
    float num;

    scanf("%f", &num);

    if(num < 7.0){
        printf("Acida");
    }
    else if(num > 7.0){
        printf("Basica");
    }
    else{
    printf("Neutra");
    }
    return 0;
}