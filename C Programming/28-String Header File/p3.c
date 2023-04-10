#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];

    printf("Enter your name:\n");
    scanf("%s", name);

    if (!strcmp(name, "Amr"))
    {
        printf("Correct\n");
    }
    else
    {
        printf("Invalid name\n");
    }

    return 0;
}
// DONE