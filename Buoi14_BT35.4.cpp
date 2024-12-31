#include <stdio.h>
int main()
{
	int a[5][5]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
	printf("\nDia chi cac phan tu trong mang:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%10x",&a[i][j]);
		printf("\n");
	}
	
	printf("\nCac phan tu trong mang 3x3: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",*(*a+i*5+j));
		printf("\n");
	}
}
