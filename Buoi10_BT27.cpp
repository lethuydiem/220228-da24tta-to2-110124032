#include <stdio.h>-
main()
{
//Khai bao
	FILE *fp;
	char path[50];
	printf("nhap duong dan: ");
	fflush(stdin);
	gets(path);
	
//Tao hoac mo file
	fp=fopen(path,"wt");
	if(fp==NULL)
		printf("\nLoi mo file");
	else
	{
//Ghi vao file
		fprintf(fp,"Hoc phai di doi voi hanh");
		
//Dong file
		fclose(fp);
	}
}
