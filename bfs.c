#include <stdio.h>

#define MAX_SIZE 100

struct Queue {
    int queue[MAX_SIZE];
    int front;
    int rear;
};


void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}


int isEmpty(struct Queue *q) {
    return (q->front == -1);
}


int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}


void enqueue(struct Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->queue[q->rear] = data;
//    printf("Enqueued %d in queue\n", data);
}

int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = q->queue[q->front];
    // If the queue is empty reset the pointers
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front++;
    }
//    printf("Deleted element: %d\n", data);
    return data;
}

// Function to display the elements of the queue
void display(struct Queue *q) {
	int i;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    for (i = q->front; i <= q->rear; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

int main() {
    // Initialize a queue
    struct Queue q;
    initializeQueue(&q);

    //bfs implementation 
    int u,j,i=0;
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = {
	{0,1,1,1,0,0,0},
	{1,0,1,0,0,0,0},
	{1,1,1,0,0,0,0},
	{1,0,1,0,1,0,0},
	{0,0,1,1,0,1,1},
	{0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0},
	};
	printf("%d",i);
	visited[i] = 1;
	enqueue(&q,i);
	while(!isEmpty(&q)){
		int node = dequeue(&q);
		for(j = 0;j<7;j++){
			if(a[node][j] == 1 && visited[j] == 0){
				printf("%d" , j);
				visited[j] = 1;
				enqueue(&q,j);
			}
		}
	}
    display(&q);

    return 0;
}
