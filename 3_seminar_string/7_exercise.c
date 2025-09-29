#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encrypt(const char* str, int k) 
{
    k = k % 26;
    if (k < 0) k += 26;
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha(str[i])) 
        {
            char base;
            if (islower(str[i])) 
            {
                base = 'a';
            } 
            else 
            {
                base = 'A';
            }
            printf("%c", base + (str[i] - base + k) % 26);
        } 
        else 
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() 
{
    char text[] = "Hello World!";
    int shift = 3;
    printf("Original: %s\n", text);
    printf("Encrypted: ");
    encrypt(text, shift);
    return 0;
}