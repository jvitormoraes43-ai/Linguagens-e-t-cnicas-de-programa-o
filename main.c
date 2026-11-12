#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n, i, j;
	i = 1;
	n = 0;
	
	while (i != 0) {
	    printf("MENU: ");
	
	    printf("1. Mostrar");
	    printf("2. Cadastrar");
	    printf("0 Sair\n");
	
	    do {
	        scanf("%d", &n);
	        printf("%d", n);
	    } while (n < 0 && n <= 2);
	
	    printf("Valido");
	    
	if(n==0){
		i = 0;
		printf("Saindo");
		}
	}
	
	return 0;
}
