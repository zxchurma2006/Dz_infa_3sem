#include <stdio.h>

void mult2(int* p, size_t n) 
{
    for (size_t i = 0; i < n; i++) 
    {
        *(p + i) = *(p + i) * 2;
    }
}

void print_array(int* arr, size_t n) 
{
    for (size_t i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[100];
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    mult2(arr, size);
    print_array(arr, size);
    return 0;
}