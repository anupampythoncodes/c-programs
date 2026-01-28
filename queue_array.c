#include<stdio.h>
#include<stdlib.h>
#define max 100
int front=-1,rare = -1;
int queue[max];
int push(int data){
	if(rare == max-1){
		printf("queue overflow");
		return ;
	}
	if(front == -1){
		front = 0;
	}
	rare++;
	queue[rare]=data;
}
int pop(){
	int i;
	if(rare==-1){
		printf("queue underflow");
		return;
	}
	int item = queue[front];
	for(i=front;i<=rare;i++){
		int temp = queue[front];
		queue[front]= queue[front+1];
		queue[front]=temp;
	}
	front++;
	return item;
}
void display(){
	int i;
	if(rare == -1){
		printf("queue underflow");
		return;
	}
	for(i=front;i<=rare;i++){
		printf("%d ",queue[i]);
	}
}
void peek(){
	printf("%d",queue[rare]);
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
			printf("popped item = %d",pop());
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
