#include <stdio.h>

int main()
{
    int x, y;
    long long sum = 0;

    printf("Enter size:\n");
    scanf("%d%d", &x, &y);

    int arr[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Result = %lld\n", sum);

    return 0;
}
//DONE