#include <stdio.h>
#include <locale.h>

//Iniciando função "void", utilizando a função "for" p/ laço de repetição.
void tabuada(int i, int numeroQualquer){
	for(i=1;i<=10;i++){
		printf("%d x %d = %d \n", numeroQualquer, i, numeroQualquer * i);
	}
}

//Iniciando função "início".
int main() {
	int i, numero = 0;
	
	setlocale(LC_ALL, "portuguese"); //ativação da biblioteca locale.
	
	//Solicitando dados ao usuário.
	printf("INSIRA UM NÚMERO: ");
	scanf("%d",&numero);
	system("cls || clear");
	
	//Exibindo tabuada.
	printf("TABUADA DO NÚMERO %d \n\n", numero);
	tabuada(i,numero);
	
	//Fim do programa.
	return 0;
	
}
