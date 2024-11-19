#include <stdio.h>
int main()
{
	//Khai bao bien
	int n,sum;
	
	//Nhap gia tri bien
	printf("Nhap n = ");
	scanf("%d",&n);
	
	//Tinh tong cac chu so
	while(n>0)
	{
		int cs=n%10;
		sum+=cs;
		n=n/10;
	}
	printf("Tong cac chu so trong so nguyen %d la: %d",n,sum);
	return 0;
}
