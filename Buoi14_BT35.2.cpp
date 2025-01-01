#include <stdio.h>
/*De qui nhi phan*/
unsigned int tinhFn(unsigned int n);
int main()
{
	printf("%d", tinhFn(5));
}
unsigned int tinhFn(unsigned int n)
{
	if(n==0||n==1)
		return 1;
	else
		return tinhFn(n-1)+tinhFn(n-2);
}
