#include <stdio.h>    
int main()    
{     
    int arr[100],n, i, j;
    printf("Enter size of array : ");
    scanf("%d", &n); 
    printf("Enter elements into array : \n");
    for (i = 0; i < n - 1; i++) 
    {
        scanf("%d", &arr[i]);
    }      
    printf("Original array: \n");    
    for (int i = 0; i < n; i++)
    {     
        printf("%d ", arr[i]);     
    }      
    printf("\n");    
    printf("Array in reverse order: \n");       
    for (int i = n-1; i >= 0; i--) 
    {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    
