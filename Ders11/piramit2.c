#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, j, rakamSayisi=4, yildizSayisi=0;
	
	for(i=1; i<=4; i++){
		
		for(j=1; j<=rakamSayisi; j++){
			printf("%d",j);
		}
		
		for(j=1; j<=yildizSayisi; j++){
			printf("*");
		}
		
		for(j=rakamSayisi; j>=1; j--){
			printf("%d",j);
		}
		rakamSayisi--;
		yildizSayisi+=2;
		printf("\n");
	}
	
	
	getch();
	return 0;
}
