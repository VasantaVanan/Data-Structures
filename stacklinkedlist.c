#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
};

typedef struct node node;

node *head = NULL;
int top;
void create()
{
    int i=0;

    printf("Enter number of nodes in the list \n");
    scanf("%d",&top);

    for(i=0;i<top;i++)
    {
        node *current , *newnode;
        
        //Allocating memory for the new node
        newnode=(node *)malloc(sizeof(node));

        printf("Enter the data : \n");
        scanf("%d",&newnode->data);


        //Set the created node next address to be null
        newnode->prev = NULL;


        //if no element is present in list
        if(head == NULL)
        {
        head = newnode;
        current = newnode;
        }

        //if element is present in the list
        else
        {
        current->prev = newnode;
        current = newnode;
        }
    }
}

void push()
{
    int i=0;
    node *pre,*nnode;
    node *newnode;

    newnode = (node *)malloc(sizeof(node));

    printf("The value of top is : %d \n",top);
    printf("Enter the data to be inserted : \n");
    scanf("%d",&newnode->data);
    
    newnode->prev = NULL;
    nnode = head;
    while(nnode->prev != NULL)
    {
        printf("%d \n",nnode->data);
        nnode = nnode->prev;
    }
    nnode->prev = newnode;
    top = top+1;
    // printf("nnode data : %d \n",nnode->data);
}

void pop()
{
    head = head->prev;
}

void display()
{
    node *disp;
    disp = head;
    printf("The stack is : \n");
    while(disp != NULL)
    {
        printf("%d \n",disp->data);
        disp = disp->prev;
    }
}

void main()
{
    create();
    display();
    push();
    display();
    // pop();
    // diplsay();

}