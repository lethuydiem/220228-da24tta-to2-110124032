#include <stdio.h>
int main()
{
	//Khai bao bien
	int ns;
	char mssv[10], hoten[25],lop[10];
	float diem;
	
	//Nhap du lieu bien
	printf("Nhap MSSV: ");
	fflush(stdin);
	scanf("%s",mssv);
	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(hoten);
	printf("Nhap nam sinh: ");
	scanf("%d",&ns);
	printf("Nhap lop: ");
	fflush(stdin);
	scanf("%s",lop);
	printf("Nhap diem xet tuyen: ");
	scanf("%f",&diem);
	
	//In du lieu ra man hinh
	printf("MSSV: %s \n",mssv);
	printf("Ho ten: %s \n",hoten);
	printf("Nam sinh: %d \n",ns);
	printf("Lop: %s \n",lop);
	printf("Diem xet tuyen: %f \n",diem);
	return 0;
}
