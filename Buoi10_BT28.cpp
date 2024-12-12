#include <stdio.h>
void Nhap(int a[], int &n);
void Xuat(int a[], int n);
void XuatFile(int a[], int n, char tenFile[50]);
int main()
{
	int n, a[50];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	XuatFile(a,n,"Bai28.txt");
	
}
void Nhap(int a[], int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void Xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void XuatFile(int a[], int n, char tenFile[50])
{
	FILE *f;
	f=fopen(tenFile,"w");
	if(f==NULL)
	{
		printf("\nLoi tao hoac mo file");\
		return;
	}
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++)
		fprintf(f,"%d  ",a[i]);
	fclose(f);
}
