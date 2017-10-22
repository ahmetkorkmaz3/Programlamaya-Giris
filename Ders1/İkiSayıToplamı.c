#include <stdio.h>
#include <conio.h>

int main() {
	
	int sayi1,sayi2,toplam;
	
	printf("\n ##Iki Sayinin Toplami## ");
	printf("\n ####################### \n");
	
	printf("\n Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("\n İkinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	
	printf("\n %d + %d = %d",sayi1,sayi2,toplam);
	
	return 0;
}
