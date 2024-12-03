#include <stdio.h>
#include <stdlib.h>
void Nhap(int *a, int n);
void Xuat(int *a, int n);
int Tong(int *a, int n);
int TimMax(int *a, int n);
int DemMax(int *a, int n);
int DemGtX(int *a, int n, int &x);
int KtTonTaiDuong(int *a, int n);
void SxTang(int *a, int n);
void LocSoAm(int *a, int n);
int main()
{
	int n, *p, x;
	do
	{
		printf("n = ");
		scanf("%d",&n);
	}while(n<=0||n>=50);
	p=(int*)malloc(n*sizeof(int));
	
	//Goi ham cau a
	Nhap(p,n);
	
	//Goi ham cau b
	Xuat(p,n);
	
	//Goi ham cau c
	printf("\nTong cac so nguyen vua nhap la: %d",Tong(p,n));
	
	//Goi ham cau d
	printf("\nGia tri lon nhat la: %d",TimMax(p,n));

	//Goi ham cau e
	printf("\nSo lan xuat hien cua gia tri lon nhat la: %d",DemMax(p,n));
	
	//Goi ham cau f
	printf("\nSo lan xuat hien cua %d la: %d lan.",x,DemGtX(p,n,x));
	
	//Goi ham cau g
	if(KtTonTaiDuong(p,n)==1)
		printf("\nMang co ton tai so duong.");
	else
		printf("\nMang khong ton tai so duong.");
		
	//Goi ham cau h
	SxTang(p,n);
	
	//Goi ham cau i
	LocSoAm(p,n);
	return 0;
}
void Nhap(int *a, int n)
{
	printf("Nhap danh sach cac so nguyen:\n");
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
}

void Xuat(int *a, int n)
{
	printf("Danh sach cac so nguyen:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",*(a+i));
}

int Tong(int *a, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s+=*(a+i);
	return s;
}

int TimMax(int *a, int n)
{
	int m=*a;
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>m)
			m=*(a+i);
	}
	return m;
}

int DemMax(int *a, int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(*(a+i)==TimMax(a,n))
			dem++;
	}
	return dem;
}

int DemGtX(int *a, int n, int &x)
{
	int dem=0;
	printf("\n X = ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(*(a+i)==x)
			dem++;
	}
	return dem;
}

int KtTonTaiDuong(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>0)
			return 1;
	}
}

void SxTang(int *a, int n)
{
	int t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(*(a+j) > *(a+j+1))
			{
				t= *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = t;
			}
		}
	}
	printf("\nMang sau khi sap xep tang: ");
	Xuat(a,n);
}

void LocSoAm(int *a, int n)
{
	printf("\nCac so am duoc loc ra la:\n");
	for(int i=0;i<n;i++)
	{
		if(*(a+i)<0)
			printf("%d\t",*(a+i));
	}
}


