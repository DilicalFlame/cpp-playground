// 0
// 1 2
// 3 4 5
// 6 7 8 9
// so on...

#include <stdio.h>

int main()
{
    int N, number = 0;
    printf("Enter the amount of rows: ");
    scanf("%d", &N);

    for (int line = 1; line <= N; line++)
    {
        for (int _ = 1; _ <= line; _++)
        {
            printf("%2d", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
