#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int front = -1, rear = -1;
int start = -1, end = -1;
int q[MAX];
int q2[MAX];


void pushq2(int data){
    if(start == -1){
        start = 0;
    }
    q2[++end] = data;
}

int popq2(){
    if(start == -1){
        return -1;
    }
    int temp = q2[start++];
    if(start > end){
        start = end = -1;
    }
    return temp;
}


void pushq(int data){
    
    while(front != -1){
        pushq2(popq());
    }

   
    if(front == -1){
        front = 0;
    }
    q[++rear] = data;

    
    while(start != -1){
        q[++rear] = popq2();
    }
}

int popq(){
    if(front == -1){
        printf("stack empty\n");
        return -1;
    }
    int temp = q[front++];
    if(front > rear){
        front = rear = -1;
    }
    return temp;
}

int main(){
    int n = 0;

    while(1){
        printf("\nChoose: 1:push  2:pop  -1:exit\n");
        scanf("%d",&n);

        switch(n){
            case 1:{
                int i;
                printf("enter the data: ");
                scanf("%d",&i);
                pushq(i);
                break;
            }

            case 2:
                printf("deleted data: %d\n", popq());
                break;

            default:
                printf("exiting the loop\n");
                return 0;
        }
    }
}

