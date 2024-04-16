// Circular queue operations
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// Function to check if the queue is full
int isFull() {
    return ((rear + 1) % SIZE == front);
}

// Function to insert an element into the circular queue (enqueue)
void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty())
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = item;
}

// Function to remove an element from the circular queue (dequeue)
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int item = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
    return item;
}

// Function to display the elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[rear]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Dequeued item: %d\n", dequeue());

    display();

    return 0;
}
