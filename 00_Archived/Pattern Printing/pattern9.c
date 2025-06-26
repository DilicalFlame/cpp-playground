// for any number N:
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int line = 1; line <= 2 * N - 1; line++)
    {
        int stars = (line <= N) ? line : (2 * N - line);

        for (int j = 1; j <= stars; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
