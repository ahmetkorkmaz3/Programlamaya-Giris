#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double sayi,i;
	double islem=0;
	
	printf("Bir sayý giriniz :");
	scanf("%lf",&sayi);
	
	for(i=1;i<=sayi;i++){
		
		islem+=(1/i);
	}
	
	printf("Sonuç = %.2lf",islem);
	
	return 0;
}

