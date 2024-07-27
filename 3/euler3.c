#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long llu;

llu largest_prime(llu N);

int main(int argc, char* argv[])
{
    /* Enter number you want to find largest prime factor of */
    //llu N = atoi(argv[1]);
    llu N = 600851475143;

    printf("The largest prime in %llu is %llu\n", N, largest_prime(N)); 
}

llu largest_prime(llu N)
{
    llu p = -1;
    llu divisor = 2;

    while (N > 1)
    {
        while (N % divisor == 0)
        {
            N = N / divisor;
            p = divisor;
        }
        divisor++;
    }

    return p;
}