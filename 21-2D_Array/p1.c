#include <stdio.h>

int main()
{
    int arr[5][5];

    printf("Enter numbers:\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%i", &arr[i][j]);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%i", arr[i][j]);
        printf("\n");
    }

    return 0;
}
//DONE