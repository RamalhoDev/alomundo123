#include <stdio.h>
#include <string.h>
#define tamanho 30

void Triangulo(char palavra[], int qCarac){
  
  int i, j;

  for(i = 0; i<qCarac ; i++){
    for(j = 0; j < i+1; j++){
      printf("%c", palavra[j]);
    }
    printf("\n");
  }
}

int main(){
  char palavra[tamanho];
  int qCarac;

  fgets(palavra, tamanho, stdin);

  qCarac = strlen(palavra)-1;
  palavra[qCarac] = '\0';

  Triangulo(palavra, qCarac);

  return 0;
}
