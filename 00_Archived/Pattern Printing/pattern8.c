//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *
// any square of N symbols

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the amount of rows: ");
    scanf("%d", &N);

    for (int line = 1; line <= N; line++)
    {
        if (line == 1 || line == N)
        {
            for (int j = 1; j < N + 1; j++)
            {
                printf("%2s", "*");
            }
            printf("\n");
        }
        else
        {
            printf("%2s", "*");
            for (int space = 1; space <= N; space++)
            {
                space == N - 1 ? printf("%2s", "*") : printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}
