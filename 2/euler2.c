#include <stdio.h>

int main(void)
{
    long long sum = 0;
    long long a = 1;
    long long b = 2;
    long long c = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            sum += b;
        }
        c = a + b;
        a = b;
        b = c;
    }

    printf("Sum of even terms: %lld\n", sum);
}