#include <stdio.h>

void trim_after_first_space(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() 
{
    char a[] = "Cats and Dogs";
    printf("%s\n", a);
    trim_after_first_space(a);
    printf("%s\n", a);
    return 0;
}