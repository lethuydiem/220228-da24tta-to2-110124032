#include <stdio.h>
#include <stdlib.h>
/*Bai toan dem cac phan tu phan biet*/
int dem_phan_biet(int *a, int n);
int ton_tai(int *a, int n, int x);
int main()
{
	int *a=(int *)malloc(sizeof(int)*6);
	for(int i=0;i<6;i++)
	{
		printf("\nNhap so nguyen thu %d: ",i);
		scanf("%d",a+i);
	}
	printf("\nSo phan tu phan biet trong day: %d",dem_phan_biet(a,6));
}
int ton_tai(int *a, int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)==x)
			return 1;
	}
	return 0;
}
int dem_phan_biet(int *a, int n)
{
	if(n<0)
		return 0;
	if(n==1)
		return 1;
	if(n>1)
	{
		int dem= dem_phan_biet(a,n-1);
		if(ton_tai(a,n-1,*(a+(n-1))))
			return dem;
		return dem+1;
	}
}
