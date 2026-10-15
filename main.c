#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,s;
	
	while (i<10){
		scanf("%d", &n);
		if(n>0){
			s +=n;
			i++;
		}
	}
	printf("%d | %d", s, s/10 );
	
	return 0;
}
