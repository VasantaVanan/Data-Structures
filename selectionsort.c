#include<stdio.h>

void main()
{
    int i,n,a[10],s,j,temp = 0,min,loc;
    printf("enter the limits : \n");
    scanf("%d",&n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++)
    {
        min = a[i];
        loc = i;
        for(j=i+1;j<n;j++)
        {
            if(min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }

        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    printf("The sorted array is : \n");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
}

//OUTPUT : 
//
// enter the limits :
// 4
// enter the elements :
// 3
// 4
// 1
// 2
// The sorted array is :
//  1  2  3  4