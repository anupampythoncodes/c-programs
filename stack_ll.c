#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int data){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL){
		printf("stack overflow");
	}
	else{
	newnode->data=data;
	newnode->next = top;
	top = newnode;
	}
}
void pop(){
	if(top == NULL){
		printf("stack is empty");
	}
	else{
		struct node *p = top;
		printf("popped element is %d",p->data);
		top = top->next;
		free(p);
	}
}
void display(){
	struct node *p = top;
	while(p != NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
void peek(){
	printf("%d ",top->data);
}

int main(){
	int choice;
	do{
		printf("\n1.push 2.pop 3.display 4.peek 5.exit = ");
		scanf("%d",&choice);
	switch(choice){
		case 1:{
			int data;
			printf("\nenter the data = ");
			scanf("%d",&data);
			push(data);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			peek();
			break;
		}
		case 5:{
			printf("exiting the code!!!");
			break;
		}
		default :{
			printf("invalid choice ");
			break;
		}
	}
}while(choice != 5);
	
}
