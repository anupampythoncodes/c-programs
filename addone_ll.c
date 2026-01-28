#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* createnode(int data){
	struct node* newnode= (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void printll(struct node*head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

struct node* reverse(struct node* head){
	struct node* prev=NULL;
	struct node* temp=head;
	struct node* next=NULL;
	while(temp!=NULL){
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
	return prev;
}

int main(){
	struct node*head;
	head=createnode(1);
	head->next=createnode(9);
	head->next->next=createnode(9);
	printll(head);
	printf("\n");
	//head = reverse(head);
	printll(head);
	struct node*temp=head;
	int num=0;
	while(temp!=NULL){
		num=num*10+temp->data;
		temp=temp->next;
	}
	printf("%d",++num);
}
