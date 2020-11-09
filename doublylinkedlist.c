#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
 
typedef struct node node;
 
node *head = NULL;
node *last = NULL;
int n;
 
typedef struct node node ;
 
void create()
{
    node *nnode,*newnode,*current;
    int i,temp = 0;
 
    printf("Enter the number of nodes : \n");
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
        newnode = (node *)malloc(sizeof(node));
 
        printf("Enter the data  :\n");
        scanf("%d",&newnode->data);
 
 
 
        if(head == NULL)
        {
           newnode->next = NULL;
           newnode->prev = NULL;
           head = newnode;
           current = newnode;
           last = current;
        }
        else
        {
           newnode->next = NULL;
           newnode->prev = current;
           current->next = newnode;
           current = newnode;
           last = current;
        }
    }
}
 
 
void insert()
{
    node *newnode,*pre,*nextnode,*lnode;
    int i = 1,pos;
 
    //printf("value of n at insertion : %d \n",n);
 
    nextnode = head;
    newnode = (node *)malloc(sizeof(node));
 
    printf("Enter the postion to be inserted : \n");
    scanf("%d",&pos);
    printf("Enter the data : \n");
    scanf("%d",&newnode->data);
 
    newnode->next = NULL;
    newnode->prev = NULL;
    // if(pos == n)
    // {
    //     while(nextnode != NULL)
    //     {
    //         nextnode = nextnode->next;
    //     }
    //     printf("%d",last->data);
    //     nextnode->next = newnode;
    //     newnode->prev = nextnode;
    //     newnode->next = NULL;
    //     last = newnode;
    // }
 
    if(pos == 0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else
    {
        i=0;
        while(i<pos)
        {
            pre = nextnode;
            nextnode = nextnode->next;
            i++;
        }
 
        if(pos == n)
        {
            last->next = newnode;
            newnode->prev = last;
            last = newnode;
        }
        else
        {
            pre->next = newnode;
            newnode->prev = pre;
            newnode->next = nextnode;
            nextnode->prev = newnode;
        }
    }
 
    n = n+1;
}
 
void delete()
{
    node *ref,*pre,*temp;
 
    int pos,i=1;
 
    ref = head;
    printf("Enter the position \n");
    scanf("%d",&pos);
    if(pos == 1)
    {
      head = head->next;
      head->prev = NULL;
    }
 
    // if(pos == n)
    // {
    //     printf("Here \n");
    //     while(i<pos)
    //     {
    //         pre = ref;
    //         ref = ref->next;
    //         i++;
    //     }
    //     //ref->prev = NULL;
    //     pre->next = NULL;
    //     ref->prev = NULL;
    //     last = pre;
    //
    // }
    else
    {
        while(i<pos)
        {
            pre = ref;
            ref = ref->next;
            i++;
        }
 
        // temp = ref->next;
        // pre->next = temp;
        // temp=ref->next;
        // temp->prev=pre;
 
        if(pos == n)
        {
          printf("Here\n");
          pre->next = NULL;
          ref->prev = NULL;
          last = pre;
        }
 
        else
        {
          temp = ref->next;
          pre->next = temp;
          temp=ref->next;
          temp->prev=pre;
        }
        //pre->next = ref->next;
 
        // prev->next = ref->next;
        // temp = prev->next;
        // temp->prev = prev->next;
    }
 
    n=n-1;
}
 
 
void search()
{
  node *search;
  int s,flag = 0;
  search = head;
  printf("Enter the element to be searched :\n");
  scanf("%d",&s);
  while(search != NULL)
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
 
  if(flag == 1)
    printf("Element found \n");
  else
    printf("Element not found \n");
}
 
 
void display()
{
    node *fDisp,*lDisp;
 
    fDisp = head;
    lDisp = last;
 
    while(fDisp!= NULL)
    {
        printf("%d  -> ",fDisp->data);
        fDisp = fDisp->next;
    }
    printf("NULL \n");
 
    while(lDisp!= NULL)
    {
        printf("%d  -> ",lDisp->data);
        lDisp = lDisp->prev;
    }
    printf("NULL \n");
}
 
void main ()
{
    int op;
    create();
    display();
    insert();
    display();
    delete();
    display();
    search();
 
    // printf("1.Insertion \n 2.Deletion \n 3.Searching \n 4.Display \n 5.Exit \n");
    // printf("Enter option \n");
    // scanf("%dd",&op);
    // while(1)
    // {
    //   switch (op)
    //
    //   {
    //     case 1: insert();
    //             break;
    //     case 2: delete();
    //             break;
    //     case 3: search();
    //             break;
    //     case 4: display();
    //             break;
    //     case 5: exit(0);
    //   }
    // }
}

// Enter the number of nodes : 
// 4
// Enter the data  :
// 1
// Enter the data  :
// 2
// Enter the data  :
// 3
// Enter the data  :
// 4
// 1  -> 2  -> 3  -> 4  -> NULL 
// 4  -> 3  -> 2  -> 1  -> NULL 
// Enter the postion to be inserted : 
// 4
// Enter the data : 
// 5
// 1  -> 2  -> 3  -> 4  -> 5  -> NULL 
// 5  -> 4  -> 3  -> 2  -> 1  -> NULL 
// Enter the position 
// 1
// 2  -> 3  -> 4  -> 5  -> NULL 
// 5  -> 4  -> 3  -> 2  -> NULL 
// Enter the element to be searched :
// 5
// Element found 