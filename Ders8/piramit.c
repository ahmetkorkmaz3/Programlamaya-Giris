#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\nY�ld�z Piramit");
	printf("\n##############");
	
	int i, sayi, j, k;
	
	printf("\n\nKa� katl� olsun ? ");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++){
		printf("\n");
		for(j=i; j<=sayi; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
			printf(" ");
		}
	}
	
	getch();
	return 0;
}
