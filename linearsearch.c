#include<stdio.h>

void main()
{
    int i,n,s,a[10],flag = 0;

    printf("enter the limit : \n");
    scanf("%d",&n);

    printf("Enter the data : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the element to be searched : \n");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(a[i] == s)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 0)
        printf("Element not found \n");
    else
        printf("Element found \n");    
}

// OUPUT:

// enter the limit : 
// 5
// Enter the data : 
// 1
// 2
// 3
// 4
// 5
// Enter the element to be searched : 
// 6
// Element not found 

