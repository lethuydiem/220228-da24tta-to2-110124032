#include <stdio.h>
int main()
{
	int a, *ip;
	ip=&a;
	*ip=246;
	printf("\nDia chi cua bien a: %p", &a);
	printf("\nGia tri cua bien a la %d", a);
	printf("\nVung nho con tro ip quan ly: %p", ip);
	printf("\nGia tri tai o nho con tro ip quan ly: %d",*ip);
	
}

