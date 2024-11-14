#include <stdio.h>
int main()
{
	//Khai bao bien
	const float PI=3.1415;
	int a=50, b=23, h=30;
	float c=12.56;
	int S_thang=(a+b)*h/2;
	float S_tron=(c*c)/(4*PI);
	float S=S_thang-S_tron;
	
	//In ket qua ra man hinh
	printf("Dien tich con lai cua san truong: %.2f",S);
	return 0;
}
