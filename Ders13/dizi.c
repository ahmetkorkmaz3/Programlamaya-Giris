#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("2 ve 7 ye b�l�nebilen say�lar\n");
	
	
	int sayi[5], i, j;
	
	for(i=0; i<5; i++){
		printf("L�tfen bir say� giriniz :");
		scanf("%d",&sayi[i]);
	}
	
	for(j=0; j<5; j++){
		if(sayi[j] % 2 == 0 && sayi[j] % 7 == 0){
			printf("\n\t%d say�s� 2 ve 7 ye b�l�nebilir",sayi[j]);
		}
	}
	
	getch();
	return 0;
}
