#define SIZE 100
#include <stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongDuong(int a[], int n);
int tongVtLe(int a[], int n);
int demPtAm(int a[], int n);
int demPtLe(int a[], int n);
int demSnt(int a[], int n);
int ktSnt(int a);
int SntDt(int a[], int n);
void SoDuongLe(int a[], int n);
int ktSoAm(int a[], int n);
int ktX(int a[], int n);
int main()
{
	int A[SIZE];
	int n, kq;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	//n hop le
	//goi ham cau a
	nhapMang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatMang(A,n);
	
	//Goi ham cau c
	kq = tongMang(A,n);
	printf("\n\nTong cac gia tri trong mang la %d", kq);
	
	//Goi ham cau d
	printf("\n\nTong cac gia tri duong trong mang la %d",tongDuong(A,n));
	
	//Goi ham cau e
	printf("\n\nTong cac gia tri tai vi tri le trong mang la %d", tongVtLe(A,n));
	
	//Goi ham cau f
	printf("\n\nSo gia tri am trong mang la %d",demPtAm(A,n));
	
	//Goi ham cau g
	printf("\n\nSo gia tri le trong mang la %d", demPtLe(A,n));
	
	//Goi ham cau h
	printf("\n\nSo phan tu la so nguyen to la %d", demSnt(A,n));
	
	//Goi ham cau i
	if(SntDt(A,n)==0)
		printf("\n\nKhong co so nguyen to trong mang");
	else
		printf("\n\nSo nguyen to dau tien trong mang la %d",SntDt(A,n));
	
	//Goi ham cau j
	SoDuongLe(A,n);
	
	//Goi ham cau k
	if(ktSoAm(A,n)==1)
		printf("\n\nTrong mang co ton tai so am");
	else
		printf("\n\nTrong mang khong ton tai so am");
		
	//Goi ham cau l
	if(ktX(A,n)==1)	
		printf("Co ton tai gia tri cua x trong mang");
	else
		printf("Khong ton tai gia tri cua x trong mang");
		
	
	return 0;
}

void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}

int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

int tongDuong(int a[], int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			s+=a[i];
	}
	return s;
}
int tongVtLe(int a[], int n)
{
	int s=0;
	for(int i=1;i<n;i=i+2)
	{
		s+=a[i];
	}
	return s;
}
int demPtAm(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			dem++;
	}
	return dem;
}
int demPtLe(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
			dem++;
	}
	return dem;
}
int ktSnt(int a)
{
	if(a<2)
		return 0;
	for(int j=2;j<a;j++)
	{
		if(a%j==0)
		{
			return 0;//Co uoc so thu 3
		}
	}
	return 1;
}
int demSnt(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ktSnt(a[i])==1)
			dem++;
	}
	return dem;
}
int SntDt(int a[], int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(ktSnt(a[i])==1)
		{
			c= a[i];
			break;
		}
	}
	return c;
}
void SoDuongLe(int a[], int n)
{
	printf("\nSo duong le trong mang la ");
	for(int i=0;i<n;i++)
	{
		if(a[i]>0 && a[i]%2==1)
			printf("%6d",a[i]);
	}
}
int ktSoAm(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			return 1;
	}
	return 0;
}
int ktX(int a[], int n)
{
	int x,b;
	printf("\n\nNhap X = ");
	scanf("%d",&x);
	for(int i=0; i<n; i++)
	{
		if(a[i]==x)
			return 1;
	}
	return 0;
}






