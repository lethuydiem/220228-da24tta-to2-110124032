#include <stdio.h>
int main()
{
	//Khai bao bien
	int a,b;
	
	//Nhap gia tri cho bien
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	char pheptoan;
	printf("Nhap phep toan: ");
	fflush(stdin);
	scanf("%c",&pheptoan);
	
	//Tinh va in ket qua ra man hinh
	switch(pheptoan)
	{
		case '+':
			printf("Tong hai so la: %d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("Hieu hai so la: %d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("Tich hai so la: %d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("Thuong hai so la: %d / %d = %f",a,b,(float)a/b);
			break;
	}
}
