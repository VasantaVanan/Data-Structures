#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node *head = NULL;
node *last = NULL;
int n;

void create()
{
    node *current,*newnode;
    int i=0;

    printf("Enter the number of node : \n");
    scanf("%d",&n);
    newnode = head;
    for(i=0;i<n;i++)
    {
      newnode = (node *)malloc(sizeof(node));
      printf("Enter the data : \n");
      scanf("%d",&newnode->data);
      newnode->next = NULL;
      if(i==0)
      {
        head = newnode;
        current = newnode;
      }
      else
      {
        current->next = newnode;
        current = newnode;
        last = current;
        last->next = head;
      }
    }
}

void insert()
{
  node *newnode,*pre,*nnode;
  int pos,i=0;

  newnode = (node *)malloc(sizeof(node));

  printf("Enter the position to be inserted : \n");
  scanf("%d",&pos);

  printf("Enter the data : \n");
  scanf("%d",&newnode->data);

  newnode->next = NULL;
  nnode = head;

  if(pos == 0)
  {
    newnode->next = head;
    head = newnode;
  }
  else
  {
    while(i<pos)
    {
      pre = nnode;
      nnode = nnode->next;
      i++;
    }

    if(pos == n)
    {
      last->next = newnode;
      last = newnode;
    }
    else
    {
      pre->next = newnode;
      newnode->next = nnode;
    }
  }
  n=n+1;
}

void delete()
{
  node *ref,*pre;
  int pos,i=1;

  printf("Enter the position to be deleted : \n");
  scanf("%d",&pos);
  ref = head;
  if(pos == 1)
  {
    head = head->next;
  }
  else
  {
    while(i<pos)
    {
      pre = ref;
      ref = ref->next;
      i++;
    }

    if(pos == n)
    {
      pre->next = last;
      last = pre;
    }
    else
    {
      pre->next = ref->next;
    }
  }

  n=n-1;
}

void search()
{
  node *search;
  int s,flag =0;
  search = head;
  printf("Enter the data be searched : \n");
  scanf("%d",&s);
  while(search != last)
  {
    if(s == search->data)
    {
      flag = 1;
      break;
    }
    else
      flag = 0;
    search = search->next;
  }

  if(s == search->data)
  {
    flag =1;
  }
  else
    flag = 0;

  if(flag == 1)
    printf("Element found \n");
  else
    printf("Element not found \n");
}

void display()
{
  node *disp;
  disp = head;
  while(disp != last)
  {
    printf("%d \n",disp->data);
    disp = disp->next;
  }
  printf("%d \n",disp->data);
  //printf("%d \n",last->data);
}

void main()
{
  create();
  display();
  insert();
  display();
  delete();
  display();
  search();

}


/*
----------------------------------------
OUTPUT :
Enter the number of node :
3
Enter the data :
1
Enter the data :
2
Enter the data :
3
1
2
3
Enter the position to be inserted :
0
Enter the data :
10
10
1
2
3
Enter the position to be deleted :
4
10
1
2
Enter the data be searched :
10
Element founds
----------------------------------------
*/
