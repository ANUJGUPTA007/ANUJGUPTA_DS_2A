#include<stdio.h>
void main()
{
    int a[100],i,j,n,k;
    printf("ENTER THE NO. OF ELEMENTS IN ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE  ELEMENTS OF ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("ENTER THE NO. U WANT TO SEARCH\n");
    scanf("%d",&k);
    for(j=0;j<n;j++)
    {
        if(a[j]==k)
        {
        printf("%d IS FOUND IN ARRAY AT LOCATION %d\n",a[j],j);
        }
    
    }
    if(j==n)
    {
        printf("%d IS NOT FOUND IN ARRAY \n",k);

    }

}