#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	printf("\n\tTek mi ? �ift mi ?");
	printf("\n\t##################\n\n");
	
	int sayi;
	
	printf("\n\tL�tfen bir say� giriniz : ");
	scanf("%d", &sayi);
	
	if(sayi % 2 == 0)
		printf("\n\t%d say�s� bir �ift say�d�r.", sayi);
	else
		printf("\n\t%d say�s� bir tek say�d�r. ", sayi);	
	
	getch();
	return 0;
}
