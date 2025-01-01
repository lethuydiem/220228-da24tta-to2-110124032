/*Bai toan thap Ha Noi*/
#include <stdio.h>
void MoveDick(int src, int des);
void Tower(int n, int cot1, int cot2, int cot3);
int main()
{
	Tower(3,1,2,3);
}
void MoveDick(int src, int des)
{
	printf("\nTu %d den %d \n",src,des);
}
void Tower(int n, int cot1, int cot2, int cot3)
{
	if(n>0)
	{
		Tower(n-1,cot1,cot3,cot2);
		MoveDick(cot1, cot3);
		Tower(n-1,cot2,cot1,cot3);
	}
}
