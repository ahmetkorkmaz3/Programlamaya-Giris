#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main(void) {
	
	int sayi,carpim,i;
	
	printf("\n\t##Carpim Tablosu##");
	printf("\n\t##################");
	
	printf("\n Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	fflush(stdin);
	
	for(i=1;i<=10;i++)
	{
		
		carpim=sayi*i;
		printf("\n %d * %d = %d",sayi, i, carpim);
	}
	
	getch();
	return 0;
}
