#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < (2 * N - 1); i++)
    {
        if (i < N)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < i - N + 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < (2 * (2 * N - 1 - i) - 1); j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}