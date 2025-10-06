#include <stdio.h>  
#include <string.h>  
#include <ctype.h>

void used_chars(const char* str, char* used)
{
    int letters[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char c = str[i];
        if (isalpha(c)) 
        {
            c = tolower(c);
            letters[c - 'a'] = 1;
        }
    }
    
    int pos = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (letters[i]) 
        {
            used[pos++] = 'a' + i;
        }
    }
    used[pos] = '\0';
}

int main()  
{  
    char s[50] = "Sapere Aude";  
    char u[30];  
    used_chars(s, u);  
    printf("%s\n", u);  

    strcpy(s, "123!%@");  
    used_chars(s, u);  
    printf("%s\n", u);  

    strcpy(s, "The Quick Brown Fox Jumps Over The Lazy Dog!");  
    used_chars(s, u);  
    printf("%s\n", u);
}