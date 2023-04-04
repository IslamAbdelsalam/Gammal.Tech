#include <stdio.h>
int main()
{
    int day;

    printf("Enter a number from 1 : 7 (sat is 1)(fri is 7)\n");
    scanf("%i", &day);

    if (day == 7)
    {
        printf("wake me up at 10 am\n");
    }
    else if (day < 7 && day >= 1)
        printf("wake me up at 6 am\n");
    else
        printf("Error\n");

    return 0;
}
//Done 