#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\nHýz Hesaplayan Program ");
	printf("\n#######################");
	
	int mesafe, sure;
	float hiz = 0;
	
	printf("\nMesafeyi giriniz(m) : ");
	scanf("%d", &mesafe);
	
	printf("\nSüreyi giriniz(s) : ");
	scanf("%d", &sure);
	
	hiz = (float) mesafe/sure;
	
	printf("\n Hýzýnýz : %.2f m/s 'dir", hiz);
	
	
	
	getch();
	return 0;
}
