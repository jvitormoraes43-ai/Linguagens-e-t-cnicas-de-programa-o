#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
/*	int a, b, c;
	int resultado;
	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ( a>b){
		resultado = a;
	}
	else{
		resultado = b;	
	}
	
	if (resultado > c){
		resultado = c;
	}
	printf("%d eh o maior", resultado);*/
	
	int n, resultado;
	
	printf ("Insira um número: ");
	scanf("%d", &n);

	if( n > 0){
		resultado = n/-1;
	}else{
		resultado = n * n;
	}

	
	printf("%d", resultado);
	return 0;
}
