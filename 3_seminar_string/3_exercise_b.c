#include <stdio.h>

int main() 
{
    char ch;
    char *letter = "Letter";
    char *digit = "Digit";
    char *other = "Other";
    scanf("%c", &ch);
    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        printf("%s\n", letter);
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        printf("%s\n", digit);
    } 
    else 
    {
        printf("%s\n", other);
    }
    
    return 0;
}