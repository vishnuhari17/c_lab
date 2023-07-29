#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {

        if(n%i==0 && i%2==0)
        {
            printf("%d is an even factor of %d\n",i,n);
        }
    }
}