void mostrar(int lista[5],char pal[6]){
  int i;

  for(i=0; i<5; i++){
    printf("%s[%d] = %d\n",pal,i,lista[i]);
  }
}

int main(){
  int par[5],impar[5];
  int n,i,numpar=0,numimpar=0;

  for(i=0; i<15; i++){
    scanf("%d", &n);
    if(n%2==0){
      par[numpar]=n;
      numpar++;
      if(numpar==5){
        mostrar(par,"par");
        numpar=0;
      }
    }
    else{
      impar[numimpar]=n;
      numimpar++;
      if(numimpar==5){
        mostrar(impar,"impar");
        numimpar=0;
      }
    }
  }
  for(i=0; i < numimpar; i++){
    printf("impar[%d] = %d\n", i, impar[i]);
  }
  for(i=0; i < numpar; i++){
    printf("par[%d] = %d\n", i, par[i]);
  }

  return 0;
}