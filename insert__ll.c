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
 struct node *insertend(struct node *head,int data){
	struct node *p=head;
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	printf("enter the data = ");
	scanf("%d",&data);
	ptr->data = data;
	while(p->next !=NULL){
		p = p->next;
	}
	p->next= ptr;
	ptr->next=NULL;
	
	return head;
}
struct node *insert(struct node *head,int data){
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	printf("enter the data = ");
	scanf("%d",&data);
	ptr->data = data;
	ptr->next= head;
	head = ptr;
	return head;
}
struct node *insertpos(struct node *head,int data,int pos){
	struct node *ptr1;
	struct node *ptr2;
	int i;
	printf("enter position ");
	scanf("%d",&pos);
	
	ptr1=head;
	ptr2=head->next;
	
	for(i=2;i<pos;i++){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	ptr1->next=newnode;
	newnode->next=ptr2;
	return head;
}


struct node *delpos(struct node *head,int pos){
	struct node *ptr1;
	struct node *ptr2;
	int i;
	printf("enter position ");
	scanf("%d",&pos);
	
	ptr1=head;
	ptr2=head->next;
	
	for(i=2;i<pos;i++){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	ptr1->next = ptr2->next;
	free(ptr2);
	
	
	
	return head;
}



int main(){
	int data,pos;
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
//	traversal(head);
//	head = insert(head,data);
//	traversal(head);
//	head = insertend(head,data);
//	traversal(head);
//	head = delend(head);
head = insertpos(head,700,pos);
traversal(head);
head = delpos(head,pos);
	traversal(head);
}
