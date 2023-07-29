#include<stdio.h>
void main()
{
    int a[50],elem,flag=0,i,n;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched : ");
    scanf("%d",&elem);
    for(i=0;i<n;i++)
    {
        if(a[i]==elem)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found in the array\n");
    }
    else
    {
        printf("Element found in the array\n");
    }

}