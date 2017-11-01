#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi[10];
	int girilenSayi;
	int i, j;
	
	for(i=0; i<10; i++)
	{
		printf("Bir sayý giriniz :");
		scanf("%d",&girilenSayi);
		if(girilenSayi == 0){
			break;
		}
		else{
			sayi[i] = girilenSayi;
		}
	}
	
	for(j=0; j<i; j++)
	{
		printf("\n%d. indeksi : %d",j,sayi[j]);
	}
	
	getch();
	return 0;
}
