#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float a,b,c;
	float delta;
	float x1,x2;
	
	printf("2. Dereceden bir polinom için a, b, c deðerlerini giriniz (ax^2+bx+c):");
	scanf("%f %f %f",&a,&b,&c);
	
	delta = (pow(b,2))-(4*a*c);
	
	if(delta<=-1){
		printf("\nPolinomun reel kökü yoktur.");
	}
	else{
		x1=((-b) - (sqrt(delta))) /(2*a);
		x2=((-b) + (sqrt(delta))) / (2*a);
		if(x1 == x2){
			printf("x1 = x2 = %.2f",x1);
		}
		else{
			printf("\nx1 = %.2f\tx2 = %.2f",x1,x2);
		}	
	}
	
	getch();
	return 0;
}
