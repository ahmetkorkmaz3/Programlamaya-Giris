#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int asalsayi, i;
	
	printf("Bir sayý giriniz : ");
	scanf("%d", &asalsayi);
	
	for(i=2; i<=asalsayi; i++){
		if(asalsayi % i == 0){
			printf("%d sayýsý asal deðildir. ", asalsayi);
			break;
		}
		
		if(i == asalsayi - 1){
			printf("%d sayýsý asal sayýdýr. ", asalsayi);
			break;
		}
		
	}
	
	getch();
	return 0;
}
