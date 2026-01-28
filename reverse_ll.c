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
struct node *reverse(struct node *head){
	struct node *p=head, *prev = NULL,*nex;
	
	while(p!=NULL){
		nex = p->next;
		p->next = prev;
		prev = p;
		p = nex;
	}
	return prev;
	
}
int main(){
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
	head = reverse(head);
	traversal(head);
	
	
}
