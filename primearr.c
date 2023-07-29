#include<stdio.h>
void main()
{
    int a[50],flag,i,n,j;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=2,flag=0;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && a[i]>2)
        {
            printf("%d is a prime\n",a[i]);
        }
    }
}