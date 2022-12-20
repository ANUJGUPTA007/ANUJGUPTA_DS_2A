#include<stdio.h>
void main()
{
    int A[100],n,i;
    printf("enter the no of elements of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("the traverse of an array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }

}