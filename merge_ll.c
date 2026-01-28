#include <stdio.h>
#include <stdlib.h>

// Definition of the node
struct node {
    int data;
    struct node *next;
};

// Function to create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print a linked list
void printList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct node* mergeTwoLists(struct node* head1, struct node* head2) {
    struct node* temp1= head1;
    struct node* temp2= head2;
    if (head1== NULL || head2==NULL){
        return head1;
    }
    else if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    else{
         while(temp2!=NULL){
            head2=head2->next;
            temp2->next=NULL;
            while(temp1 !=NULL && temp1->data<=temp2->data){
                struct node* temp3=temp1->next;
                temp1->next=temp2;
                temp2->next=temp3;
                temp1=temp1->next;
            }
            temp2=head2;
    }
    }
   return head1;
}

int main() {
    // First linked list
    struct node *head1 = NULL;
    head1 = createNode(10);
    head1->next = createNode(30);
    head1->next->next = createNode(50);

    // Second linked list
    struct node *head2 = NULL;
    head2 = createNode(10);
    head2->next = createNode(40);
    head2->next->next = createNode(60);

    // Print both lists
    printf("First Linked List:\n");
    printList(head1);

    printf("Second Linked List:\n");
    printList(head2);
    head1=mergeTwoLists(head1,head2);
	printf("Merged list\n");
	printList(head1);
    return 0;
}

