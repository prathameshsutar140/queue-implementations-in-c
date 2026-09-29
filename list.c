#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int val) {
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("\nInserted %d into Queue.", val);
}

void dequeue() {
    struct Node* temp;
    if (front == NULL) {
        printf("\nQueue Underflow! Queue is empty.");
        return;
    }

    temp = front;
    printf("\nDeleted element: %d", temp->data);
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
}

void display() {
    struct Node* temp;
    if (front == NULL) {
        printf("\nQueue is empty!");
        return;
    }
    temp = front;
    printf("\nQueue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void main() {
    int choice, val;
    clrscr();

    do {
        printf("\n\n--- LINEAR QUEUE USING LINKED LIST ---");
        printf("\n1. Enqueue (Insert)");
        printf("\n2. Dequeue (Delete)");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid choice! Please select 1-4.");
        }
        getch();
        clrscr();
    } while (choice != 4);
}