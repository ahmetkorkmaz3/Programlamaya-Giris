#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\nYýldýz Piramit");
	printf("\n##############");
	
	int i, sayi, j, k;
	
	printf("\n\nKaç katlý olsun ? ");
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
