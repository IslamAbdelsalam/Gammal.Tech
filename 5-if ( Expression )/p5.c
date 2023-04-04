#include <stdio.h>
int main(){
    int p1, p2;

    printf("Enter no of goals for player 1:\n");
    scanf("%i",&p1);

    printf("Enter no of goals for player 2:\n");
    scanf("%i",&p2);

    if (p1 > p2)
        printf("player 1 is the winner\n");
    else if(p2 > p1)
        printf("player 2 is the winner\n");
    else
        printf("Draw\n");

    return 0;
}