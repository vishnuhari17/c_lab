#include<stdio.h>
void main()
{
    int a[50],i,n,sum=0,sume=0,sumo=0,ch;
    char choice;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]%2==0)
        {
            sume+=a[i];
        }
        else
        {
            sumo+=a[i];
        }
    }
    do
    {
        printf("1--Sum of all elements\n2--Sum of Even elements\n3--Sum of odd elements\n");
        printf("Which operation do you wish to perform ?\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("%d is the sum of all elements\n",sum);
                    break;

            case 2: printf("%d is the sum of all even elements\n",sume);
                    break;

            case 3: printf("%d is the sum of all odd elements\n",sumo);
                    break;
        
            default: printf("Invalid input \n");
                     break;
        }
        printf("Do you want to continue?(y/n) : ");
        scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');
    
}