#include <stdio.h>
#include <stdlib.h>
/*Bai toan sap xep*/
int chi_so_lon(int *a, int n);
void sap_tang(int *a, int n);
int main()
{
	int *a=(int *)malloc(sizeof(int)*6);
	for(int i=0;i<6;i++)
	{
		printf("\nNhap so nguyen thu %d: ",i);
		scanf("%d",a+i);
	}
	sap_tang(a,6);
	printf("\nDay sau khi sap xep tang:");
	for(int i=0;i<6;i++)
		printf("%5d",*(a+i));
}
int chi_so_lon(int *a, int n) {
    int max_idx = 0;  
    for (int i = 1; i < n; i++) {
        if (*(a + i) > *(a + max_idx)) {
            max_idx = i; 
        }
    }
    return max_idx;
}
void sap_tang(int *a, int n)
{
	if(n>1)
	{
		int cs =chi_so_lon(a,n-1);
		if(*(a+cs)>*(a+(n-1)))
		{
			int t=*(a+cs);
			*(a+cs)=*(a+(n-1));
			*(a+(n-1))=t;
		}
		sap_tang(a,n-1);
	}
}


