#include <stdio.h>
#include <stdlib.h>
void Xuat(int *p, int n);
int main()
{
	FILE *f;
	int *p,n;
	f=fopen("Bai28.txt","rt");
	if(p==NULL)
	{
		printf("Loi mo file!");
		exit(1);
	}
	else
	{
		fscanf(f,"%d",&n);
		p=(int*) malloc(sizeof(int)*n);
		for(int i=0;i<n;i++)
		{
			fscanf(f,"%d",p+i);
		}
	}
	Xuat(p,n);
	fclose(f);
}
void Xuat(int *p, int n)
{
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%d  ",*(p+i));
	}
}
