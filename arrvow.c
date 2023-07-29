#include<stdio.h>
void main()
{
    char a[50];
    int i,n;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
    printf("The vowels in that array are : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            printf("%c\t",a[i]);
        }
    }
}