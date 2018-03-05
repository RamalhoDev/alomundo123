#include <stdio.h>

void Fibonnaci(int qTermos){
  int i, valor[qTermos];
  for (i = 0; i<qTermos; i++){
    if(i == 0 || i == 1){
      valor[i] = 1;
    }else{
      valor[i] = valor[i-1] + valor[i-2];
    }
  }

  for(i = 0; i<qTermos; i++){
    if(i < qTermos-1)
      printf("%d, ", valor[i]);
    else
        printf("%d\n", valor[i]);
  }

}

int main(){
  int qTermos;

  printf("Insira a quantidade de termos desejado:\n");
  scanf("%d", &qTermos);

  Fibonnaci(qTermos);

  return 0;
}
