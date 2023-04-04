#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter the 1th number:\n");
    scanf("%f", &num1);

    printf("Enter the 2th number:\n");
    scanf("%f", &num2);

    if (num1 > num2)
        printf("first is the greatest\n");
    else if (num2 > num1)
        printf("second is the greatest\n");
    else
        printf("Same numbers\n");

    return 0;
}