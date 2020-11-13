#include<stdio.h>
#include<stdlib.h>
#define size 10

int front = 1,rear = 0,n,a[10],x;

void insertAtStart()
{
    if(front != 1)
        printf("NOT POSSIBLE \n");
    else
    {
        front --;
        printf("Enter data to be inserted :\n");
        scanf("%d",&x);
        a[front] = x;
    }
}

void insertAtEnd()
{
    printf("%d",front);
    if(front == 0)
        printf("NOT POSSIBLE \n");
    else
    {
        rear ++;
        printf("Enter data to be inserted :\n");
        scanf("%d",&x);
        a[rear] = x;
    }
}

void deleteAtEnd()
{
    if(rear == 0)
        printf("NOT POSSIBLE \n");
    else
    {
        x = a[rear];
        printf("Deleted element is : %d",x);
        rear = rear - 1;
    }
    
}

void deleteAtStart()
{
    if(rear == -1 || front == rear)
        printf("EMPTY \n");
    else
    {
        x = a[front];
        front = front + 1;
        printf("Deleted element : %d \n",x);
    }
}

void display()
{
    for(int i = front;i <= rear;i++)
    {
        printf("%d   ",a[i]);
    }
}

void main()
{
    int i,op;
    printf("Enter the limit \n");
    scanf("%d",&rear);
    for(i = front;i <= rear;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" 1.insertAtStart\n 2.insertAtEnd\n 3.deleteAtStart\n 4.deleteAtEnd \n");
    while(1)
    {
        printf("Enter the option : \n");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
                insertAtStart();
                display();
                break;
            
            case 2:
                insertAtEnd();
                display();
                break;

            case 3:
                deleteAtStart();
                display();
                break;

            case 4:
                deleteAtEnd();
                display();
                break;

            case 5: exit(1);
                break;

            default:
                printf("Invalid option \n");
                break;
        }
    }
}
