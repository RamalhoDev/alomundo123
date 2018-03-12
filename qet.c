/*
 ============================================================================
 Name        : qet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



typedef struct {

    char nome[30];
    char tipo [50];
    int integrantes;
    int ranking;

}tBanda;

void Rank(tBanda *banda){

	int rank, i, rankNum;

	printf("Digite o numero do ranking que deseja ver:");
	scanf("%d", &rank);

	for(i=0;i<5;i++){
	    if (banda[i].ranking==rank){
	    	rankNum = i;
	    }
	}

	printf("informacoes sobre a pos do ranking %d:\n", rank);
	printf("Nome: %s", banda[rankNum].nome);
	printf("Tipo: %s",banda[rankNum].tipo);
	printf("integrantes: %d\n", banda[rankNum].integrantes);

}

void tipo(tBanda *banda){
	int certo[5];
	char Nome[30];
	printf("Digite o tipo da musica:");
	fgets (Nome, 30, stdin);
	int i;

	for(i=0; i<5; i++){
		if(banda[i].tipo==Nome[30]){
			printf("Nome: %s", banda[i].nome);
		}
	}
}

void nome(tBanda *banda){
	char Nome[30];
	printf("Digite o nome:");
	fgets (Nome, 30, stdin);
	int i;

	for(i=0; i<5; i++){
		if(Nome[30]==banda[i].nome)
			printf("Sua banda esta entre as favoritas\n");

	}
}

int main()
{
    tBanda banda[5];

    int i;

    for(i=0;i<5;i++){
    printf("\nPreencha com os dados da banda %2d.\n\n", i+1);
    printf("Digite o nome da banda: ");
    fgets(banda[i].nome,30,stdin);
    printf("\nDigite o tipo de musica banda: ");
    fgets(banda[i].tipo,50,stdin);
    printf("\nDigite o numero de integrantes: ");
    scanf("%d", &banda[i].integrantes);
    printf("\nDigite o ranking: ");
    scanf("%d", &banda[i].ranking);
    getchar();
    }

    for(i=0;i<5;i++){
        printf("\n\nDados banda %2d:\n", i+1);
        printf("Nome: %s", banda[i].nome);
        printf("Tipo: %s",banda[i].tipo);
        printf("integrantes: %d\n", banda[i].integrantes);
        printf("Ranking: %d", banda[i].ranking);
        printf("\n\n");
    }

    Rank(banda);
    tipo(banda);
    nome(banda);








return 0;
}

