//       1
//     1 2
//   1 2 3
// 1 2 3 4
// so on...

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the amount of rows: ");
    scanf("%d", &N);

    for (int line = 1; line <= N; line++)
    {
        for (int space = 1; space <= N - line; space++)
        {
            printf("  "); // 2 spaces
        }
        for (int j = 1; j <= line; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}
