#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if (argc != 4) 
    {
        fprintf(stderr, "Error: Wrong number of arguments!\n");
        fprintf(stderr, "Usage: %s <number> <operator> <number>\n", argv[0]);
        return 1;
    }
    char *num1_str = argv[1];
    char *op_str = argv[2];
    char *num2_str = argv[3];
    
    if (strlen(op_str) != 1) 
    {
        fprintf(stderr, "Error: Invalid operator!\n");
        return 1;
    }
    char op = op_str[0];
    
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        fprintf(stderr, "Error: Invalid operator!\n");
        return 1;
    }
    char *endptr;
    long num1 = strtol(num1_str, &endptr, 10);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: Operands should be integers!\n");
        return 1;
    }
    long num2 = strtol(num2_str, &endptr, 10);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: Operands should be integers!\n");
        return 1;
    }
    long result;
    switch (op) 
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) 
            {
                fprintf(stderr, "Error: Division by zero!\n");
                return 1;
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) 
            {
                fprintf(stderr, "Error: Division by zero!\n");
                return 1;
            }
            result = num1 % num2;
            break;
    }
    printf("%ld\n", result);
    return 0;
}