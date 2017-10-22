#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\n\tFaktöriyel Hesabý");
	printf("\n\t#################");
	
	int fact=1;
	int sayi, i;
	
	do{
		printf("\n\n\tBir sayý giriniz : ");
		scanf("%d", &sayi);
	}while(sayi<0);
	
	if(sayi == 0){
		printf("\n\t%d! = 1", sayi);
	}
	else{
		for(i=1;i<=sayi;i++){
			
			fact*=i;
		}
	
	}
	
	printf("\n\t%d! = %d",sayi,fact);
	getch();
	return 0;
	
	
}
