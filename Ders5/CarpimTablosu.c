#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,j;
	int carpim;
	
	for(i=1;i<=10;i++)
	{
		printf("\n");
		for(j=1;j<=10;j++)
		{
			carpim=i*j;
			printf("\n%d * %d = %d",i,j,carpim);
		}
	}
	
	
	getch();
	return 0;  
}
