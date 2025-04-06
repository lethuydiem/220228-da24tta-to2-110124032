#include <stdio.h>
#include <stdlib.h>

//Khai bao node
typedef struct Node{
	int data;
	struct Node* next;
} Node;

//Con tro dinh cua Stack
Node* top = NULL;

//Ham kiem tra Stack rong
int isEmpty(){
	return top == NULL;
}

//Them phan tu vao Stack
void push(int value){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(!newNode){
		printf("Khong the cap phat bo nho!\n");
		return;
	}
	newNode->data = value;
	newNode->next = top;
	top = newNode;
	printf("Da them %d vao stack.\n");
}

//Lay phan tu ra khoi Stack
int pop(){
	if(isEmpty()){
		printf("Stack rong! Khong the pop.\n");
		return -1;
	}
	Node* temp = top;
	int popped = temp->data;
	top = top->next;
	free(temp);
	return popped;
}

//Xem phan tu(peek)
int peek(){
	if (isEmpty()){
		printf("Stack rong!\n");
		return -1;
	}
	return top->data;
}

//Hien thi Stack
void display(){
	if(isEmpty()){
		printf("Stack rong!\n");
		return;
	}
	Node* temp = top;
	printf("Cac phan tu trong stack: ");
	while (temp!=NULL){
		printf("%d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int sumStack(){
	int sum =0;
	Node* temp = top;
	while(temp !=NULL){
		sum+= temp->data;
		temp = temp->next;
	}
	return sum;
}

int countStack()
{
	int count =0;
	Node* temp =top;
	while (temp !=NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

int main(){
	int choice, value;
	
	do{
		printf("\n--- Menu Stack (Linked List) ---\n");
		printf("1. Push\n2. Pop\n3. Peek\n4. Hien thi\n5. Tong cua Stack \n6. So phan tu trong Stack\n0. Thoat\n");
		printf("Chon thao tac: ");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
				printf("Nhap gia tri can them: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				value = pop();
				if(value!=-1)
					printf("Da lay ra: %d\n",value);
				break;
			case 3:
				value = peek();
				if(value!=-1)
					printf("Phan tu tren cung la: %d\n", value);
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Tong cac phan tu la: %d\n",sumStack());
				break;
			case 6:
				printf("So phan tu trong Stack la: %d\n", countStack());
				break;			
			case 0:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Lua chon khong hop ly\n");
		}
	}while (choice!=0);
	return 0;
}
