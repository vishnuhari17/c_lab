#include<stdio.h>
void main()
{
    int a[50],elem,count=0,i,n;
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
            count+=1;
        }
    }
    printf("The element %d occurred %d times\n",elem,count);
}