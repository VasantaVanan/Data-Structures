#include<stdio.h>
#include<stdlib.h>
struct node
{
    int weight;
    int data;
    struct node *next;
};

typedef struct node node;

node *head = NULL;

void create()
{
    int i=0,n;

  printf("Enter number of nodes in the list \n");

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    node *currentNode , *newNode;
    
    //Allocating memory for the new node
    newNode=(node *)malloc(sizeof(node));

    printf("Enter the data : \n");
    scanf("%d",&newNode->data);

    printf("Enter the weight : \n");
    scanf("%d",&newNode->weight);
    //Set the created node next address to be null
    newNode->next = NULL;


    //if no element is present in list
    if(head == NULL)
    {
      head = newNode;
      currentNode = newNode;
    }

    //if element is present in the list
    else
    {
      currentNode->next = newNode;
      currentNode = newNode;
    }
  }
}

void sorting()
{
    int temp ;
    node *first,*second;

    for(first = head;first->next != NULL;first=first->next)
    {
        for(second = head->next;second != NULL;second = second->next)
        {
        if(first->weight > second->weight)
          {
              temp = first->data;
              first->data = second->data;
              second->data = temp;

              temp = first->weight;
              first->weight = second->weight;
              second->weight = temp;
      
          }
        }
    }
}

void display()
{
    node *newNode;

    newNode = head;

    printf("The Linked list : \n");

    while(newNode != NULL)
    {
        printf("%d \n",newNode->data);
        newNode = newNode->next;
    }
}

void main()
{
    create();
    sorting();
    display();
}

//OUTPUT : 
//
// Enter number of nodes in the list
// 3
// Enter the data :
// 10
// Enter the weight :
// 2
// Enter the data :
// 5
// Enter the weight :
// 3
// Enter the data :
// 15
// Enter the weight :
// 1
// The Linked list :
// 15
// 10
// 5
