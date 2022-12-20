#include <stdio.h>  
int main()  
{    
    int arr[100],n, i, j, length;
    printf("Enter size of array : ");
    scanf("%d", &n); 
    printf("Enter elements into array : \n");
    for (i = 0; i < n - 1; i++) 
    {
        scanf("%d", &arr[i]);
    }   
    printf("Duplicate elements in given array: \n");   
    for(int i = 0; i < length; i++)
   {  
        for(int j = i + 1; j < length; j++) 
        {  
            if(arr[i] == arr[j]) 
            {
                printf("%d\n", arr[j]);  
            }   
        }  
    }  
    return 0;  
}  