#include <stdio.h>

int main()
{
    int arr[4][5] = {
        {4, 5, 3, 6, 6},
        {1, 3, 66, 9, 5},
        {9, 3, 6, 5, 8},
        {2, 6, 9, 8, 7}},
        arr2[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//DONE
