#include <stdio.h>
int kt_snt(int a);
int tinh_tong(int a);
int tong_le(int a);
int tong_snt(int a);
float tbc_le(int a);
float tbc_snt(int a);
int main()
{
	int n, s=0;
	do
	{
	printf(" Nhap n = ");
	scanf("%d",&n);
	}while(n<=0||n>=100);
	
	printf(" Cac gia tri tu 1 den n: ");
	for(int i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
	
	printf("\n Cac gia tri chan tu 1 den n: ");
	for(int i=2;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	
	printf("\n Cac gia tri chia het cho 5 tu 1 den %d: ",n);
	for(int i=1;i<=n;i++)
	{
		if(i%5==0)
			printf("%d ",i);
	}
	
	printf("\n Cac so nguyen to nho hon %d: ",n);
	for(int i=1;i<n;i++)
	{
		if(kt_snt(i)==1)
		{
			printf("%d ",i);
		}
	}
		
	printf("\n Tong cac gia tri tu 1 den %d: %d",n,tinh_tong(n));
	
	printf("\n Tong cac gia tri le tu 1 den %d: %d",n,tong_le(n));
	
	printf("\n Tong cac so nguyen to nho hon %d: %d",n,tong_snt(n));
	
	printf("\n Trung binh cong cac so le tu 1 den %d: %.2f",n,tbc_le(n));
	
	printf("\n Trung binh cong cac so nguyen to nho hon %d: %.2f",n,tbc_snt(n));
	return 0;
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
int tinh_tong(int a)
{
	int s=0;
	for(int i=1;i<=a;i++)
	{
		s+=i;
	}
	return s;
}
int tong_le(int a)
{
	int s=0;
	for(int i=1;i<=a;i=i+2)
	{
		s+=i;
	}
	return s;
}
int tong_snt(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(kt_snt(i)==1)
		{
			s+=i;
		}
	}
	return s;
}
float tbc_le(int a)
{
	int dem=0;
	float s=0;
	for(int i=1;i<=a;i=i+2)
	{
		s+=i;
		dem++;	
	}
	s=(float)s/dem;
	return s;
}
float tbc_snt(int a)
{
	int dem=0;
	float s=0;
	for(int i=1;i<a;i++)
	{
		if(kt_snt(i)==1)
		{
			s+=i;
			dem++;
		}
	}
	return s/dem;
}
