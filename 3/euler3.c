#include <stlib.h>
#include <stdio.h>

long largest_prime(long N);

int main(int argc, char* argv[])
{
    /* Enter number you want to find largest prime factor of */
    const long N = atoi(argv[1]);

    printf("The largest prime in %li is %li", N, largest_prime(N)); 
}

long largest_prime(long N)
{
    long p = 0;

    for (int i = (N / 2); i > 1; i--)
    {
        if (N % i == 0)
        {
            
        }
    }

    return 
}