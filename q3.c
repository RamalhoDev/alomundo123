#include <stdio.h>
#include <string.h>
#define tamanho 30


int Palindromo(char palavra[], int qCarac){
  int count = qCarac-1, flag, i;

  for(i = 0; i < qCarac ; i++){
    if(palavra[i] == palavra[count--])
      flag = 1;
    else{
      flag = 0;
      break;
    }
  }

  return flag;
}

int main() {
  char palavra[tamanho] ;
  int qCarac, i, flag;

  fgets(palavra, tamanho, stdin);
  qCarac = strlen(palavra)-1;
  palavra[qCarac] = '\0';
  flag = Palindromo(palavra, qCarac);

  if(flag == 1){
    printf("É palíndromo\n");
  }else{
    printf("Não é Palindromo\n");
  }

  return 0;
}
