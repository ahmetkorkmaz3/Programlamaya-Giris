#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //Matematiksel i�lemler i�in gerekli k�t�phane.

int main(int argc, char *argv[]) {
	
	printf("\n�ki Nokta Aras�ndaki Mesafe");
	printf("\n###########################");
	
	int x1, y1;
	int x2, y2;
	float mesafe = 0;
	
	printf("\n�lk noktan�n kordinatlar�n� giriniz (x,y): ");
	scanf("%d %d",&x1,&y1);
	
	printf("\n�kinci noktan�n kordinatlar�n� giriniz (x,y): ");
	scanf("%d %d",&x2,&y2);
	
	mesafe = sqrt( pow((y2-y1), 2) + pow((x2-x1), 2));
	
	printf("�ki nokta aras�ndaki uzakl�k = %.2f", mesafe);
	
	getch();
	return 0;
}
