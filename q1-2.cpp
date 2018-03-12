#include <iostream>
#include <string.h>
#define Q_Alunos 3

using namespace std;
typedef struct{
	char nome[30];
	char endereco[50];
	char matricula[10];
	char curso[30];
}tAluno;

tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso){
	int count = 0, i, tamanhoString = strlen(curso);
	for(i = 0; i < tamanhoString ; i++){
		if(!strcmp(curso, gAlunos[i].curso)){
			count++;
		}
	}
	return count;
}


void Cadastrar_Alunos(){
	int i;
	for(i = 0; i<Q_Alunos; i++){
		cout  << "Escreva o nome do aluno " << i+1 <<": " ;
		cin >> gAlunos[i].nome;
		cout << endl << "Escreva o endereço do aluno " << i+1 <<": " ;
		cin >> gAlunos[i].endereco;
		cout << endl << "Escreva a matricula do aluno " << i+1 <<": " ;
		cin >> gAlunos[i].matricula ;
		cout << endl << "Escreva o curso do aluno " << i+1 <<": ";
		cin >> gAlunos[i].curso;	
	}

}

int main(){
	char curso[30];
	int quantidade;	
	
	Cadastrar_Alunos();	
	
	cout << endl << "Digite o nome do curso que você deseja :" << endl;;
	cin >> curso;
	
	quantidade = consultaAlunosPorCurso(curso);

	cout << endl << "Ha " << quantidade <<" alunos" << endl;
	return 0;
}
