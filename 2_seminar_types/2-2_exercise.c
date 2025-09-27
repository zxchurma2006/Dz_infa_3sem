#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t permutations(uint64_t n, uint64_t k) 
{
    uint64_t result = 1;
    for (uint64_t i = 0; i < k; i++) 
    {
        result *= (n - i);
    }
    return result;
}

int main()
{
    uint64_t n, k;
    scanf("%" SCNu64 " %" SCNu64, &n, &k);
    uint64_t result = permutations(n, k);
    printf("%d", result);
}