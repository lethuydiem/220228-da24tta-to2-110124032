
#include <stdio.h>
#include <string.h>

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

void Nhap(sv *a);
void Xuat(sv a);
int TimSV_ms(sv a[], int n, char ms[10]);
int TimSV_ten(sv a[], int n, char ten[30]);
void SV_sinhthang8(sv a[], int n);
int TimSV_gt(sv a[], int n, char gt[3]);
int TimSV_dc(sv a[], int n, char dc[100]);

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    sv a[n];
    
    for (int i = 0; i < n; i++)
        Nhap(&a[i]);
    
    for (int i = 0; i < n; i++)
        Xuat(a[i]);
    
    char ms[10];
    printf("\n\nNhap ma so sinh vien ban muon tim: ");
    scanf("%s", ms);
    printf("%d", TimSV_ms(a, n, ms));
    
    char ten[30];
    printf("\n\nNhap ten sinh vien ban muon tim: ");
    getchar();  
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = 0;  
    printf("%d", TimSV_ten(a, n, ten));
    
    SV_sinhthang8(a, n);
    
    char gt[3];
    printf("\n\nNhap gioi tinh ban muon tim: ");
    scanf("%s", gt);
    printf("%d", TimSV_gt(a, n, gt));
    
    char dc[100];
    printf("\n\nNhap dia chi ban muon tim: ");
    getchar();  
    fgets(dc, sizeof(dc), stdin);
    dc[strcspn(dc, "\n")] = 0;  
    printf("%d", TimSV_dc(a, n, dc));
    
    return 0;
}

void Nhap(sv *a) {
    printf("Nhap ma so sinh vien: ");
    scanf("%s", a->mssv);
    
    printf("Nhap ho ten: ");
    getchar();  
    fgets(a->hoten, sizeof(a->hoten), stdin);
    a->hoten[strcspn(a->hoten, "\n")] = 0;  
    
    printf("Nhap ngay sinh: ");
    scanf("%d %d %d", &a->ngaysinh.ngay, &a->ngaysinh.thang, &a->ngaysinh.nam);
    
    printf("Nhap gioi tinh: ");
    scanf("%s", a->gioitinh);
    
    printf("Nhap dia chi: ");
    getchar(); 
    fgets(a->diachi, sizeof(a->diachi), stdin);
    a->diachi[strcspn(a->diachi, "\n")] = 0;  
    
    printf("Nhap so mon: ");
    scanf("%d", &a->somon);
    
    for (int i = 0; i < a->somon; i++)
	{
        printf("Nhap ma mon %d: ", i + 1);
        scanf("%s", a->mon[i].mamon);
        
        printf("Nhap diem: ");
        scanf("%f", &a->mon[i].diem);
    }
}

void Xuat(sv a) {
    printf("\nMSSV: %s", a.mssv);
    printf("\nHo ten: %s", a.hoten);
    printf("\nNgay sinh: %d / %d / %d", a.ngaysinh.ngay, a.ngaysinh.thang, a.ngaysinh.nam);
    printf("\nGioi tinh: %s", a.gioitinh);
    printf("\nDia chi: %s", a.diachi);
    printf("\nSo mon: %d", a.somon);
    
    for (int i = 0; i < a.somon; i++) 
	{
        printf("\nMa mon %d: %s\tDiem: %.2f", i + 1, a.mon[i].mamon, a.mon[i].diem);
    }
    printf("\n");
}

int TimSV_ms(sv a[], int n, char ms[10]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ms, a[i].mssv) == 0)
            return 1;
    }
    return 0;
}

int TimSV_ten(sv a[], int n, char ten[30]) {
    int found = 0;
    printf("Thong tin sinh vien co ten ban vua tim la:");
    for (int i = 0; i < n; i++) 
	{
        if (strcmp(ten, a[i].hoten) == 0) {
            Xuat(a[i]);
            found = 1;
        }
    }
    return found;
}

void SV_sinhthang8(sv a[], int n) {
    printf("\nThong tin sinh vien sinh thang 8 la:");
    for (int i = 0; i < n; i++) 
	{
        if (a[i].ngaysinh.thang == 8) {
            Xuat(a[i]);
        }
    }
}

int TimSV_gt(sv a[], int n, char gt[3]) {
    int found = 0;
    printf("Thong tin sinh vien co gioi tinh ban vua tim la:");
    for (int i = 0; i < n; i++) 
	{
        if (strcmp(gt, a[i].gioitinh) == 0) 
		{
            Xuat(a[i]);
            found = 1;
        }
    }
    return found;
}

int TimSV_dc(sv a[], int n, char dc[100]) {
    int found = 0;
    printf("Thong tin sinh vien co dia chi ban vua tim la:");
    for (int i = 0; i < n; i++) 
	{
        if (strcmp(dc, a[i].diachi) == 0) 
		{
            Xuat(a[i]);
            found = 1;
        }
    }
    return found;
}
