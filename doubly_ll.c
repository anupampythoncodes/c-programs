#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
	int value;
	struct node * next;
	struct node * prev;
};
void traversal(struct node*head){
	struct node*p=head;
	do{
		printf("%d ",p->value);
		p=p->prev;
	}	while(p!=head);
}

struct node * insertpos(int data,struct node* head,int pos){
	struct node*ptr1;
	struct node*ptr2;
	printf("enter data and position");
	scanf("%d%d",&data,&pos);
	int i;
	ptr1=head;
	ptr2=head->next;
	for(i=2;i<pos;i++){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	struct node*newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->value= data;
	ptr1->next=newnode;
	newnode->prev = ptr1;
	
	newnode->next=ptr2;
	ptr2->prev= newnode;
	
	return head;
}
struct node * delpos(struct node* head,int pos){
	struct node*ptr1;
	struct node*ptr2;
	
	printf("enter position");
	scanf("%d",&pos);
	int i;
	ptr1=head;
	ptr2=head->next;
	for(i=2;i<pos;i++){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	ptr1->next=ptr2->next;
	ptr2->next->prev = ptr1;
	free(ptr2);
	return head;
}


int main(){
	int data,pos;
	struct node * head;
	struct node * tail;
	struct node *first = (struct node *)malloc(sizeof(struct node));
	struct node *second = (struct node *)malloc(sizeof(struct node));
	struct node *third = (struct node *)malloc(sizeof(struct node));
	struct node *forth = (struct node *)malloc(sizeof(struct node));
	
	first->value=10;
	second->value=20;
	third->value=30;
	forth->value=40;
	
	head=first;
	
	first->next=second;
	first->prev=forth;
	
	second->next=third;
	second->prev=first;
	third->next=forth;
	third->prev=second;
	forth->next=first;
	forth->prev=third;
	tail = forth;
	head = insertpos(data,head,pos);
	
	traversal (tail);
	
	head = delpos(head,pos);
	
	traversal (tail);
	return (0);
	
}
