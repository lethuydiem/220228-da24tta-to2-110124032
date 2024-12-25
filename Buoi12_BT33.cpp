#include <stdio.h>
struct PHAN_SO
{
	int TuSo, MauSo;
};
typedef struct PHAN_SO ps;

void NhapPS(ps a[], int n);
void XuatPS(ps a[], int n);
void RutGon(ps c);
void GhivaoFile(ps a[], int n);
void DocFile(ps a[], int n);
ps TimPS_Min(ps a[], int n);
int DemPS_Min(ps a[], int n);
int UCLN(int p, int q);
int BCNN(int p, int q);
void SX_Giam(ps a[], int n);

int main()
{
	int n;
	do
	{
		printf("So luong cac phan so:");
		scanf("%d",&n);
	}while(n<=0);
	PHAN_SO a[n],c;
	
	NhapPS(a,n);
//Goi ham cau a
	GhivaoFile(a,n);

//Goi ham cau b
	DocFile(a,n);

//Goi ham cau c
	ps d= TimPS_Min(a,n);
	printf("\nPhan so nho nhat la: %d/%d",d.TuSo,d.MauSo);
	
//Goi ham cau d
	printf("\n\nSo phan so nho nhat la: %d",DemPS_Min(a,n));

//Goi ham cau e	
	SX_Giam(a,n);
	return 0;
}

void NhapPS(ps a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao tu so: ");
		scanf("%d",&a[i].TuSo);
		do
		{
			printf("Nhap vao mau so: ");
			scanf("%d",&a[i].MauSo);
		}while(a[i].MauSo==0);
	}
}

void XuatPS(ps a[],int n)
{
	for(int i=0;i<n;i++)
	{
		RutGon(a[i]);
	}
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
		printf("%d/%d\n",c.TuSo,c.MauSo);
	else
		printf("%d\n",c.TuSo);
}

void GhivaoFile(ps a[], int n)
{
	FILE *f;
	char tenfile[50];
	printf("Nhap duong dan: ");
	fflush(stdin);
	gets(tenfile);
	
	f=fopen(tenfile,"wt");
	if(f==NULL)
	{
		printf("Loi tao hoac mo file!");
		return;
	}
	
	fprintf(f,"So luong phan so: %d\n",n);
	for(int i=0;i<n;i++)
	{
		fprintf(f,"%d/%d\n",a[i].TuSo,a[i].MauSo);
	}
	fclose(f);
}

void DocFile(ps a[], int n)
{
	FILE *f;
	char tenfile[50];
	printf("Nhap duong dan: ");
	fflush(stdin);
	gets(tenfile);
	
	f=fopen(tenfile,"rt");
	if(f==NULL)
	{
		printf("Loi tao hoac mo file!");
		return;
	}
	
	fscanf(f,"So luong phan so: %d",&n);
	for(int i=0;i<n;i++)
		fscanf(f,"%d/%d\n",&a[i].TuSo,&a[i].MauSo);
	XuatPS(a,n);
	fclose(f);
}

ps TimPS_Min(ps a[], int n)
{
	double min =(float)a[0].TuSo/a[0].MauSo;
	int t=0;
	for(int i=0;i<n;i++)
	{
		double b= (float)a[i].TuSo/a[i].MauSo;
		if(b<min)
		{
			min=b;
			t=i;
		}
	}
	return a[t];
}

int DemPS_Min(ps a[], int n)
{
	int dem=0;
	ps d= TimPS_Min(a,n);
	double t= (float)d.TuSo/d.MauSo;
	for(int i=0;i<n;i++)
	{
		double b= (float)a[i].TuSo/a[i].MauSo;
		if(b==t)
			dem++;	
	}
	return dem;
}

int UCLN(int p, int q)
{
	while(q!=0)
	{
		int r= p%q;
		p=q;
		q=r;
	}
	return p;
}
int BCNN(int p, int q)
{
	return p*q/UCLN(p,q);
}
void SX_Giam(ps a[], int n)
{
	int MS=a[0].MauSo;
	for(int i=1;i<n;i++)
	{
		MS=BCNN(MS,a[i].MauSo);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int TS1=a[i].TuSo*(MS/a[i].MauSo);
			int TS2=a[j].TuSo*(MS/a[j].MauSo);
			if(TS1<TS2)
			{
				ps t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\nCac phan tu sau khi sap xep giam: ");
	for(int i=0;i<n;i++)
	{
		printf("%d/%d\t",a[i].TuSo,a[i].MauSo);
	}
}
