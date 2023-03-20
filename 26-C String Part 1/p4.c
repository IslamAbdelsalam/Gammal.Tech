#include <stdio.h>

int main()
{
    char firstName[100],secondName[100];

    printf("Enter your first name:\n");
    scanf("%s",firstName);

    printf("Enter your second name:\n");
    scanf("%s",secondName);

    printf("first => %c second=> %c\n",firstName[0],secondName[0]);

    return 0;
}
// DONE....