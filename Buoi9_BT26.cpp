#include <stdio.h>

struct Sach{
	char masach[10], tensach[30], tacgia[30], NXB[30];
	int namSX, soluongnhap;
	float dongia, thanhtien, thue, thuctien;
};

void Nhap(Sach *a);
int main()
{
	Sach a;
	int n;
	printf("Nhap so luong sach: ");
	scanf("%d",&n);
}
void Nhap(Sach *a)
{
	printf("Nhap ma sach: ");
	scanf("%s",a->masach);
	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(a->masach);
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	gets(a->tacgia);
	printf("Nhap ten NSX: ");
	fflush(stdin);
	gets(a->NXB);
	printf("Nhap nam san xuat: ");
	scanf("%d",&a->namSX);
	printf("Nhap don gia: ");
	scanf("%f",a->dongia);
}
