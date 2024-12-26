#include <stdio.h>

struct date {
    int ngay, thang, nam;
};

struct MonHoc {
    char mamon[20];
    float diem;
};

struct SinhVien {
    char mssv[10], hoten[30], gioitinh[3], diachi[100];
    int somon;
    struct MonHoc mon[20];
    struct date ngaysinh;
};
typedef struct SinhVien sv;

struct LOP_HOC{
	char malop[10], tenlop[10];
	int siso;
	struct SinhVien SV[100];
};

void Nhap( LOP_HOC *a);
void Xuat(LOP_HOC a);
void GhivaoFile(LOP_HOC a[], int n);

int main() {
    int n;
    printf("Nhap so luong lop hoc: ");
    scanf("%d", &n);
    LOP_HOC a[n];
    
    for (int i = 0; i < n; i++)
        Nhap(&a[i]);
    
    for (int i = 0; i < n; i++)
        Xuat(a[i]);
        
    GhivaoFile(a,n); 
    return 0;
}

void Nhap(LOP_HOC *a)
{
	printf("\nNhap ma lop: ");
	scanf("%s",a->malop);
	printf("Nhap ten lop: ");
	fflush(stdin);
	gets(a->tenlop);
	printf("Nhap si so: ");
	scanf("%d",&a->siso);
	
	for(int i=0;i<a->siso;i++)
	{
    	printf("\nNhap ma so sinh vien thu %d: ",i+1);
    	scanf("%s", a->SV[i].mssv);
    
    	printf("Nhap ho ten: ");
    	fflush(stdin);
    	gets(a->SV[i].hoten);

    	printf("Nhap ngay sinh: ");
    	scanf("%d %d %d", &a->SV[i].ngaysinh.ngay, &a->SV[i].ngaysinh.thang, &a->SV[i].ngaysinh.nam);
    
    	printf("Nhap gioi tinh: ");
    	scanf("%s", a->SV[i].gioitinh);
    
    	printf("Nhap dia chi: ");
    	fflush(stdin);
    	gets(a->SV[i].diachi);
    
    	printf("Nhap so mon: ");
    	scanf("%d", &a->SV[i].somon);
    
    	for (int j = 0; j < a->SV[i].somon; j++)
    	{
        	printf("Nhap ma mon %d: ", j + 1);
        	scanf("%s", a->SV[i].mon[j].mamon);
        
        	printf("Nhap diem: ");
        	scanf("%f", &a->SV[i].mon[j].diem);
    	}
    }
}

void Xuat(LOP_HOC a) {
	printf("\nMa lop: %s",a.malop);
	printf("\nTen lop: %s",a.tenlop);
	printf("\nSi so: %d",a.siso);
	for(int i=0;i<a.siso;i++)
	{
		printf("\nMSSV: %s\tTen: %s\tNgay sinh: %d/%d/%d\tGioi tinh: %s\tDiachi: %s\nSo mon: %d",a.SV[i].mssv,a.SV[i].hoten,a.SV[i].ngaysinh.ngay,a.SV[i].ngaysinh.thang,a.SV[i].ngaysinh.nam,a.SV[i].gioitinh,a.SV[i].diachi,a.SV[i].somon);
		for (int j = 0; j < a.SV[i].somon; j++) 
		{
        		printf("\tMa mon %d: %s\tDiem: %.2f", j + 1, a.SV[i].mon[j].mamon, a.SV[i].mon[j].diem);
	   	}
	}
    printf("\n");
}
void GhivaoFile(LOP_HOC a[], int n)
{
	char tenFile[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(tenFile);
	
	FILE *f;
	f=fopen(tenFile,"wb");
	if(f==NULL)
	{
		printf("\nLoi tao hoac mo file!");
		return;
	}
	fwrite(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++)
		fwrite(&a[i], sizeof(LOP_HOC),1,f);
	fclose(f);
}
