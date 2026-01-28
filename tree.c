#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node* right;
};
struct node* create_node(){
    int data;
    struct node* newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data(-1 or no node)\n");
    scanf("%d",&data);
    if(data == -1){
        free(newnode);
        return NULL;
    }
    newnode -> data = data;
    printf("enter the left child of %d\n",data);
    newnode->left = create_node();
    
    printf("enter the right child of %d\n",data);
    newnode->right = create_node();
    
    return newnode;
}
struct node* pre_traversal(struct node *root){
	if(root == NULL){
		return ;
	}
	printf("%d ",root->data);
	pre_traversal(root->left);
	pre_traversal(root->right);
}
int main(){
     struct node *root;
     root = NULL;
     root = create_node();
     pre_traversal(root);    
}    
