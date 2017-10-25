#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("2 ve 7 ye bölünebilen sayýlar\n");
	
	
	int sayi[5], i, j;
	
	for(i=0; i<5; i++){
		printf("Lütfen bir sayý giriniz :");
		scanf("%d",&sayi[i]);
	}
	
	for(j=0; j<5; j++){
		if(sayi[j] % 2 == 0 && sayi[j] % 7 == 0){
			printf("\n\t%d sayýsý 2 ve 7 ye bölünebilir",sayi[j]);
		}
	}
	
	getch();
	return 0;
}
