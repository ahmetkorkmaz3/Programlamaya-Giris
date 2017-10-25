#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi, i, sayac=0;
	
	for(i=0;i<5;i++){
		printf("Lütfen bir sayý giriniz : ");
		scanf("%d",&sayi);
		if(sayi%2==0 && sayi%7==0){
			sayac+=1;
		}	
	}
	
	printf("sonuç = %d", sayac);
	getch();
	return 0;
}
