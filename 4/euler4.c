#include <stdio.h>
#include <string.h>

int main(void)
{
    int max = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int num = i * j;
            /* Convert num to string */
            char* result;
            sprintf(result, "%i", num);
            while (strlen(result) > 0)
            {
                if (result[0] == result[strlen(result) - 1])
                {
                    char new_result[strlen(result) - 2];

                    /* Copy newly shortened string */
                    for (int i = 1; i < strlen(result) - 1; i++)
                    {
                        new_result[i] = result[i];
                    }
                    result[0] = &new_result;
                }
                else
                {
                    break;
                }

                if (num > max)
                {
                    max = num;
                }
            }
        }
    }
    printf("%i", max);
}