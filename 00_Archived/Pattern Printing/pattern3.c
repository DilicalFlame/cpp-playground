// 1
// 2 2
// 3 3 3
// 4 4 4 4
// so on...

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the amount of rows: ");
    scanf("%d", &N);

    for (int line = 1; line <= N; line++)
    {
        for (int num = 1; num <= line; num++)
        {
            printf("%2d", line);
        }
        printf("\n");
    }
    return 0;
}
