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
		printf("%d say�s� bir m�kemmel say�d�r. ", deger);
	}
	else{
		printf("%d say�s� m�kemmel say� de�ildir.", deger);
	}
	
}

int main() {
	int sayi;
	printf("Bir say� giriniz :");
	scanf("%d",&sayi);
	mukemmelSayi(sayi);
	getch();
	return 0;
}


