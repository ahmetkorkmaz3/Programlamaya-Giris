#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi, i, sayac=0;
	
	for(i=0;i<5;i++){
		printf("L�tfen bir say� giriniz : ");
		scanf("%d",&sayi);
		if(sayi%2==0 && sayi%7==0){
			sayac+=1;
		}	
	}
	
	printf("sonu� = %d", sayac);
	getch();
	return 0;
}
