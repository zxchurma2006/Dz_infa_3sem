#include <stdio.h>
#include <string.h>

int palindrom(char str[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i]) 
        {
            return 0;
        6
    }
    return 1;
}

int main() 
{
    char word[100];
    scanf("%s", word);
    
    if (palindrom(word)) 
    {
        printf("Yes\n");
    } 
    else 
    {
        printf("No\n");
    }
    return 0;
}