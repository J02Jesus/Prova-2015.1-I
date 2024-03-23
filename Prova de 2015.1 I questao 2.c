#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int senha, t, u, v, w;

  printf("digite a sua senha\n\n");
  scanf("%d", &senha);

  t=(senha/1000);
  u=(senha/100)%10;
  v=(senha/10)%10;
  w=(senha/1)%10;

  if(t==u&&t==v&&t==w){
    printf("algarismos identicos");
  }else if(t>u&&u>v&&v>w){
    printf("a senha eh formada por numeros crescentes");
  }else if(t<u&&u<v&&v<w){
    printf("a senha eh formada por numeros decrescente");
  }else{ 
    printf("senha atualizada com sucesso!!!");
  }
  
  return 0;
}