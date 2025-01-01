#include <stdio.h>
#include <stdlib.h>
/*Bai toan tim phan tu lon nhat, phan tu nho nhat*/
int chi_so_lon_nhat(int *a, int n);
int main()
{
	int *a=(int *)malloc(sizeof(int)*6);
	for(int i=0;i<6;i++)
	{
		printf("\nNhap so nguyen thu %d: ",i);
		scanf("%d",a+i);
	}
	printf("Chi so lon nhat: %d", chi_so_lon_nhat(a,6));
}
int chi_so_lon_nhat(int *a, int n)
{
	int cs;
	if(n<1)
		return -1;
	else if(n==1)
	{
		return 0;
	}
	else
	{
		cs=chi_so_lon_nhat(a,n-1);
		if(*(a+(n-1))>*(a+cs))
			cs=n-1;
		return cs;
	}
}
