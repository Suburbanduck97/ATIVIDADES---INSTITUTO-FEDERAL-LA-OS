#include <stdio.h>
#include <locale.h>

int main() {
	int alg, i;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("=== TABUADA DO 5 === \n\n");
	printf("INSIRA O NÚMERO 5: ");
	scanf("%d",&alg);
	system("cls || clear");		
	
	for(i=1;i<=10;i++){
		
		if(alg != 5){
			printf("=== ERRO === \n\n INSIRA APENAS O VALOR 5!!!");
		}else{
			printf("%d x %d = %d \n", alg, i , alg * i);
		}
	
	}
	
	return 0;		
} 
	
