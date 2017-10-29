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
		printf("%d sayýsý bir mükemmel sayýdýr. ", deger);
	}
	else{
		printf("%d sayýsý mükemmel sayý deðildir.", deger);
	}
	
}

int main() {
	int sayi;
	printf("Bir sayý giriniz :");
	scanf("%d",&sayi);
	mukemmelSayi(sayi);
	getch();
	return 0;
}


