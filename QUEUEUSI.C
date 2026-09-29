#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *temp = NULL, *f = NULL, *r = NULL, *newnode = NULL;
    int ch;

    clrscr(); 

    do
    {
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                newnode = (struct node*)malloc(sizeof(struct node));
              
                printf("Enter data: ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;

                if (f == NULL && r == NULL)
                {
                    f = r = newnode;
                }
                else
                {
                    r->next = newnode;
                    r = newnode;
                }
                break;

            case 2:
                if (f == NULL && r == NULL)
                {
                    printf("The queue is empty.\n");
                }
                else if (f == r)
                {
                    printf("Dequeued: %d\n", f->data);
                    free(f);
                    f = r = NULL;
                }
                else
                {
                    temp = f;
                    printf("Dequeued: %d\n", temp->data);
                    f = f->next;
                    free(temp);
                }
                break;

            case 3:
                if (f == NULL && r == NULL)
                {
                    printf("The queue is empty.\n");
                }
                else
                {
                    temp = f;
                    printf("Queue elements: ");
                    while (temp != NULL)
                    {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (ch != 4);

    
    while (f != NULL)
    {
        temp = f;
        f = f->next;
        free(temp);
    }

    getch();
}