#include <stdio.h>
#include <locale.h>

//Iniciando fun��o "void", utilizando a fun��o "for" p/ la�o de repeti��o.
void tabuada(int i, int numeroQualquer){
	for(i=1;i<=10;i++){
		printf("%d x %d = %d \n", numeroQualquer, i, numeroQualquer * i);
	}
}

//Iniciando fun��o "in�cio".
int main() {
	int i, numero = 0;
	
	setlocale(LC_ALL, "portuguese"); //ativa��o da biblioteca locale.
	
	//Solicitando dados ao usu�rio.
	printf("INSIRA UM N�MERO: ");
	scanf("%d",&numero);
	system("cls || clear");
	
	//Exibindo tabuada.
	printf("TABUADA DO N�MERO %d \n\n", numero);
	tabuada(i,numero);
	
	//Fim do programa.
	return 0;
	
}
