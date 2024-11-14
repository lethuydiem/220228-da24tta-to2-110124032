#include <stdio.h>
int main()
{
	//Khai bao bien
	int n, s=0, p=1;
	
	//Nhap gia tri bien
	printf("Nhap n = ");
	scanf("%d",&n);
	
	//Tinh tong cac so tu 1 den n
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("Tong S(n)= 1+2+3+...+n= %d \n",s);
	for(int i=1;i<=n;i++)
	{
		p*=i;
	}
	
	//Tinh tich cac so tu 1 den n
	printf("Tich P(n)= 1*2*3*...*n= %d",p);
	return 0;
}
