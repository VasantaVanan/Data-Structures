#include<stdio.h>

int top = 0;
int s[10];
int x;
void push()
{
    int l = sizeof(s);
    // if(top == l)
    // {
    //     printf("\n\tSTACK is over flow");
         
    // }
    

    printf(" Enter a value to be pushed:");
    scanf("%d",&x);
    top = top + 1;
    // printf("%d \n",top);
    s[top] = x;
    
    
}

void pop()
{
    if(top == 0)
    {
        printf("The stack is empty \n");
    }
    else
    {    
        printf("The deleted element is : %d \n",s[top]);
        top = top-1;
    }   
}

// int isFull()
// {
//     if(top == 0)
//         return 1;
//     else
//         return 0;
// }

// int isEmpty()
// {
//     int l = sizeof(s);
//     if(top == l)
//         return 1;
//     else 
//         return 0;
// }

void display()
{
    printf("The stack is : \n");
    for(int i =0;i<top;i++)
    {
        printf("%d \n",s[i]);
    }
}

void main()
{
    printf("Enter the limit : \n");
    scanf("%d",&top);
    for(int i=0;i<top;i++)
    {
        printf("Enter the data : \n");
        scanf("%d",&s[i]);
    }
    // printf("%d\n%d",top,s[top]);
    push();
    display();
    
    pop();
    display();
}

// OUTPUT:

// Enter the limit :
// 3
// Enter the data :
// 1
// Enter the data :
// 2
// Enter the data :
// 3
//  Enter a value to be pushed:10
// The stack is :
// 1
// 2
// 3
// 0
// The deleted element is : 10
// The stack is :
// 1
// 2
// 3