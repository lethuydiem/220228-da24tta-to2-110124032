#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct NGAY_THANG{
	int ngay, thang, nam;
};
struct SanPham{
	char masp[20], tensp[50];
	float dongia, tgsd;
	struct NGAY_THANG date;
};
typedef struct SanPham sp;
void Nhap(sp a[], int &n);
void Xuat(sp a[], int n);
void GhivaoFile(sp a[], int &n);
void DocFile(sp a[], int &n);
int TimSP_ma(sp a[], int n, char ma[20]);
int TimSP_ten(sp a[], int n, char ten[50]);
int TimSP_namsx(sp a[], int n, int year);
void sxGiam_dongia(sp a[], int n);
int main()
{
	int n;
	do
	{
		printf("Nhap so luong san pham: ");
		scanf("%d",&n);
	}while(n<=0);
	
	sp a[n];
// Nhap va ghi vao file	
//	Nhap(a,n);
//	GhivaoFile(a,n);

//Hien thi ra man hinh danh sach san pham
	DocFile(a,n);

// Tim san pham theo ma	
	char ma[20];
    printf("\n\nNhap ma san pham ban muon tim: ");
    scanf("%s", ma);
    printf("%d", TimSP_ma(a, n, ma));

// Tim san pham theo ten
    char ten[50];
    printf("\n\nNhap ten san pham ban muon tim: ");
    fflush(stdin);
    gets(ten);
    printf("%d", TimSP_ten(a, n, ten));
    
// Tim san pham theo nam san xuat
    int year;
    printf("\n\nNhap nam san xuat cua san pham ban muon tim: ");
    scanf("%d", &year);
    printf("%d", TimSP_namsx(a, n, year));
    
// Sap xep giam theo don gia
	sxGiam_dongia(a,n);
	return 0;
}
void Nhap(sp a[], int &n)
{
	for(int i=0;i<n;i++)
	{
	printf("Nhap ma san pham: ");
	scanf("%s",a[i].masp);
	printf("Nhap ten san pham: ");
	fflush(stdin);
	gets(a[i].tensp);
	printf("Nhap don gia: ");
	scanf("%f",&a[i].dongia);
	printf("Nhap ngay san xuat: ");
	scanf("%d %d %d",&a[i].date.ngay,&a[i].date.thang, &a[i].date.nam);
	printf("Nhap thoi gian su dung: ");
	scanf("%f",&a[i].tgsd);
	printf("\n");
	}
}
void Xuat(sp a)
{
	printf("\nMa san pham: %s\tTen san pham: %s\tDon gia: %.2f\tNgay san xuat: %d / %d / %d\t HSD: %.2f nam\t", a.masp,a.tensp,a.dongia,a.date.ngay,a.date.thang, a.date.nam, a.tgsd);
}
void GhivaoFile(sp a[], int &n)
{
	char tenFile[50];
	printf("Nhap ten file: ");
	fflush(stdin);
	gets(tenFile);
	
	FILE *f;
	f=fopen(tenFile,"wb");
	if(f==NULL)
	{
		printf("\nLoi tao hoac mo file");
		return;
	}
	fwrite(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++)
		fwrite(&a[i], sizeof(sp),1,f);
	fclose(f);
}
void DocFile(sp a[], int &n)
{
	char tenFile[50];
	printf("Nhap ten file: ");
	fflush(stdin);
	gets(tenFile);
	
	FILE *f;
	f=fopen(tenFile,"rb");
	if(f==NULL)
	{
		printf("\nLoi tao hoac mo file");
		return;
	}
	fread(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++)
		fread(&a[i], sizeof(sp),1,f);
	fclose(f);
	for(int i=0;i<n;i++)
		Xuat(a[i]);
}
int TimSP_ma(sp a[], int n, char ma[20]) 
{
	int found = 0;
    printf("Thong tin san pham theo ma ban vua tim la:");
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(ma, a[i].masp) == 0) 
	{
            Xuat(a[i]);
            found++;
        }
    }
    return found;
}
int TimSP_ten(sp a[], int n, char ten[50])
{
	int found=0;
	printf("Thong tin san pham theo ten ban vua tim la: ");
	for(int i=0;i<n;i++)
	{
		if(strcmp(ten,a[i].tensp)==0)
		{
			Xuat(a[i]);
			found++;
		}
	}
	return found;
}
int TimSP_namsx(sp a[], int n, int year)
{
	int found=0;
	printf("Thong tin san pham co nam san xuat ban vua tim la: ");
	for(int i=0;i<n;i++)
	{
		if(year==a[i].date.nam)
		{
			Xuat(a[i]);
			found++;
		}
	}
	return found;
}
void sxGiam_dongia(sp a[], int n)
{
	sp t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[i].dongia<a[i+1].dongia)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	
	printf("\nTen san pham sau khi sap xep giam theo don gia:\n");
	for(int i=0;i<n;i++)
		Xuat(a[i]);
}
