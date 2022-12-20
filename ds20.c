#include<stdio.h>
int main()
{
 	int rows, columns,m,n,a[100][100], Deter = 0;
    printf("enter the no of rows and columns");
    scanf("%d%d",&m , &n);
 	printf("\n Please Enter the Matrix Elements \n ");
 	for(rows = 0; rows < m; rows++)
  	{
   		for(columns = 0;columns < n; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
	Deter = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
  	printf("\n The Determinant of Matrix = %d", Deter);
 	return 0;
}