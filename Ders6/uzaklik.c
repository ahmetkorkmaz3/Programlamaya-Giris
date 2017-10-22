#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //Matematiksel iþlemler için gerekli kütüphane.

int main(int argc, char *argv[]) {
	
	printf("\nÝki Nokta Arasýndaki Mesafe");
	printf("\n###########################");
	
	int x1, y1;
	int x2, y2;
	float mesafe = 0;
	
	printf("\nÝlk noktanýn kordinatlarýný giriniz (x,y): ");
	scanf("%d %d",&x1,&y1);
	
	printf("\nÝkinci noktanýn kordinatlarýný giriniz (x,y): ");
	scanf("%d %d",&x2,&y2);
	
	mesafe = sqrt( pow((y2-y1), 2) + pow((x2-x1), 2));
	
	printf("Ýki nokta arasýndaki uzaklýk = %.2f", mesafe);
	
	getch();
	return 0;
}
