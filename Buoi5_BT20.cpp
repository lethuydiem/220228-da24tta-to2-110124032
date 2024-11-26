#define SIZE 100
#include <stdio.h>
void NhapMang(float a[], int n);
void XuatMang(float a[], int n);
float sum(float a[], int n);
float TbcVtLe(float a[], int n);
int DemDuong(float a[], int n);
void SxTang(float a[], int n);
void InGtVtLe(float a[], int n);
void VtGt0(float a[], int n);
void TimMax(float a[], int n);
int VtMaxDt(float a[], int n);
void InVtMax(float a[], int n);
int KtSoAm(float a[], int n);
int main()
{
	float a[SIZE];
	int n;
	do
	{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	
	//Goi ham cau a
	NhapMang(a,n);
	
	//Goi ham cau b
	XuatMang(a,n);
	
	//Goi ham cau c
	printf("\nTong cac phan tu cua mang la: %.2f",sum(a,n));
	
	//Goi ham cau d
	printf("\nTrung binh cong cac phan tu tai vi tri le cua mang la: %.2f",TbcVtLe(a,n));
	
	//Goi ham cau e
	printf("\nSo phan tu duong trong mang la: %d",DemDuong(a,n));
	
	//Goi ham cau f
	//SxTang(a,n);
	
	//Goi ham cau g
	InGtVtLe(a,n);
	
	//Goi ham cau h
	VtGt0(a,n);
	
	//Goi ham cau i
	TimMax(a,n);
	
	//Goi ham cau j
	printf("\nVi tri co gia tri lon nhat dau tien la: A[%d]",VtMaxDt(a,n));
	
	//Goi ham cau k
	InVtMax(a,n);
	
	//Goi ham cau l
	if(KtSoAm(a,n)==0)
		printf("\nHam khong phai toan so am");
	else
		printf("\nHam toan so am");
	return 0;
}
void NhapMang(float a[], int n)
{
	printf("Nhap mang: \n");
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%f",&a[i]);
	}
}
void XuatMang(float a[], int n)
{
	printf("Xuat mang: ");
	for(int i=0;i<n;i++)
	{
		printf("\t%.2f\t",a[i]);
	}
}
float sum(float a[], int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}
float TbcVtLe(float a[], int n)
{
	float s=0;
	int dem=0;
	for(int i=1;i<n;i=i+2)
	{
		s+=a[i];
		dem++;
	}
	return s/dem;
}
int DemDuong(float a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			dem++;
	}
	return dem;
}
void SxTang(float a[], int n)
{
	float t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nMang sau khi sap xep tang:\n");
	XuatMang(a,n);
}
void InGtVtLe(float a[], int n)
{
	printf("\nCac gia tri tai vi tri le:\t");
	for(int i=1;i<n;i=i+2)
	{
		printf("%.2f\t",a[i]);
	}
}
void VtGt0(float a[], int n)
{
	printf("\nCac vi tri co gia tri 0 la:\t");
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			printf("A[%d]\t",i);
		}
	}
}
void TimMax(float a[], int n)
{
	float m=a[0];
	printf("\nGia tri lon nhat trong mang la:\t");
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	printf("%.2f",m);
}
int VtMaxDt(float a[], int n)
{
	float m=a[0];
	int vt;
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
			vt=i;
		}
	}
	return vt;
}
void InVtMax(float a[], int n)
{
	printf("\nCac vi tri co gia tri lon nhat trong mang la:\t");
	float m=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
			printf("A[%d]\t",i);
	}
}
int KtSoAm(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
			return 0;
	}
}

