#include<stdio.h>
#define size 10

int front = 1,rear = 0,n,a[10],x;

void enqueue()
{
    if(rear >= size)
        printf("FULL \n");
    else
    {
        rear = rear + 1;
        printf("Enter data to be inserted :\n");
        scanf("%d",&x);
        a[rear] = x;
    }
}

void dequeue()
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
    int i;
    printf("Enter the limit \n");
    scanf("%d",&rear);
    for(i = front;i <= rear;i++)
    {
        scanf("%d",&a[i]);
    }
    enqueue();
    display();
    dequeue();
    display();
}


// OUTPUT : 
// 4
// 1
// 2
// 3
// 4
// Enter data to be inserted :
// 5
// 1   2   3   4   5   
// Deleted element : 1
// 2   3   4   5