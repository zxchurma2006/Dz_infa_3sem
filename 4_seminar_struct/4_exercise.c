#include <stdio.h>
#include <stddef.h>
#include <stdalign.h>

struct cat
{
    char x;
    size_t y;
};

struct dog
{
    size_t y;
    char x;
};

struct mouse
{
    char x;
    char y;
    size_t z;
};

struct rat
{
    char x;
    size_t z;
    char y;
};

struct fox
{
    char x;
    struct mouse y;
};

int main() {
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "char", sizeof(char), alignof(char));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "int", sizeof(int), alignof(int));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "size_t", sizeof(size_t), alignof(size_t));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "int[10]", sizeof(int[10]), alignof(int[10]));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "int*", sizeof(int*), alignof(int*));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "struct cat", sizeof(struct cat), alignof(struct cat));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "struct dog", sizeof(struct dog), alignof(struct dog));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "struct mouse", sizeof(struct mouse), alignof(struct mouse));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "struct rat", sizeof(struct rat), alignof(struct rat));
    printf("%-20s | Size: %2zu | Alignment: %2zu\n", "struct fox", sizeof(struct fox), alignof(struct fox));
    return 0;
}