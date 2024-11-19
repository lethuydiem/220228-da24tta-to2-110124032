#include <stdio.h>
int main()
{
	//Khai bao bien
	int num1,num2;
	
	//Nhap gia tri cho bien
	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap vao so nguyen thu hai : ");
	scanf("%d",&num2);
	
	//Tim va in ra gia tri nho hon
	if(num1<num2)
		printf("So nguyen nho hon la: %d",num1);
	else
		printf("So nguyen nho hon la: %d",num2);
	return 0;
}
