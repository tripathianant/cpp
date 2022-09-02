#include <stdio.h>  
int main ()  
{ 
    int arr[20], i, j, k, size;  
    printf ("ENTER SIZE OF THE ARRAY: ");  
    scanf (" %d", &size);  
    printf ("ENTER %d ELEMENTS OF ARRAY : \n ", size); 
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    } 
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {
            if ( arr[i] == arr[j])  
            {
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }
                size--;  
                j--;      
            }  
        }  
    }
    printf ("\nARRAY AFTER DELETION OF DUPLICATE ELEMENTS : ");   
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}  