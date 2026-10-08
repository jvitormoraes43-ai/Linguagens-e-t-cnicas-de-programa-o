#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int compara(int a, int b){
	if(a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valores[10];
	valores[0] = 6;
	
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	
	for( i = 1; i<10; i++) {
		scanf("%d", &valores[i]);
	}
	for (i = 1,maior = valores[0]; i<5; i= i+2){
		int comp_temp = compara(valores[i], valores[i+1]);
		maior = compara (maior, comp_temp);
	}
	printf("\n %d", maior);
		return 0;
}
