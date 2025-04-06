#include <stdio.h>
#include <stdlib.h>


#define MAX 100

//Khai bao stack
typedef struct {
	int data[MAX];
	int top;
}Stack;

//Khoi tao Stack
void init(Stack *s){
	s->top=-1;
}

//Kiem tra stack rong
int isEmpty(Stack *s){
	return s->top ==-1;
}

//Kiem tra stack day
int isFull(Stack *s){
	return s->top==MAX - 1;
}

//Them phan tu vao stack
void push(Stack *s, int value){
	if(isFull(s)){
		printf("Stack day! Khong the tham phan tu/\\n");
		return;
	}
	s->data[++s->top]= value;
	printf("Da them %d vao stack.\n",value);
}

//Lay phan tu stack
int pop(Stack *s){
	if(isEmpty(s)){
		printf("Stack rong! Khong the lay phan tu.\n");
		return -1;
	}
	return s->data[s->top--];
}

//Xem phan tu tren dinh
int peek(Stack *s){
	if(isEmpty(s)){
		printf("Stack rong!\n");
		return -1;
	}
	return s->data[s->top];
}

//Hien thi Stack
void display(Stack *s){
	if(isEmpty(s)){
		printf("Stack rong!\n");
		return;
	}
	printf("Cac phan tu trong stack: ");
	for(int i=0;i<=s->top; i++){
		printf("%d",s->data[i]);
	}
	printf("\n");
}

//Tinh tong
void Sum(Stack *s){
	int sum=0;
	if(isEmpty(s)){
		printf("Stack rong!\n");
		return;
	}
	for(int i=0;i<=s->top; i++){
		sum+= s->data[i];
	}
	printf("Tong cac phan tu trong stack: %d\n",sum);
}

//Tim vi tri
void Found(Stack *s, int value)
{
	int x, found =0;
	printf("Nhap vao gia tri can tim: x=");
	scanf("%d",&x);
	if(isEmpty(s)){
		printf("Stack rong!\n");
		return;
	}
	for(int i=0;i<=s->top; i++){
		if(s->data[i]==x){
			printf("Vi tri Stack:%d", i);
			found=1;
		}
	}
	if(found!=1)
		printf("Khong tim thay gia tri vua nhap trong Stack!");
}

int main(){
	Stack s;
	init(&s);
	
	int choice, value;
	
	do{
		printf("\n--- Menu Stack ---\n");
		printf("1. Push\n2. Pop\n3. Peek\n4. Hien thi\n5. Tinh tong\n6. Tim vi tri\n0. Thoat\n");
		printf("Chon thao tac: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Nhap gia tri can them: ");
				scanf("%d",&value);
				push(&s, value);
				break;
			case 2:
				value = pop(&s);
				if (value != -1)
					printf("Da lay ra: %d\n", value);
				break;
			case 3:
				value=peek(&s);
				if(value != -1)
					printf("Phan tu tren cung la: %d\n", value);
				break;
			case 4:
				display(&s);
				break;
			case 5:
				Sum(&s);
				break;
			case 6:
				Found(&s,value);
				break;
			case 0:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Lua chon khong hop le!\n");
		}
	}while (choice !=0);
	return 0;
}










