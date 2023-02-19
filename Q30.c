#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int data[MAX_SIZE];
    int front, rear;
} Queue;

void init(Queue *q) {
    q->front = q->rear = -1;
}

int is_empty(Queue *q) {
    return q->front == -1;
}

int is_full(Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(Queue *q, int x) {
    if (is_full(q)) {
        printf("Error: Queue is full\n");
        return;
    }
    if (is_empty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }
    q->data[q->rear] = x;
}

int dequeue(Queue *q) {
    if (is_empty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }
    int x = q->data[q->front];
    if (q->front == q->rear) {
        init(q);
    } else {
        q->front++;
    }
    return x;
}

void display(Queue *q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    init(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    int x = dequeue(&q);
    printf("Dequeued element: %d\n", x);
    display(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    display(&q);

    return 0;
}
