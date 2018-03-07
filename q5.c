#include <stdio.h>
#include <string.h>




int main(){
	char sexo[10];
	double alt[10], maior, menor, masculino, feminino;
	int i, aux, aux1,countM = 0 , countF=0;
	
	for(i = 0; i<10; i++){
		printf("Inclua altura e sexo %d:\n", i+1);
		scanf("%lf %c", &alt[i], &sexo[i]);
		
		if(sexo[i] == 'M'){
			masculino += alt[i];
			countM ++;		
		}else if(sexo[i] == 'F'){
			feminino += alt[i];
			countF++;
		}	
	}
	
	maior = menor = alt[0];

	for(i = 0; i<10; i++){
		
		if(alt[i] > maior){
			maior = alt[i];
			aux = i;		
		}else if(alt[i] < menor){
			menor = alt[i];
			aux1 = i;
		}
	}	
	

	printf("\n\n\nHá %d pessoas do sexo Masculino e %d do sexo feminino\n", countM, countF);
	printf("A média de altura das pessoas do sexo Masculino é %.2lf\n"
		"A média de altura das pessoas do sexo Feminino é %.2lf\n", masculino/countM, feminino/countF);		
	printf("A pessoa do sexo %c é o maior com %.2lf de Altura\n"
		"A pessoa do sexo %c é o menor com %.2lf de altura\n", sexo[aux], maior, sexo[aux1], menor);

	return 0;
}

