#include <stdio.h>
int main()
{
    int base, exponent;

    long long result = 1;

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
    }

    printf("Answer = %lld", result);

    return 0;
}
