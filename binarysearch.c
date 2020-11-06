#include<stdio.h>

void main()
{
    int i,n,a[10],s,flag = 0;
    int upper,lower,mid;
    printf("enter the limits : \n");
    scanf("%d",&n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the search element : \n");
    scanf("%d",&s);

    upper = n;
    lower = 0;

    while(lower < upper)
    {
        mid = (upper + lower)/2;
        if(s > a[mid])
            lower = mid + 1;
        if(s < a[mid])
            upper = mid - 1;
        if(s == a[mid])
        {   
            flag = 1;
            break;
        }
        else
            flag = 0;
        
    }
    
    if(flag == 1)
        printf("element found");
    else
        printf("Element not found");
}