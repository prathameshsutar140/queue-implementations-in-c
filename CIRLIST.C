#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void main() {
    struct Node* front = NULL;
    struct Node* rear = NULL;
    struct Node* newNode;
    struct Node* temp;
    int choice, val;

    clrscr();

    do {
	printf("\n\n--- CIRCULAR QUEUE  ---");
        printf("\n1. Enqueue (Insert)");
        printf("\n2. Dequeue (Delete)");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            // Enqueue Operation
            case 1:
                newNode = (struct Node*)malloc(sizeof(struct Node));
                printf("Enter value to insert: ");
                scanf("%d", &val);
                newNode->data = val;
                newNode->next = NULL;

                if (front == NULL) {
                    front = rear = newNode;
                    rear->next = front; // Makes it circular
                } else {
                    rear->next = newNode;
                    rear = newNode;
                    rear->next = front; // Maintains circular link
                }
                printf("\nInserted %d successfully.", val);
                break;

            // Dequeue Operation
            case 2:
                if (front == NULL) {
                    printf("\nQueue Underflow! Queue is empty.");
                } else if (front == rear) {
                    temp = front;
                    printf("\nDeleted element: %d", temp->data);
                    front = rear = NULL;
                    free(temp);
                } else {
                    temp = front;
                    printf("\nDeleted element: %d", temp->data);
                    front = front->next;
                    rear->next = front; // Update circular link
                    free(temp);
                }
                break;

            // Display Operation
            case 3:
                if (front == NULL) {
                    printf("\nQueue is empty!");
                } else {
                    temp = front;
                    printf("\nQueue elements: ");
                    do {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    } while (temp != front);
                }
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