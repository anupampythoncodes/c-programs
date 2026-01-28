#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traversal(struct node *p){
	while(p != NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

struct node * insert_start(int data, struct node* head){
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("enter the data\n");
	scanf("%d",&data);
	newnode -> data = data;
	newnode ->next = head;
	head = newnode;
	return head;
}

struct node * insert_end(int data, struct node *head){
	struct node *ptr = head;
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("enter the data\n");
	scanf("%d",&data);
	newnode->data = data;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	newnode->next = NULL;
	ptr->next = newnode;
	return head;
}

int main(){
	int data;
	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	
	one = (struct node *)malloc(sizeof(struct node));
	two = (struct node *)malloc(sizeof(struct node));
	three = (struct node *)malloc(sizeof(struct node));
	
	
	one->data=1;
	two->data=2;
	three->data=3;
	
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	head=one;
	traversal(head);
	printf("\n");
	
	head = insert_start(10,head);
//	head = insert_start(20,head);
	
	head = insert_end(data,head);
	
	traversal(head);
	
}
