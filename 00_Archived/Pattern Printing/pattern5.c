// A
// A B
// A B C
// A B C D
// so on ...

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the amount of rows: ");
    scanf("%d", &N);
    int character = 65;

    for (int ln = 1; ln <= N; ln++)
    {
        for (int j = 1; j <= ln; j++)
        {
            printf("%2c", character);
            character++;
        }
        printf("\n");
    }
    return 0;
}
