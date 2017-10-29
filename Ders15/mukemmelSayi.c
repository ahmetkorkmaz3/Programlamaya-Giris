#include <stdio.h>
#include <stdlib.h>

void mukemmelSayi(int deger){
	
	int i;
	int toplam = 0;
	for(i=1; i<deger; i++)
	{
		if(deger % i == 0)
		{
			toplam += i;
		}
	}
	if(toplam == deger){
		printf("%d sayısı bir mükemmel sayıdır. ", deger);
	}
	else{
		printf("%d sayısı mükemmel sayı değildir.", deger);
	}
	
}

int main() {
	int sayi;
	printf("Bir sayı giriniz :");
	scanf("%d",&sayi);
	mukemmelSayi(sayi);
	getch();
	return 0;
}


