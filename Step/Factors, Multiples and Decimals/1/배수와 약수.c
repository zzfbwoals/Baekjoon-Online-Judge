#include <stdio.h>

int main()
{
    while(1)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        if(A==0 && B==0)
            break;
        if(B%A==0)
            printf("factor\n");
        else if(A%B==0)
            printf("multiple\n");
        else
            printf("neither\n");
    }
    return 0;
}