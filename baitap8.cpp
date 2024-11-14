#include <stdio.h>
int main()
{
	//Khai bao bien
	int a;
	float b;
	char c;
	
	//Nhap va in du lieu ra man hinh
	printf("Nhap so nguyen: ");
	scanf("%d",&a);
	printf("Nhap so thuc: ");
	scanf("%f",&b);
	printf("Nhap ky tu: ");
	fflush(stdin);
	scanf("%c",&c);
	printf("Ket qua: %d \t %f \t %c",a,b,c);
	return 0;
}
