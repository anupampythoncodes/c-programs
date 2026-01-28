#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createnode(){
	int data;
	scanf("%d",&data);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->left= NULL;
	newnode->right=NULL;
	if(data==-1){
		free(newnode);
		return NULL;
	}
	newnode->data=data;
	printf("enter data of left node %d:",data);
	newnode->left= createnode();
	printf("enter data of right node %d:",data);
	newnode->right = createnode();
	return newnode;
}
void pre_order(struct node* head){
	if(head==NULL){
		return;
	}
	struct node* root=head;
	pre_order(root->left);
	printf("%d->",root->data);
	pre_order(root->right);
}
int main(){
	struct node* head;
	head= createnode();
	pre_order(head);
	return 0;
}
