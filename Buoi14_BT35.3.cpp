#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *a, s;
	int n, i=0;
	/*CAp phat vung nho dong cho con tra a*/
	a = (float*)malloc(sizeof(float)*n);
	/*Nhap du lieu*/
	for(int i=0;i<4;i++)
	{
		printf("\nNhap a[%d] = ",i);
		scanf("%f",a+i);
	}
	/* Tinh tong cac gia tri*/
	for(int i=0;i<4;i++)
		s=s+ *(a+i);
		printf("\nTong cac so thuc: %8.2f",s);
		free(a);
}
