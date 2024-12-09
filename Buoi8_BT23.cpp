#include<string.h>
#include<stdio.h>
struct CON_NGUOI{
	char hoten[30], diachi[100], gioitinh[4];
	int tuoi;
	float thunhap;
};
typedef struct CON_NGUOI CN;

void nhap(CN *a);
void xuat(CN a);
void thu_nhap_cao_nhat(CN a[], int n);
void tim_nguoi(CN a[], int n, char t[30]);
int main()
{
	int n;
	char t[30];
	printf("So luong nguoi can nhap: ");
	scanf("%d",&n);
	CON_NGUOI a[n];
	for(int i=0;i<n;i++)
		nhap(&a[i]);
	
	printf("\nThong tin vua nhap la: \n");
	for(int i=0;i<n;i++)
	{
		xuat(a[i]);
		printf("\n");
	}
	
	thu_nhap_cao_nhat(a,n);
	
	printf("\nNhap ten nguoi ban muon tim: ");
	fflush(stdin);
	gets(t);
	tim_nguoi(a,n,t);
	return 0;
}
void xuat(CN a)
{
	printf("%s\t%d\t%s\t%s\t%.2f", a.hoten, a.tuoi,a.gioitinh,a.diachi,a.thunhap);
}
void nhap(CN *a)
{
	//Nhap thanh phan ho ten
	printf("\nNhap vao ho ten: ");
	fflush(stdin);
	gets(a->hoten);
		
	//Nhap thanh phan tuoi
	printf("\nHay cho biet tuoi: ");
	scanf("%d", &a->tuoi);
		
	//Nhap thanh phan gioi tinh
	printf("\nNhap thanh phan gioi tinh: ");
	scanf("%s",&a->gioitinh);
	
	//Nhap thanh phan dia chi
	printf("\nNhap thanh phan dia chi: ");
	fflush(stdin);
	gets(a->diachi);

	//Nhap thanh phan thu nhap
	printf("\nNhap thanh phan thu nhap: ");
	scanf("%f",&a->thunhap);
}
void thu_nhap_cao_nhat(CN a[],int n)
{
	float m= a[0].thunhap;
	for(int i=0;i<n;i++)
	{
		if(m<a[i].thunhap)
			m=a[i].thunhap;
	}
	printf("\nNguoi co thu nhap cao nhat la: ");
	for(int i=0;i<n;i++)
	{
		if(a[i].thunhap==m)
			printf("%s",a[i].hoten);
	}
}
void tim_nguoi(CN a[], int n,char t[30])
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(t,a[i].hoten)==0)
		{
			printf("Thong tin nguoi ban tim la: ");
			xuat(a[i]); 
			return;
		}
	}
	printf("Khong thay nguoi ban muon tim kiem");
}
