#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
	while(t--)
	{
	    int x,a,b,c,i,j;
	    scanf("%d%d%d",&a,&b,&c);
	    x=b/c;
	    if(b>c)
	    {
	        x++;
	        j=x*a;
	        printf("%d\n",j);
	    }
	    else if(x==1)
	    {
	        i=x*a;
	        printf("%d\n",i);
	    }
	}
	return 0;
}