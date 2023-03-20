#include <stdio.h>
#include <string.h>
int main()
{
    char firstName[100], lastName[100];

    printf("Enter your first name:\n");
    scanf("%s", firstName);

    printf("Enter your family name:\n");
    scanf("%s", lastName);

    strcat(firstName,lastName);

    printf("%s\n",firstName);

    return 0;
}
// DONE