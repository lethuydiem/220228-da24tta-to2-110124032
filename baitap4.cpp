#include <stdio.h>
int main()
{
	//Khai bao du bien
	int SoLuong, ChiPhiVanChuyen, DonGia, DoanhThu;
	printf("Nhap so luong: ");
	scanf("%d",&SoLuong);
	printf("Nhap don gia: ");
	scanf("%d",&DonGia);
	printf("Nhap chi phi van chuyen: ");
	scanf("%d",&ChiPhiVanChuyen);
	
	//Tinh doanh thu
	DoanhThu=SoLuong*DonGia-ChiPhiVanChuyen;
	
	//In doanh thu ra man hinh
	printf("Doanh thu trong ngay cua cong ty A: %d",DoanhThu);
	return 0;
}
