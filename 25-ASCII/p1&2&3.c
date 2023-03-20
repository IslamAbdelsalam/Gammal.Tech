#include <stdio.h>
int main()
{
    char start, end;
    printf("Enter start char:\n");
    scanf(" %c",&start);

    printf("Enter end char:\n");
    scanf(" %c",&end);

    for(int i = start; i <= end; i++)
        printf("%c\n",i);

    return 0;
}
