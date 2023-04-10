#include <stdio.h>

int main(){
    int time1, time2;

    printf("Enter time 1:\n");
    scanf("%i",&time1);

    printf("Enter time 2:\n");
    scanf("%i",&time2);

    if (time1 != time2)
        printf("No Bonus\n");
    else
        printf("same time\n");

    return 0;
}