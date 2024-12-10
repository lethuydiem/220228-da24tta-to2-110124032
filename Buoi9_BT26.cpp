#include <stdio.h>

struct Sach{
	char masach[10], tensach[50], tacgia[30], NXB[30];
	int namSX, soluongnhap;
	float dongia, thanhtien, thue, thuctien;
};

void Nhap(Sach *a, int n);
void Xuat(Sach a);
void sx_giam(Sach a[], int n);
void ThucTienMax(Sach a[], int n);
int main()
{
	int n;
	do
	{
	printf("Nhap so loai sach: ");
	scanf("%d",&n);
	}while(n<=0);
	Sach a[n];
	
	for(int i=0;i<n;i++)	
		Nhap(&a[i],n);
	for(int i=0;i<n;i++)
		Xuat(a[i]);
	
	sx_giam(a,n);
	
	ThucTienMax(a,n);
}
void Nhap(Sach *a, int n)
{
	printf("Nhap ma sach: ");
	scanf("%s",a->masach);
	
	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(a->tensach);
	
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	gets(a->tacgia);
	
	printf("Nhap ten NXB: ");
	fflush(stdin);
	gets(a->NXB);
	
	printf("Nhap nam san xuat: ");
	scanf("%d",&a->namSX);
	
	printf("Nhap don gia: ");
	scanf("%f",&a->dongia);
	
	printf("So luong nhap: ");
	scanf("%d",&a->soluongnhap);
	
	a->thue=a->dongia*5/100;
	a->thanhtien=a->soluongnhap*a->dongia;
	a->thuctien=a->thanhtien+a->thue*a->soluongnhap;
	
	printf("\n");
}
void Xuat(Sach a)
{
	printf("\nMa sach: %s",a.masach);
	printf("\nTen sach: %s",a.tensach);
	printf("\nTac gia: %s",a.tacgia);
	printf("\nNXB: %s",a.NXB);
	printf("\nNam SX: %d",a.namSX);
	printf("\nDon gia: %.2f",a.dongia);
	printf("\nSo luong nhap: %d",a.soluongnhap);
	printf("\nThanh tien: %.2f",a.thanhtien);
	printf("\nThuc tien: %.2f\n",a.thuctien);
}
void sx_giam(Sach a[], int n)
{
	Sach t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[i].namSX<a[i+1].namSX)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	
	printf("Ten sach sau khi sap xep giam theo nam san xuat:\n");
	for(int i=0;i<n;i++)
		Xuat(a[i]);
}
void ThucTienMax(Sach a[], int n) 
{
    Sach m = a[0];
    for (int i = 1; i < n; i++) 
	{
        if (a[i].thuctien > m.thuctien) 
		{
            m = a[i];
        }
    }

    printf("\nSach co thuc tien cao nhat:\n");
    Xuat(m);
}
