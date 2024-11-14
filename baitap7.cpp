#include <stdio.h>
#include <math.h>
int main()
{
	//Khai bao bien
	double a = 123.567, b =-12;
	
	//Thuc hien phep toan va in ket qua ra man hinh
	printf("\nfabs(%lf)=%lf", b, fabs(b));
	printf("\nceil(%lf)=%lf",a,floor(a));
	printf("\nsqrt(%lf)=%lf",a,sqrt(a));
	printf("\npow(2,3)=%lf",pow(2,3));
	return 0;
}
