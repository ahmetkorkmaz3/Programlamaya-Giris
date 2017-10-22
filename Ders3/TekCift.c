#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	printf("\n\tTek mi ? Çift mi ?");
	printf("\n\t##################\n\n");
	
	int sayi;
	
	printf("\n\tLütfen bir sayý giriniz : ");
	scanf("%d", &sayi);
	
	if(sayi % 2 == 0)
		printf("\n\t%d sayýsý bir çift sayýdýr.", sayi);
	else
		printf("\n\t%d sayýsý bir tek sayýdýr. ", sayi);	
	
	getch();
	return 0;
}
