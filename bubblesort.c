#include<stdio.h>

void main()
{
    int i,n,a[10],s,j,temp = 0;
    int upper,lower,mid;
    printf("enter the limits : \n");
    scanf("%d",&n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted array is : \n");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
}

//OUTPUT:
// enter the limits : 
// 4
// enter the elements : 
// 3
// 4
// 1
// 2
// The sorted array is : 
//  1  2  3  4 