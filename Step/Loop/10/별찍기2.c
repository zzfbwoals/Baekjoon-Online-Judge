#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = i-1; j < N-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}