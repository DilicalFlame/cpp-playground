//             1
//           1 2 1
//         1 2 3 2 1
//       1 2 3 4 3 2 1
//     1 2 3 4 5 4 3 2 1
//   1 2 3 4 5 6 5 4 3 2 1
// 1 2 3 4 5 6 7 6 5 4 3 2 1
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
        int number = 1;
        for (int j = 1; j <= 2 * line - 1; j++)
        {
            printf("%2d", number);
            j < line ? number++ : number--;
        }
        printf("\n");
    }
    return 0;
}
