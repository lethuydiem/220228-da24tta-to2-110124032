#define col 30
#define row 30
#include <stdio.h>
void NhapMang(int a[][30], int n, int m);
void XuatMang(int a[][30], int n, int m);
int sum(int a[][30], int n, int m);
int TongDong(int a[][30], int n, int m, int &k);
int TongCot(int a[][30], int n, int m, int &k);
int KtSoAm(int a[][30], int n, int m, int &k);
int KtSnt(int t);
int KtSntCot(int a[][30], int n, int m, int &k);
void SxGiam(int a[][30], int n, int m, int &k);
int KtCotLe(int a[][30], int n, int m, int &k);
int KtTonTaiX(int a[][30], int n, int m, int &x);
void ViTriX(int a[][30], int n, int m, int &x);
int MaxDong(int a[][30], int n, int m, int &k);
int MinDong(int a[][30], int n, int m, int &k);
void InSnt(int a[][30], int n, int m, int &k);
int main()
{
	int a[row][col], n, m, k, x;
	do
	{
		printf("So dong va cot cua mang: ");
		scanf("%d %d",&n,&m);
	}while(n<0||m<0||n>30||m>30);
	
	//Goi ham cau a
	NhapMang(a,n,m);
	
	//Goi ham cau b
	XuatMang(a,n,m);
	
	//Goi ham cau c
	printf("Tong cac phan tu cua mang la: %d",sum(a,n,m));
	
	//Goi ham cau d
	printf("Tong cac phan tu tren dong %d la: %d",k,TongDong(a,n,m,k));
	
	//Goi ham cau e
	printf("Tong cac phan tu tren cot %d la: %d",k,TongCot(a,n,m,k));

	//Goi ham cau f
	if(KtSoAm(a,n,m,k)==1)
		printf("\nDong %d co ton tai so am",k);
	else
		printf("\nDong %d khong ton tai so am",k);
		
	//Goi ham cau g
	if(KtSntCot(a,n,m,k)==1)	
		printf("\nCot %d co ton tai so nguyen to",k);
	else
		printf("\nCot %d khong ton tai so nguyen to",k)	;
		
	//Goi ham cau h
	SxGiam(a,n,m,k);
	
	//Goi ham cau i
	if(KtCotLe(a,n,m,k)==1)
		printf("Cot %d toan so le",k);
	else
		printf("Cot %d khong co toan so le",k);
		
	//Goi ham cau j
	if(KtTonTaiX(a,n,m,x)==1)
		printf("\nMang co ton tai gia tri %d",x);
	else
		printf("\nMang khong ton tai gia tri %d",x);
		
	//Goi ham cau k
	ViTriX(a,n,m,x);
	
	//Goi ham cau l
	printf("\nGia tri lon nhat tren dong %d la: %d",k,MaxDong(a,n,m,k));
	
	//Goi ham cau m
	printf("\nGia tri nho nhat tren dong %d la: %d",k,MinDong(a,n,m,k));
	
	//Goi ham cau n
	InSnt(a,m,n,k);
	return 0;
}
void NhapMang(int a[][30], int n, int m)
{
	printf("Nhap mang: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void XuatMang(int a[][30], int n, int m)
{
	printf("Xuat mang:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int sum(int a[][30], int n, int m)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s+=a[i][j];
		}
	}
	return s;
}

int TongDong(int a[][30], int n, int m, int &k)
{
	int s=0;
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		for(int j=0;j<m;j++)
		{
			s+=a[k][j];
		}
	}
	return s;
}

int TongCot(int a[][30], int n, int m, int &k)
{
	int s=0;
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=m)
		printf("\nCot khong hop le! ");
	else
	{
		for(int i=0;i<n;i++)
		{
			s+=a[i][k];
		}
	}
	return s;
}

int KtSoAm(int a[][30], int n, int m, int &k)
{
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		for(int j=0;j<m;j++)
		{
			if(a[k][j]<0)
				return 1;
		}
	}
}

int KtSnt(int t)
{
	if(t<2)
		return 0;
	else
	{
		for(int i=2;i<t;i++)
		{
			if(t%i==0)
				return 0;
		}
		return 1;
	}
}

int KtSntCot(int a[][30], int n, int m, int &k)
{
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=m)
		printf("\nCot khong hop le! ");
	else
	{
		for(int i=0;i<n;i++)
		{
			if(KtSnt(a[i][k])==1)
				return 1;
		}
	}
}

void SxGiam(int a[][30], int n, int m, int &k)
{
	int t;
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		for(int j=0;j<m-1;j++)
		{
			for(int l=0;l<m-1;l++)
			{
				if(a[k][l]<a[k][l+1])
				{
					t=a[k][l];
					a[k][l]=a[k][l+1];
					a[k][l+1]=t;
				}
			}
		}
	}
	printf("\nDong %d sau khi sap xep giam:\n",k);
	XuatMang(a,n,m);
}

int KtCotLe(int a[][30], int n, int m, int &k)
{
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=m)
		printf("\nCot khong hop le! ");	
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i][k]%2==0)
				return 0;
		}
		return 1;
	}
}

int KtTonTaiX(int a[][30], int n, int m, int &x)
{
	printf("\nX = ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==x)
				return 1;
		}
	}
}

void ViTriX(int a[][30], int n, int m, int &x)
{
	printf("\nX = ");
	scanf("%d",&x);
	printf("Vi tri co gia tri bang %d la: ",x);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==x)
				printf("A[%d][%d]\t",i,j);
		}
	}
}

int MaxDong(int a[][30], int n, int m, int &k)
{
	int max=a[k][0];
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		for(int j=0;j<m;j++)
		{
			if(a[k][j]>max)
				max=a[k][j];
		}
	}
	return max;
}

int MinDong(int a[][30], int n, int m, int &k)
{
	int min=a[k][0];
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		for(int j=0;j<m;j++)
		{
			if(a[k][j]<min)
				min=a[k][j];
		}
	}
	return min;
}

void InSnt(int a[][30], int n, int m, int &k)
{
	printf("\nk = ");
	scanf("%d",&k);
	if(k<0||k>=n)
		printf("\nDong khong hop le! ");
	else
	{
		printf("Cac so nguyen to tren dong %d la:\t",k);
		for(int j=0;j<m;j++)
		{
			if(KtSnt(a[k][j])==1)
				printf("%d\t",a[k][j]);
		}
	}
}



