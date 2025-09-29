#include <stdio.h>

void safe_strcpy(char* dest, size_t dest_size, const char* src) 
{
    if (dest_size == 0) 
    {
        return;
    }
    
    size_t i;
    for (i = 0; i < dest_size - 1 && src[i] != '\0'; i++) 
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char a[10] = "Mouse";
    char b[50] = "LargeElephant";
    printf("Before: a = '%s'\n", a);
    safe_strcpy(a, 10, b);
    printf("After: a = '%s'\n", a);
    return 0;
}