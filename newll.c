#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node* next;
};

struct node* createnode(){
	int n;
	printf("Enter the value: ");
	scanf("%d",&n);
	struct node* newnode =(struct node*)malloc(sizeof(struct node));
	newnode->val= n;
	newnode->next = NULL;
	return newnode;
}
int printll(struct node* head){
	struct node*p=head;
	do{
		printf("%d ",p->val);
		p=p->next;
	}
	while(p!=NULL);
}
int main(){
	struct node* head=NULL;
	struct node* p=NULL;
	int num,i;
	printf("Enter the number of nodes: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		struct node* newnode= createnode();
		if(head==NULL){
			head=newnode;
		}
		else{
			p->next=newnode;
		}
		p=newnode;
	}
	printll(head);
	return 0;
	
}
