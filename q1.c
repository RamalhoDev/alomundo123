#include <stdio.h>

double Desconto_INSS(double salario){
  double desconto;

  if(salario <= 420.00){
    desconto = salario * 8.0/100;
  }else if(salario > 420.00 && salario<=1350.0){
    desconto = salario* 9.0/100;
  }else if(salario >1350.00){
    desconto = salario * 10/100.0;
  }

  return desconto;
}

int main(){
  double salario;
  double desconto;

  printf("Insira o valor do seu salário:\n" );
  scanf("%lf", &salario);

  desconto = Desconto_INSS(salario);

  printf("Seu salário líquido será de %.2lf\nSeu desconto foi de %.2lf\n",
  salario-desconto, desconto);

  return 0;
}
