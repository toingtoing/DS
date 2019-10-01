#include<stdio.h>
#pragma warning(disable:4996);
void push(int* stk, int size,int top) {
	printf("\nEnter the element you wan't to insert in the stack:\n");
	int data;
	scanf("%d", &data);
	*(stk + top) = data;

}
void display(int *stk, int size) {
	for (int i = 0; i < size; i++) {
		printf("\nElement %d : %d\n", i + 1, *(stk + i));
	}

}
void main() {
	int stack[10];
	int top = 1;
	int size = 10;
	int choice;
	do {
		printf("\nEnter if you want to push elements in the stack:0(yes) 1(no)\n");
		scanf("%d", &choice);
		push(stack, size, top-1);
		++top;
	} while (choice == 0 && top <=10);
	display(stack,top);

}