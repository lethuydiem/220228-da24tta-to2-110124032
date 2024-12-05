#include <stdio.h>
struct PHAN_SO
{
	int TuSo, MauSo;
};
typedef struct PHAN_SO ps;

void NhapPS(ps *a);
void XuatPS(ps a);
void RutGon(ps c);
void Cong(ps a, ps b, ps c);
void Tru(ps a, ps b, ps c);
void Nhan(ps a, ps b, ps c);
void Chia(ps a, ps b, ps c);
int main()
{
	PHAN_SO a,b,c;
	
	//Goi ham cau a
	NhapPS(&a);
	
	//Goi ham cau b
	XuatPS(a);
	
	//Goi ham cau a
	NhapPS(&b);
	
	//Goi ham cau b
	XuatPS(b);
	
	//Goi ham cau c
	printf("Phan so thu nhat sau khi rut gon:");
	RutGon(a);
	
	//Goi ham cau d
	Cong(a,b,c);
	
	
	//Goi ham cau e
	Tru(a,b,c);
	
	//Goi ham cau f
	Nhan(a,b,c);
	
	//Goi ham cau g
	Chia(a,b,c);
	return 0;
}
void NhapPS(ps *a)
{
	printf("\nNhap vao tu so: ");
	scanf("%d",&a->TuSo);
	printf("Nhap vao mau so: ");
	scanf("%d",&a->MauSo);
}
void XuatPS(ps a)
{
	printf("Phan so vua nhap la: %d/%d\n",a.TuSo,a.MauSo);
}
void RutGon(ps c)
{
	for(int i=2;i<10;i++)
	{
		while(c.TuSo%i==0&&c.MauSo%i==0)
		{
			for(int i=2;i<10;i++)
			{
				if(c.TuSo%i==0&&c.MauSo%i==0)
				{
					c.TuSo=c.TuSo/i;
					c.MauSo=c.MauSo/i;
				}
			}
		}
	}
	if(c.MauSo!=1)
		printf("%d/%d",c.TuSo,c.MauSo);
	else
		printf("%d",c.TuSo);
}
void Cong(ps a, ps b, ps c)
{
	printf("\nPhan so thu nhat sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so thu hai sau khi rut gon: ");
	RutGon(b);
	
	c.MauSo=a.MauSo*b.MauSo;
	c.TuSo=a.TuSo*b.MauSo+b.TuSo*a.MauSo;
	printf("\nTong hai phan so la: ");
	RutGon(c);
}
void Tru(ps a, ps b, ps c)
{
	printf("\nPhan so thu nhat sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so thu hai sau khi rut gon: ");
	RutGon(b);
	
	c.MauSo=a.MauSo*b.MauSo;
	c.TuSo=a.TuSo*b.MauSo-b.TuSo*a.MauSo;
	printf("\nHieu hai phan so la: ");
	RutGon(c);	
}
void Nhan(ps a, ps b, ps c)
{
	printf("\nPhan so thu nhat sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so thu hai sau khi rut gon: ");
	RutGon(b);
	
	c.MauSo=a.MauSo*b.MauSo;
	c.TuSo=a.TuSo*b.TuSo;
	printf("\nTich hai phan so la: ");
	RutGon(c);	
}
void Chia(ps a, ps b, ps c)
{
	printf("\nPhan so thu nhat sau khi rut gon: ");
	RutGon(a);
	printf("\nPhan so thu hai sau khi rut gon: ");
	RutGon(b);
	
	c.MauSo=a.MauSo*b.TuSo;
	c.TuSo=a.TuSo*b.MauSo;
	printf("\nThuong hai phan so la: ");
	RutGon(c);	
}
