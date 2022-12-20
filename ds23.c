#include<stdio.h>
void main()
{
    int a[100],i,j,n,k,mid,c,b;
    
    printf("ENTER THE NO. OF ELEMENTS IN ARRAY\n");
    scanf("%d",&n);
    c=0;
    b=n-1;
    printf("ENTER THE  ELEMENTS OF ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("ENTER THE NO. U WANT TO SEARCH\n");
    scanf("%d",&k);
    while(c<=b)
    {
    for(i=0;i<n;i++)
    {
   
        if(a[mid]<k)
        {
            c=mid+1;
        }
        else if(a[mid]==k)
        {
            printf("ELEMENT %d IS FOUND AT LOACATION %d",a[i],i);
            break;        }
        else
        {
            b=mid-1;

        }
        mid=(c+b)/2;

    }
    }
    if(b>c)
    {
        printf("%d IS NOT FOUND",k);
    }

}