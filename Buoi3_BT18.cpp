#include <stdio.h>
int tong_cs(int a);
int tong_cs_le(int a);
int kt_snt(int a);
int tong_cs_snt(int a);
int dem_0(int a);
int dem_cs_chia_het_3(int a);
int dem_cs_chia_het_5(int a);
int main()
{
	int n;
	do
	{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<100||n>=10000);
	
	printf("Tong cac chu so cua %d: %d ",n, tong_cs(n));
	
	printf("\nTong cac chu so le cua %d: %d ",n, tong_cs_le(n));
	
	printf("\nTong cac chu so la so nguyen to cua %d: %d ",n, tong_cs_snt(n));
	
	printf("\nSo chu so 0 cua %d: %d ",n, dem_0(n));
	
	printf("\nSo chu so chia het cho 3 cua %d: %d ",n, dem_cs_chia_het_3(n));
	
		printf("\nSo chu so chia het cho 5 cua %d: %d ",n, dem_cs_chia_het_3(n));
	return 0;
}
int tong_cs(int a)
{
	int s=0,du;
	while(a>0)
	{
		du=a%10;
		s+=du;
		a=a/10;
	}
	return s;
}
int tong_cs_le(int a)
{
	int s=0,du;
	while(a>0)
	{
		du=a%10;
		if(du%2==1)
		{
			s+=du;
		}
		a=a/10;
	}
	return s;
}
int kt_snt(int a)
{
	if(a==2)
		return 1;
	else if(a>2)
	{
		for(int j=2;j<a;j++)
		{
			if(a%j!=0)
			{
				return 1;
			}
			else
				return 0;
		}
	}
	else
		return 0;
}
int tong_cs_snt(int a)
{
	int s=0,du;
	while(a>0)
	{
		du=a%10;
		if(kt_snt(a)==1)
		{
			s+=du;
		}
		a=a/10;
	}
	return s;	
}
int dem_0(int a)
{
	int s=0,du,dem=0;
	while(a>0)
	{
		du=a%10;
		if(du==0)
		{
			dem++;
		}
		a=a/10;
	}
	return dem;	
}
int dem_cs_chia_het_3(int a)
{
	int s=0,du,dem=0;
	while(a>0)
	{
		du=a%10;
		if(du%3==0)
		{
			dem++;
		}
		a=a/10;
	}
	return dem;
}
int dem_cs_chia_het_5(int a)
{
	int s=0,du,dem=0;
	while(a>0)
	{
		du=a%10;
		if(du%5==0)
		{
			dem++;
		}
		a=a/10;
	}
	return dem;
}
