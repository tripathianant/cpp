#include <stdio.h>  
void duplicate(int arr[],int size){
    int i, j, k;
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
        printf (" %d ", arr[i]);  
    }  
}
int main ()  
{ 
    int arr[20],i, size;  
    printf ("ENTER SIZE OF THE ARRAY: ");  
    scanf (" %d", &size);  
    printf ("ENTER %d ELEMENTS OF ARRAY : \n ", size); 
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    } 
    duplicate(arr,size);
    return 0;  
}