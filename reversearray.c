#include <stdio.h>
void rev(int arr[], int a)
{
    int temp;
    for (int i = 0; i < a / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a - 1 - i];
        arr[a - 1 - i] = temp;
    }
    printf("\nREVERSED ARRAY IS: \n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size;
    printf ("ENTER SIZE OF THE ARRAY: ");  
    scanf (" %d", &size);
    int arr[size];
    printf("ENTER THE ELEMENT OF THE ARRAY: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    rev(arr, size);
    return 0;
}