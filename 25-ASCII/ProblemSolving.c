#include <stdio.h>
int step;
void nextchar(char ch, int steps){
    printf("%c\n",ch+steps);
}

int main()
{
    char ch1;

    printf("Enter char\n");
    scanf(" %c",&ch1);

    printf("Enter the number of next steps\n");
    scanf("%d",&step);
    
    nextchar(ch1,step);

    return 0;
}
// DONE