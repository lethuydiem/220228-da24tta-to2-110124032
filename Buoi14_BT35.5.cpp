#include <stdio.h>
#include <stdlib.h>
main()
{
	int *a, m=3, n=3, i;
	
	/*Cap phat vung nho*/
	a=(int *)malloc(sizeof(int)*m*n);
	/*Nhap du lieu*/
	for(i=0;i<m*n;i++)
	{
		printf("\nNhap phan tu thu %d: ", i);
		scanf("%d",a+i);
	}
	/*Xuat du lieu*/
	for(i=0;i<m*n;i++)
		printf("%5d",*(a+i));
}
