#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *cp;
	/* Cap phat vung nho*/
	cp = (char*)malloc(50*sizeof(char));
	/* Nhap gia tri*/
	printf("\nNhap vao mot chuoi: ");
	fflush(stdin);
	gets(cp);
	
	/* Xuat chuoi vua nhap ra man hinh*/
	printf("\n\nChuoi vua nhap la: ");
	puts(cp);
	free(cp);
	
}
