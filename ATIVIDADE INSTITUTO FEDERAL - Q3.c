#include <stdio.h>
#include <locale.h>

int main(){
	int numero = 0, i, soma = 0, contador, maiorNumero = 0, menorNumero = 1;
	float media = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	do{
		printf("INSIRA O %d� N�MERO: ", contador);
		scanf("%d",&numero);
		
		contador = contador + 1;
		soma = soma + numero;
		media = soma / 20;
		
		if(numero > maiorNumero){
		maiorNumero = numero;
	}else if(numero < menorNumero){
		menorNumero = numero;
	}

		
	}while(contador <= 20);
	
	printf("MAIOR VALOR %d \n", maiorNumero);
	printf("MENOR VALOR %d",menorNumero);
	
	
}
