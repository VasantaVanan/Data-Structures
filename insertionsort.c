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
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The sorted array is : \n");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
}

// OUPUT:
// enter the limits : 
// 4
// enter the elements : 
// 3
// 4
// 1
// 2
// The sorted array is : 
//  1  2  3  4 