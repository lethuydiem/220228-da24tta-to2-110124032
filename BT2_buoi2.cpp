#include <stdio.h>
int main()
{
	//Khai bao bien
	int n;
	
	//Nhap gia tri bien
	printf("Nhap n = ");
	scanf("%d",&n);
	
	//In bang cuu chuong n
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",n,i,n*i);
	}
	
	//In bang cuu chuong tu 2 den 9
	for(int i=2;i<10;i++)
	{
		printf("Bang cuu chuong %d \n",i);
		for(int j=1;j<11;j++)
		{
			printf("%d * %d = %d \n",i,j,i*j);
		}
	}
	return 0;
}
