#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int asalsayi, i;
	
	printf("Bir say� giriniz : ");
	scanf("%d", &asalsayi);
	
	for(i=2; i<=asalsayi; i++){
		if(asalsayi % i == 0){
			printf("%d say�s� asal de�ildir. ", asalsayi);
			break;
		}
		
		if(i == asalsayi - 1){
			printf("%d say�s� asal say�d�r. ", asalsayi);
			break;
		}
		
	}
	
	getch();
	return 0;
}
